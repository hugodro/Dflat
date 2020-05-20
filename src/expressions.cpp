/**************************************************
* File: expressions.cpp.
* Desc: Definition of the expressions classes.
* Module: AkraLog : Compiler.
* Rev: 2007/11/27 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <akra/portableDefs.h>
#include "expressions.h"


/******************************
* Class: .
*******************************/

ExpressionSrp::ExpressionSrp()
{
//TODO.
}

ExpressionSrp::~ExpressionSrp()
{
//TODO.
}


bool ExpressionSrp::isResolved()
{
//TODO.
}



/******************************
* Class: .
*******************************/

LiteralExpr::LiteralExpr(LiteralSrp *aCte)
{
//TODO.
}

LiteralExpr::~LiteralExpr()
{
//TODO.
}


/******************************
* Class: .
*******************************/

SymbolExpr *SymbolExpr::getSpecialSymbol(SpecialSymbol aSymbol)
{
//TODO.
  return 0; //TMPTMP.
}

SymbolExpr::SymbolExpr(BaseIdentifierSrp *anIdent)
{
//TODO.
}

SymbolExpr::~SymbolExpr()
{
//TODO.
}


/******************************
* Class: .
*******************************/

ParenExpr::ParenExpr(ExpressionSrp *anExpr)
{
//TODO.
}

ParenExpr::~ParenExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

MemberAccessExpr::MemberAccessExpr(ExpressionSrp *anExpr, BaseIdentifierSrp *aName)
{
//TODO.
}

MemberAccessExpr::MemberAccessExpr(TypeDefinition *aType, BaseIdentifierSrp *aName)
{
//TODO.
}

MemberAccessExpr::~MemberAccessExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

InvokeExpr::InvokeExpr(ExpressionSrp *anExpr, ListExprBl *someArgs)
{
//TODO.
}

InvokeExpr::~InvokeExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

ModifiedArgExpr::ModifiedArgExpr(ExpressionSrp *anExpr, Modifier aModifier)
{
//TODO.
}

ModifiedArgExpr::~ModifiedArgExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

ArrayAccessExpr::ArrayAccessExpr(ExpressionSrp *aSrc, ListExprBl *someIndexes)
{
//TODO.
}

ArrayAccessExpr::~ArrayAccessExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

InitArrayExpr::InitArrayExpr(ListExprBl *aList)
{
//TODO.
}

InitArrayExpr::~InitArrayExpr()
{
//TODO.
}


void InitArrayExpr::setContinuation()
{
//TODO.
}



/******************************
* Class: .
*******************************/

PrePostExpr::PrePostExpr(ExpressionSrp *aSrc, Operator anOp)
{
//TODO.
}

PrePostExpr::~PrePostExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

NewInstExpr::NewInstExpr(TypeDefinition *aType, ListExprBl *someArgs)
{
//TODO.
}

NewInstExpr::NewInstExpr(TypeDefinition *aType, ListExprBl *someIndexes, ListSizesBl *someRanks, ExpressionSrp *someInit)
{
//TODO.
}

NewInstExpr::NewInstExpr(BaseIdentifierSrp *aDelType, ExpressionSrp *anArg)
{
//TODO.
}

NewInstExpr::~NewInstExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

OperatorExpr::OperatorExpr(ExpressionSrp *aSrc, Operators anOp)
{
//TODO.
}

OperatorExpr::OperatorExpr(TypeDefinition *aType, Operators anOp)
{
//TODO.
}

OperatorExpr::~OperatorExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

CastExpr::CastExpr(TypeDefinition *aType, ExpressionSrp *anExpr)
{
//TODO.
}

CastExpr::~CastExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

BinaryExpr::BinaryExpr(OperatorExpr::Operators anOp, ExpressionSrp *rightExpr, ExpressionSrp *leftExpr)
{
//TODO.
}

BinaryExpr::~BinaryExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

TernaryExpr::TernaryExpr(ExpressionSrp *testExpr, ExpressionSrp *rightExpr, ExpressionSrp *leftExpr)
{
//TODO.
}

TernaryExpr::~TernaryExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

AssignExpr::AssignExpr(OperatorExpr::Operators anOp, ExpressionSrp *rightExpr, ExpressionSrp *leftExpr)
 : BinaryExpr(anOp, rightExpr, leftExpr)
{
//TODO.
}

AssignExpr::~AssignExpr()
{
//TODO.
}



/******************************
* Class: .
*******************************/

TypeCheckExpr::TypeCheckExpr(ExpressionSrp *anExpr, TypeDefinition *aTypeDef)
{
//TODO.
}

TypeCheckExpr::~TypeCheckExpr()
{
//TODO.
}


