#ifndef _SHARP_STATEMENTS_H_
#define _SHARP_STATEMENTS_H_
/**************************************************
* File: statements.h.
* Desc: Definition of the statements class.
* Module: AkraLog : Compiler.
* Rev: 2001/04/26 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include "absSyntaxElement.h"


class IdentifierSrp;
class ExpressionSrp;
class TypeDefinition;
class BlockStmt;
class BlockListAk;
class ListExprBl;
class ListStmtBl;
class ListSpecCatchBl;
class ListVarDeclBl;
class BaseIdentifierSrp;


class DictStatements {
  public:
    enum Kinds {
      blockSt
      , declarationSt
      , emptySt
      , exprSt
      , iterationSt
      , jumpSt, breakSt, continueSt, gotoSt, exitSt, returnSt
      , labeledSt
      , selectionSt
      , trySt, throwSt
      , usingSt
    };
};


class StatementSrp : public AbstractSyntaxElementSrp {
  protected:

  public:
    StatementSrp();
    virtual ~StatementSrp();
};


class EmptyStatement : public StatementSrp {
  public:
    EmptyStatement();
};


class DeclarationStmt : public StatementSrp {
 public:
  DeclarationStmt(ListVarDeclBl *someVarDecl);
  //TODO:  DeclarationStmt(ContantDeclBl *someConstants);
};


class LabeledStmt : public StatementSrp {
  public:
    LabeledStmt(BaseIdentifierSrp *aLabel, StatementSrp *statement);
    LabeledStmt(ListExprBl *cteLabels, ListStmtBl *statements);
};


class CoreBlockStmt : public StatementSrp {
};


class BlockStmt : public CoreBlockStmt {
  protected:
    ListStmtBl *statements;

  public:
    BlockStmt(ListStmtBl *aList);

    virtual void add(StatementSrp *aStmt);
};


class ExpressionStmt : public StatementSrp {
 public:
  ExpressionStmt(ExpressionSrp *anExpr);
};


class SelectionStmt : public StatementSrp {
};


class IfStmt : public SelectionStmt {
  public:
    IfStmt(ExpressionSrp *aSel, StatementSrp *trueStmt, StatementSrp *falseStmt);
    virtual ~IfStmt();
};


class SwitchStmt : public SelectionStmt {
  public:
    SwitchStmt(ExpressionSrp *aSel, ListStmtBl *statements);
    virtual ~SwitchStmt();
};


class IterationStmt : public StatementSrp {
};


class WhileStmt : public IterationStmt {
  public:
    WhileStmt(ExpressionSrp *aSel, StatementSrp *aStmt);
    virtual ~WhileStmt();
};


class DoStmt : public IterationStmt {
  public:
    DoStmt(ExpressionSrp *aSel, StatementSrp *aStmt);
    virtual ~DoStmt();
};


class ForStmt : public IterationStmt {
  public:
    ForStmt(BlockListAk *someInit, ExpressionSrp *aCondition, ListStmtBl *someIter, StatementSrp *aStmt);
    virtual ~ForStmt();
};


class ForEachStmt : public IterationStmt {
  public:
  ForEachStmt(TypeDefinition *aType, IdentifierSrp *anIdent, ExpressionSrp *anExpr, StatementSrp *aStmt);
    virtual ~ForEachStmt();
};


class JumpStmt : public StatementSrp {
  public:
    JumpStmt(DictStatements::Kinds aKind);
    virtual ~JumpStmt();
};


class GotoStmt : public JumpStmt {
  public:
    GotoStmt(IdentifierSrp *aLabel);
    GotoStmt(ExpressionSrp *aValue);
    virtual ~GotoStmt();
};


class ExitStmt : public JumpStmt {
  public:
    ExitStmt(ExpressionSrp *aValue);
    virtual ~ExitStmt();
};


class ReturnStmt : public JumpStmt {
  public:
    ReturnStmt(ExpressionSrp *aValue);
};


class ThrowStmt : public JumpStmt {
  public:
    ThrowStmt(ExpressionSrp *aValue);
};


class ClauseHolderSrp {
  protected:
    ListSpecCatchBl *specifics;
    BlockStmt *general;

  public:
    ClauseHolderSrp(ListSpecCatchBl *someSpecifics, BlockStmt *aGen);
    virtual ~ClauseHolderSrp();

    inline ListSpecCatchBl *getSpecificClauses() { return specifics; }
    inline BlockStmt *getGeneralClause() { return general; }
};

class CatchStmtHelper {
  public:
    CatchStmtHelper(TypeDefinition *aType, IdentifierSrp *anIdent, BlockStmt *aBlock);
    virtual ~CatchStmtHelper();
};


class TryCatchStmt : public StatementSrp {
  public:
    TryCatchStmt(BlockStmt *firstBlock, ListSpecCatchBl *someSpecifics, BlockStmt *aGeneral, BlockStmt *lastBlock);
    virtual ~TryCatchStmt();
};


class MemBoundedStmt : public StatementSrp {
  public:
    MemBoundedStmt(bool aFlag, BlockStmt *aBlock);
    virtual ~MemBoundedStmt();
};


class LockStmt : public StatementSrp {
  public:
    LockStmt(ExpressionSrp *anExpr, StatementSrp *aStmt);
    virtual ~LockStmt();
};


class UsingStmt : public StatementSrp {
};


#endif          /* _SHARP_STATEMENTS_H_ */
