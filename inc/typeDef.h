#ifndef _TYPE_DEFINITION_H_
#define _TYPE_DEFINITION_H_
/**************************************************
* File: typeDef.h.
* Desc: Definition of the type definition classes.
* Module: AkraLog : Compiler.
* Rev: 2001/04/28 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include "defSymbols.h"

class SimpleTypeDef;
class BaseIdentifierSrp;


class DictBuiltInTypes {
  public:
    enum PreDefined {
      boolBt
      , byteBt
      , charBt
      , decimalBt
      , doubleBt
      , floatBt
      , intBt
      , longBt
      , objectBt
      , sbyteBt
      , shortBt
      , stringBt
      , uintBt
      , ulongBt
      , ushortBt
      , voidBt
    };

  public:
    static SimpleTypeDef *getPredefined(PreDefined aType);

};


class TypeDefinition : public DefinitionSrp {
  protected:

  public:
    TypeDefinition();
    virtual ~TypeDefinition();
};


class UnresolvedType : public TypeDefinition {
  /* Type to use when we know that a symbol is a type, but haven't got a definition for that type yet. */
  public:
    UnresolvedType(BaseIdentifierSrp *anIdent);
};


class SimpleTypeDef : public TypeDefinition {
};


class ClassDefinition : public TypeDefinition {
};


class ArrayTypeDef : public TypeDefinition {
};


class StructureDef : public TypeDefinition {
};


class PointerTypeDef : public TypeDefinition {
  public:
    PointerTypeDef();    // Used to represent 'void *'.
    PointerTypeDef(TypeDefinition *aType);
};


#endif          /* _TYPE_DEFINITION_H_ */
