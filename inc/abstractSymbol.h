#ifndef _ABSTRACT_SYMBOL_H_
#define _ABSTRACT_SYMBOL_H_
/**************************************************
* File: abstractSymbol.h.
* Desc: Definition of the base class for symbol.
* Module: AkraLog : Compiler.
* Rev: 2001/04/28 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/


class AbstractSymbolSrp {
  protected:

  public:
    virtual bool isUnknown()= 0;
};

#endif          /* _ABSTRACT_SYMBOL_H_ */
