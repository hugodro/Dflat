#ifndef _VARIABLE_DECLARATION_H_
#define _VARIABLE_DECLARATION_H_
/**************************************************
* File: varDecl.h.
* Desc: Definition of the variable declaration classes.
* Module: AkraLog : Compiler.
* Rev: 2001/05/02 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

class IdentifierSrp;
class ExpressionSrp;
class TypeDefinition;


class VarDeclarationSrp {
 public:
  VarDeclarationSrp(IdentifierSrp *aName);
  VarDeclarationSrp(IdentifierSrp *aName, ExpressionSrp *anInit);
  virtual ~VarDeclarationSrp();
  
  virtual void setType(TypeDefinition *aType);
};


#endif	/* _VARIABLE_DECLARATION_H_ */

