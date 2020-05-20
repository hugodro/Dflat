#ifndef _DEFINED_SYMBOL_H_
#define _DEFINED_SYMBOL_H_
/**************************************************
* File: defSymbols.h.
* Desc: Definition of the basic symbol definition classes.
* Module: AkraLog : Compiler.
* Rev: 2001/04/28 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include "abstractSymbol.h"


class UnknownSymbolSrp : public AbstractSymbolSrp {
  protected:

  public:
    UnknownSymbolSrp();
    virtual ~UnknownSymbolSrp();
    virtual bool isUnknown();
};

class DefinitionSrp : public AbstractSymbolSrp {
  protected:

  public:
    DefinitionSrp();
    virtual ~DefinitionSrp();
    virtual bool isUnknown();
};

#endif          /* _DEFINED_SYMBOL_H_ */
