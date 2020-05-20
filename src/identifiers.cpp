/**************************************************
* File: identifiers.cpp.
* Desc: Definition of the Sharp identifiers classes.
* Module: AkraLog : Compiler.
* Rev: 2001/04/26 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <iostream>
#include <string>

#include "poolIdent.h"
#include "hashManager.h"
#include "hashElement.h"
#include "errors.h"
#include "identifiers.h"


/************************************************
* Implementation: IdentifierSrp.
************************************************/

/*************************
* Class members.
************************/
bool IdentifierSrp::isClassInit= IdentifierSrp::InitClass();
PoolIdentifiersSrp *IdentifierSrp::poolMgr;
HashManagerAk *IdentifierSrp::hashMgr;


bool IdentifierSrp::InitClass()
{
  try {
    poolMgr= new PoolIdentifiersSrp();
    hashMgr= new HashManagerAk();
    return true;
  }
  catch (...) {
    return false;
  }
}


/*************************
* Instance members.
************************/

IdentifierSrp::IdentifierSrp()
{
  length= 0;
  encoding= ascii;
}


IdentifierSrp::IdentifierSrp(char *content)
{
  if (content != NULL) {
    length= strlen(content);
    if (length > 0) {
      content8Bits= new char[length + 1];
      memcpy(content8Bits, content, length + 1);
    }
  }
  else
    length= 0;
    encoding= ascii;
}


IdentifierSrp::~IdentifierSrp()
{
  cleanup();
}


IdentifierSrp *IdentifierSrp::addUniqueInstance(char *aValue)
{
  IdentifierSrp *result;
  bool foundValue;

  result=  (IdentifierSrp *)hashMgr->getItem(aValue, foundValue);
  if (!foundValue) {
    HashElementAk *newKey;

    result= new IdentifierSrp(aValue);
    hashMgr->addUniqueItem(aValue, result, &newKey);
    newKey->setKey(result->getAsciiContent());
  }
  return result;
}


void* IdentifierSrp::operator new(size_t size)
{
  if (size == sizeof(IdentifierSrp)) {
    return poolMgr->provide();
  }
  else
    // DOERR: we are asked to create an object that doesn't fit in the PoolMgr.
    throw new ErrorCompiler();
}


void IdentifierSrp::operator delete(void *anObject)
{
  poolMgr->recup((IdentifierSrp *)anObject);
}


bool IdentifierSrp::isQualified()
{
  return false;
}


bool IdentifierSrp::isEqual(BaseIdentifierSrp *anIdent)
{
  // TODO.

  if (this != anIdent) {
  }
  else
    return true;
}


void IdentifierSrp::cleanup()
{
  // This does what the 'delete' operator would have normally done.
  if (encoding == ascii)
    delete[] content8Bits;
  else
    delete[] content16Bits;
}


void IdentifierSrp::showNameDBG()
{
  std::cout << "@DBG [IdentifierSrp.showNameDBG]: '" << content8Bits << "'.\n";
}

/************************************************
* Implementation: QualifiedIdentSrp.
************************************************/

QualifiedIdentSrp::QualifiedIdentSrp(IdentifierSrp *anIdent)
{
  stackSize= defaultStackSize;
  stack= new IdentifierSrp*[stackSize];
  stack[0]= anIdent;
  nbrElements= 1;
}


QualifiedIdentSrp::~QualifiedIdentSrp()
{
  // ATTN: Must go through the stack elements and release them ?
  delete[] stack;
}

void QualifiedIdentSrp::growStack()
{
    IdentifierSrp **tmpStack;

    tmpStack= stack;
    stackSize+= defaultStackSize;
    stack= new IdentifierSrp*[stackSize];
    memcpy(stack, tmpStack, nbrElements * sizeof(IdentifierSrp *));
    delete[] tmpStack;
}


void QualifiedIdentSrp::push(IdentifierSrp *anIdent)
{
  if (nbrElements == stackSize)
    growStack();

  stack[nbrElements++]= anIdent;
}


void QualifiedIdentSrp::revpush(IdentifierSrp *anIdent)
{
  if (nbrElements == stackSize)
    growStack();

  nbrElements++;
  for (int i= nbrElements; i > 0; i--) {
    stack[i]= stack[i-1];
  }
  stack[0]= anIdent;
}


IdentifierSrp *QualifiedIdentSrp::pop()
{
  if (nbrElements > 0) {
    nbrElements--;
    return stack[nbrElements];
  }
  else
    return NULL;
}


IdentifierSrp *QualifiedIdentSrp::revpop()
{
  if (nbrElements > 0) {
    IdentifierSrp *result= stack[0];

    nbrElements--;
    for (uint i= 0; i < nbrElements; i++)
      stack[i]= stack[i+1];
    stack[nbrElements]= NULL;
    return result;
  }
  else
    return NULL;
}


bool QualifiedIdentSrp::isQualified()
{
  return true;
}


bool QualifiedIdentSrp::isEqual(BaseIdentifierSrp *anIdent)
{
  // TODO.

  if (this != anIdent) {
  }
  else
    return true;
}


void QualifiedIdentSrp::showNameDBG()
{
  std::cout << "@DBG [QualifiedIdentSrp.showNameDBG]: '";
  for (unsigned int i= 0; i < nbrElements; i++) {
    if (i < (nbrElements - 1)) {
      std::cout << stack[i]->getAsciiContent() << ".";
    }
    else
      std::cout << stack[i]->getAsciiContent() << "'.\n";
  }
}

