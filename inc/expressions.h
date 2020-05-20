#ifndef _EXPRESSIONS_SHARP_H_
#define _EXPRESSIONS_SHARP_H_
/**************************************************
* File: expressions.h.
* Desc: Definition of the expressions classes.
* Module: AkraLog : Compiler.
* Rev: 2001/04/26 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include "absSyntaxElement.h"


class BaseIdentifierSrp;
class IdentifierSrp;
class LiteralSrp;
class SimpleTypeDef;
class TypeDefinition;
class ListExprBl;
class ListSizesBl;
class SymbolExpr;

class DictExpressions {
  public:
    enum Kinds {
      operatorExp
      , literalExp
      , valueExp
      , invokeExp
    };
};


class ExpressionSrp : public AbstractSyntaxElementSrp {
  protected:

  public:
    ExpressionSrp();
    virtual ~ExpressionSrp();

    virtual bool isResolved();
};


class LiteralExpr : public ExpressionSrp {
  protected:
    LiteralSrp *value;

  public:
    LiteralExpr(LiteralSrp *aCte);
    virtual ~LiteralExpr();
};


class SymbolExpr : public ExpressionSrp {
  public:
    enum SpecialSymbol {
      thisSym, baseSym
    };

  public:
    /* Must return a new instance of a special symbol, since the resolution
       depends on the symbolSpace where it occurs. */
    static SymbolExpr *getSpecialSymbol(SpecialSymbol aSymbol);

  public:
    SymbolExpr(BaseIdentifierSrp *anIdent);
    virtual ~SymbolExpr();
};


class ParenExpr : public ExpressionSrp {
  public:
    ParenExpr(ExpressionSrp *anExpr);
    virtual ~ParenExpr();
};


class MemberAccessExpr : public ExpressionSrp {
  public:
    MemberAccessExpr(ExpressionSrp *anExpr, BaseIdentifierSrp *aName);
    MemberAccessExpr(TypeDefinition *aType, BaseIdentifierSrp *aName);
    virtual ~MemberAccessExpr();
};


class InvokeExpr : public ExpressionSrp {
  public:
    InvokeExpr(ExpressionSrp *anExpr, ListExprBl *someArgs);
    virtual ~InvokeExpr();
};


class ModifiedArgExpr : public ExpressionSrp {
  public:
    enum Modifier {
      refMod, outMod
    };
  public:
    ModifiedArgExpr(ExpressionSrp *anExpr, Modifier aModifier);
    virtual ~ModifiedArgExpr();
};


class ArrayAccessExpr : public ExpressionSrp {
  public:
    ArrayAccessExpr(ExpressionSrp *aSrc, ListExprBl *someIndexes);
    virtual ~ArrayAccessExpr();
};


class InitArrayExpr : public ExpressionSrp {
  public:
    InitArrayExpr(ListExprBl *aList);
    virtual ~InitArrayExpr();

    virtual void setContinuation();
};


class PrePostExpr : public ExpressionSrp {
  public:
    enum Operator {
      preDecr, preIncr
      , postDecr, postIncr
    };

  public:
    PrePostExpr(ExpressionSrp *aSrc, Operator anOp);
    virtual ~PrePostExpr();
};


class NewInstExpr : public ExpressionSrp {
  public:
    NewInstExpr(TypeDefinition *aType, ListExprBl *someArgs);
    NewInstExpr(TypeDefinition *aType, ListExprBl *someIndexes, ListSizesBl *someRanks, ExpressionSrp *someInit);
    NewInstExpr(BaseIdentifierSrp *aDelType, ExpressionSrp *anArg);
    virtual ~NewInstExpr();
};


class OperatorExpr : public ExpressionSrp {
  public:
    enum Operators {
      typeofOp, sizeofOp
      , checkedOp, uncheckedOp
      , addOp, subOp, modOp
      , multOp, divOp
      , notOp, xorOp
      , andOp, orOp
      , leftShiftOp, rightShiftOp
      , gtOp, ltOp, geOp, leOp
      , eqOp, neOp
      , andCndOp, orCndOp
      , assignOp
    };

  public:
    OperatorExpr(ExpressionSrp *aSrc, Operators anOp);
    OperatorExpr(TypeDefinition *aType, Operators anOp);
    virtual ~OperatorExpr();
};


class CastExpr : public ExpressionSrp {
  public:
    CastExpr(TypeDefinition *aType, ExpressionSrp *anExpr);
    virtual ~CastExpr();
};


class BinaryExpr : public ExpressionSrp {
  public:
    BinaryExpr(OperatorExpr::Operators anOp, ExpressionSrp *rightExpr, ExpressionSrp *leftExpr);
    virtual ~BinaryExpr();
};


class TernaryExpr : public ExpressionSrp {
  public:
    TernaryExpr(ExpressionSrp *testExpr, ExpressionSrp *rightExpr, ExpressionSrp *leftExpr);
    virtual ~TernaryExpr();
};


class AssignExpr : public BinaryExpr {
  public:
    AssignExpr(OperatorExpr::Operators anOp, ExpressionSrp *rightExpr, ExpressionSrp *leftExpr);
    virtual ~AssignExpr();
};


class TypeCheckExpr : public ExpressionSrp {
  public:
    TypeCheckExpr(ExpressionSrp *anExpr, TypeDefinition *aTypeDef);
    virtual ~TypeCheckExpr();
};


#endif          /* _EXPRESSIONS_SHARP_H_ */
