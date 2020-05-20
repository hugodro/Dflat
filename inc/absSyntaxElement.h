#ifndef _ABSTRACT_SYNTAXELEMENT_H_
#define _ABSTRACT_SYNTAXELEMENT_H_
/**************************************************
* File: absSyntaxElement.h.
* Desc: Definition of the base class for syntax elements (exprs, stmts).
* Module: AkraLog : Compiler.
* Rev: 2001/04/28 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

class SyntaxFamilies {
  public:
    enum Categories {
      statement= 0x080000000
      , expression= 0x040000000
    };
    enum Statements {
      blockSt, ExprSt
      , ifSt, switchSt
      , whileSt, doSt, forSt, foreachSt
    };
    enum Expressions {
    };

};


class AbstractSyntaxElementSrp {
  protected:
    AbstractSyntaxElementSrp *root;

  public:
    AbstractSyntaxElementSrp();
    AbstractSyntaxElementSrp(AbstractSyntaxElementSrp *aRoot);
    virtual ~AbstractSyntaxElementSrp();

    virtual unsigned int getSpecialization();
    inline AbstractSyntaxElementSrp *getRoot() { return root; }
};

#endif          /* _ABSTRACT_SYNTAXELEMENT_H_ */
