#ifndef _LITERALS_SHARP_H_
#define _LITERALS_SHARP_H_
/**************************************************
* File: literals.h.
* Desc: Definition of the literals classes.
* Module: AkraLog : Compiler.
* Rev: 2001/05/02 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

class DictLiterals {
  public:
    enum Kinds {
      boolLit
      , charLit
      , integerLit
      , nullLit
      , realLit
      , stringLit
    };
};


class LiteralSrp {
};


class BoolLiteral : public LiteralSrp {
};

class CharLiteral : public LiteralSrp {
};

class IntegerLiteral : public LiteralSrp {
};

class NullLiteral : public LiteralSrp {
};

class RealLiteral : public LiteralSrp {
};

class StringLiteral : public LiteralSrp {
};


#endif	/* _LITERALS_SHARP_H_ */

