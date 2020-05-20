/**************************************************
* File: poolIdent.cpp.
* Desc: Definition of the IdentifierSrp pool management classes.
* Module: AkraLog : Compiler.
* Rev: 2001/04/27 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <string.h>

#include "identifiers.h"
#include "poolIdent.h"

/************************************************
* Implementation: ElementBlockSrp.
************************************************/

ElementBlockSrp::ElementBlockSrp(uint blockSize)
{
  uint allocSize;

  prev= NULL;
  size= blockSize;
  elements= new IdentifierSrp[size];
  nbrElements= 0;
  allocSize= nbrElements / 32 + (((nbrElements % 32) == 0) ? 0 : 1);
  allocMap= new uint[allocSize];
  memset(allocMap, 0, sizeof(uint) * allocSize);
}


ElementBlockSrp::ElementBlockSrp(ElementBlockSrp *root)
{
  uint allocSize;

  prev= root;
  size= root->size;
  elements= new IdentifierSrp[size];
  nbrElements= 0;
  allocSize= size / 32 + (((size % 32) == 0) ? 0 : 1);
  allocMap= new uint[allocSize];
  memset(allocMap, 0, sizeof(uint) * allocSize);
}


ElementBlockSrp::~ElementBlockSrp()
{
  for (uint i= 0; i < size; i++) {
    elements[i].cleanup();
  }
  delete[] elements;
}


IdentifierSrp *ElementBlockSrp::provide()
{
  if (nbrElements < size) {
    uint allocSize= size / 32 + (((size % 32) == 0) ? 0 : 1);
    uint pos, i;

    for (i= 0; i < allocSize; i++) {
      if (allocMap[i] != 0x0FFFFFFFF) {
	if ((allocMap[i] & 0x0FFFF0000) != 0x0FFFF0000) {
	  if ((allocMap[i] & 0x0FF000000) != 0x0FF000000)
	    pos= findFreeBit(allocMap[i], 24, 8);
	  else
	    pos= findFreeBit(allocMap[i], 16, 8);
	}
	else {
	  if ((allocMap[i] & 0x00000FF00) != 0x00000FF00)
	    pos= findFreeBit(allocMap[i], 8, 8);
	  else
	    pos= findFreeBit(allocMap[i], 0, 8);
	}
	break;
      }
    }
    if (i == allocSize) {
      // DOERR: Internal inconsistency on availability on nbr of elements vs allocMap.
      return NULL;
    }
    else {
      allocMap[i]|= (1 << pos);
      nbrElements++;
      return elements + (i * 32 + pos);
    }
  }
  else
    return NULL;
}


bool ElementBlockSrp::recup(IdentifierSrp *aDead)
{
  // TODO.
  return false;
}


uint ElementBlockSrp::findFreeBit(uint aMap, uint offset, uint length)
{
  uint peeker= 1 << offset;

  for (uint i= 0; i < length; i++) {
    if ((aMap & peeker) == 0)
      return offset + i;
    peeker<<= 1;
  }

  // DOERR: Should indicate no hole found.
  return 0x0FFFFFFFF;
}

/************************************************
* Implementation: PoolIdentifiersSrp.
************************************************/

PoolIdentifiersSrp::PoolIdentifiersSrp()
{
  blocks= new ElementBlockSrp(blockSize);
  nbrBlocks= 1;
}


PoolIdentifiersSrp::~PoolIdentifiersSrp()
{
  ElementBlockSrp *tmpBlock;

  while (blocks != NULL) {
    tmpBlock= blocks->getPrev();
    delete blocks;
    blocks= tmpBlock;
  }
}


IdentifierSrp *PoolIdentifiersSrp::provide()
{
  IdentifierSrp *result;

  if ((result= blocks->provide()) == NULL) {
    blocks= new ElementBlockSrp(blocks);
    nbrBlocks++;
    result= blocks->provide();
  }
  return result;
}


bool PoolIdentifiersSrp::recup(IdentifierSrp *garbage)
{
  ElementBlockSrp *tmpBlock;

  while (blocks != NULL) {
    tmpBlock= blocks->getPrev();
    if (blocks->recup(garbage)) {
      return true;      // Warning: quick exit.
    }
    blocks= tmpBlock;
  }

  // If the loop ends, then the element wasn't found in the pool.
  return false;
}

