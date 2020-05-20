/**************************************************
* File: statements.cpp.
* Desc: Implementation of the statements class.
* Module: AkraLog : Compiler.
* Rev: 2007/11/27 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <akra/portableDefs.h>
#include "statements.h"


/******************************
* Class: StatementSrp.
*******************************/
StatementSrp::StatementSrp()
{
//TODO.
}

StatementSrp::~StatementSrp()
{
//TODO.
}


/******************************
* Class: .
*******************************/

EmptyStatement::EmptyStatement()
{
//TODO.
}



/******************************
* Class: .
*******************************/

DeclarationStmt::DeclarationStmt(ListVarDeclBl *someVarDecl)
{
//TODO.
}

/* TODO:  DeclarationStmt::DeclarationStmt(ContantDeclBl *someConstants)
{
//TODO.
}
*/


/******************************
* Class: .
*******************************/

LabeledStmt::LabeledStmt(BaseIdentifierSrp *aLabel, StatementSrp *statement)
{
//TODO.
}

LabeledStmt::LabeledStmt(ListExprBl *cteLabels, ListStmtBl *statements)
{
//TODO.
}



/******************************
* Class: .
*******************************/

BlockStmt::BlockStmt(ListStmtBl *aList)
{
//TODO.
}


void BlockStmt::add(StatementSrp *aStmt)
{
//TODO.
}



/******************************
* Class: .
*******************************/

ExpressionStmt::ExpressionStmt(ExpressionSrp *anExpr)
{
//TODO.
}



/******************************
* Class: .
*******************************/

IfStmt::IfStmt(ExpressionSrp *aSel, StatementSrp *trueStmt, StatementSrp *falseStmt)
{
//TODO.
}

IfStmt::~IfStmt()
{
//TODO.
}



/******************************
* Class: .
*******************************/

SwitchStmt::SwitchStmt(ExpressionSrp *aSel, ListStmtBl *statements)
{
//TODO.
}

SwitchStmt::~SwitchStmt()
{
//TODO.
}



/******************************
* Class: .
*******************************/

WhileStmt::WhileStmt(ExpressionSrp *aSel, StatementSrp *aStmt)
{
//TODO.
}

WhileStmt::~WhileStmt()
{
//TODO.
}



/******************************
* Class: .
*******************************/

DoStmt::DoStmt(ExpressionSrp *aSel, StatementSrp *aStmt)
{
//TODO.
}

DoStmt::~DoStmt()
{
//TODO.
}



/******************************
* Class: .
*******************************/

ForStmt::ForStmt(BlockListAk *someInit, ExpressionSrp *aCondition, ListStmtBl *someIter, StatementSrp *aStmt)
{
//TODO.
}

ForStmt::~ForStmt()
{
//TODO.
}



/******************************
* Class: .
*******************************/

ForEachStmt::ForEachStmt(TypeDefinition *aType, IdentifierSrp *anIdent, ExpressionSrp *anExpr, StatementSrp *aStmt)
{
//TODO.
}

ForEachStmt::~ForEachStmt()
{
//TODO.
}



/******************************
* Class: .
*******************************/

JumpStmt::JumpStmt(DictStatements::Kinds aKind)
{
//TODO.
}

JumpStmt::~JumpStmt()
{
//TODO.
}



/******************************
* Class: .
*******************************/

GotoStmt::GotoStmt(IdentifierSrp *aLabel)
 : JumpStmt(DictStatements::gotoSt)
{
//TODO.
}

GotoStmt::GotoStmt(ExpressionSrp *aValue)
 : JumpStmt(DictStatements::gotoSt)
{
//TODO.
}

GotoStmt::~GotoStmt()
{
//TODO.
}



/******************************
* Class: .
*******************************/

ExitStmt::ExitStmt(ExpressionSrp *aValue)
 : JumpStmt(DictStatements::exitSt)
{
//TODO.
}

ExitStmt::~ExitStmt()
{
//TODO.
}



/******************************
* Class: .
*******************************/

ReturnStmt::ReturnStmt(ExpressionSrp *aValue)
 : JumpStmt(DictStatements::returnSt)
{
//TODO.
}



/******************************
* Class: .
*******************************/

ThrowStmt::ThrowStmt(ExpressionSrp *aValue)
 : JumpStmt(DictStatements::throwSt)
{
//TODO.
}



/******************************
* Class: .
*******************************/

ClauseHolderSrp::ClauseHolderSrp(ListSpecCatchBl *someSpecifics, BlockStmt *aGen)
{
//TODO.
}

ClauseHolderSrp::~ClauseHolderSrp()
{
//TODO.
}



/******************************
* Class: .
*******************************/

CatchStmtHelper::CatchStmtHelper(TypeDefinition *aType, IdentifierSrp *anIdent, BlockStmt *aBlock)
{
//TODO.
}

CatchStmtHelper::~CatchStmtHelper()
{
//TODO.
}



/******************************
* Class: .
*******************************/

TryCatchStmt::TryCatchStmt(BlockStmt *firstBlock, ListSpecCatchBl *someSpecifics, BlockStmt *aGeneral, BlockStmt *lastBlock)
{
//TODO.
}

TryCatchStmt::~TryCatchStmt()
{
//TODO.
}



/******************************
* Class: .
*******************************/

MemBoundedStmt::MemBoundedStmt(bool aFlag, BlockStmt *aBlock)
{
//TODO.
}

MemBoundedStmt::~MemBoundedStmt()
{
//TODO.
}



/******************************
* Class: .
*******************************/

LockStmt::LockStmt(ExpressionSrp *anExpr, StatementSrp *aStmt)
{
//TODO.
}

LockStmt::~LockStmt()
{
//TODO.
}

