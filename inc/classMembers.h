#ifndef _CLASSMEMBER_DEFINITION_H_
#define _CLASSMEMBER_DEFINITION_H_
/**************************************************
* File: classmemberDef.h.
* Desc: Definition of the classmember definition classes.
* Module: AkraLog : Compiler.
* Rev: 2001/04/28 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/


#include "defSymbols.h"

class StatementSrp;


class ClassMemberDefinition : public DefinitionSrp {
  protected:

  public:
    ClassMemberDefinition();
    virtual ~ClassMemberDefinition();
};


class DataHolderDef : public ClassMemberDefinition {
};


class CallableDef : public ClassMemberDefinition {
};


class InternalTypeDef : public ClassMemberDefinition {
};


class FieldDefinition : public DataHolderDef {
};


class EnumDefinition : public DataHolderDef {
};


class IndexerDef : public DataHolderDef {
};


class ConstantDef : public DataHolderDef {
};


class MethodDefinition : public CallableDef {
 public:
  MethodDefinition();
  virtual ~MethodDefinition();
  virtual void addBody(StatementSrp *aBody);
};


class CstrDstrMethodDef : public MethodDefinition {
};


class OperatorDef : public CallableDef {
};


class PropertyDef : public CallableDef {
};


class EventDefinition : public CallableDef {
};


#endif          /* _CLASSMEMBER_DEFINITION_H_ */
