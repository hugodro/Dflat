#ifndef _POOL_IDENTIFIERSS_H_
#define _POOL_IDENTIFIERSS_H_
/**************************************************
* File: poolIdent.h.
* Desc: Definition of the Sharp poolIdent classes.
* Module: AkraLog : Compiler.
* Rev: 2001/04/26 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <akra/portableDefs.h>


class IdentifierSrp;


class ElementBlockSrp {
  protected:
    ElementBlockSrp *prev;
    IdentifierSrp *elements;
    uint nbrElements;
    uint size;
    uint *allocMap;

  public:
    ElementBlockSrp(uint blockSize);
    ElementBlockSrp(ElementBlockSrp *root);
    virtual ~ElementBlockSrp();

    virtual IdentifierSrp *provide();
    virtual bool recup(IdentifierSrp *aDead);

    uint findFreeBit(uint aMap, uint pos, uint offset);

    inline ElementBlockSrp *getPrev() { return prev; }
};


class PoolIdentifiersSrp {
  public:
    enum Constants {
      blockSize= 1971
    };

  protected:
    ElementBlockSrp *blocks;
    uint nbrBlocks;

  public:
    PoolIdentifiersSrp();
    virtual ~PoolIdentifiersSrp();

    virtual IdentifierSrp *provide();
    virtual bool recup(IdentifierSrp *garbage);
};

#endif	/* _POOL_POOLIDENTS_H_ */
