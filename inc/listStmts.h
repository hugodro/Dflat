#ifndef _BL_STATEMENTS_H_
#define _BL_STATEMENTS_H_
/**************************************************
* File: listStmt.h.
* Desc: Definition of the ListStmtBl class.
* Module: AkraLog : JavaKit.
* Rev: 2001/04/28 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <akra/portableDefs.h>
#include "blockList.h"

class StatementSrp;
class ExpressionSrp;
class VarDeclarationSrp;
class TypeDefinition;
class CatchStmtHelper;


class ListStmtBl : public BlockListAk {
  protected:

  public:
    ListStmtBl(StatementSrp *rElement);
    virtual ~ListStmtBl();

    virtual void add(StatementSrp *anElement);
};


/******** Other kind of lists. ***********/

class ListExprBl : public BlockListAk {
  protected:

  public:
    ListExprBl(ExpressionSrp *rElement);
    virtual ~ListExprBl();

    virtual void add(ExpressionSrp *anElement);
};


class ListVarDeclBl : public BlockListAk {
  protected:

  public:
    ListVarDeclBl(VarDeclarationSrp *aDecl);
    virtual ~ListVarDeclBl();

    virtual void add(VarDeclarationSrp *anElement);
    virtual void broadcastType(TypeDefinition *aType);
};


class ListSpecCatchBl : public BlockListAk {
  public:
    ListSpecCatchBl(CatchStmtHelper *aStmt);
    virtual ~ListSpecCatchBl();

    virtual void add(CatchStmtHelper *aStmt);
};


class ListSizesBl : public BlockListAk {
  public:
    ListSizesBl(unsigned int aSize);
    virtual ~ListSizesBl();

    virtual void add(uint aSize);
};


#endif	 /*_BL_STATEMENTS_H_ */
