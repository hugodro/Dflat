#ifndef _SHARP_IDENTIFIERS_H_
#define _SHARP_IDENTIFIERS_H_
/**************************************************
* File: identifiers.h.
* Desc: Definition of the Sharp identifiers classes.
* Module: AkraLog : Compiler.
* Rev: 2001/04/26 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <akra/portableDefs.h>


class PoolIdentifiersSrp;
class HashManagerAk;

class BaseIdentifierSrp {
  public:
    virtual bool isQualified()= 0;
    virtual bool isEqual(BaseIdentifierSrp *anIdent)= 0;

    virtual void showNameDBG()= 0;
};


class IdentifierSrp : public BaseIdentifierSrp {
  public:
    enum EncodeType {
      ascii, unicode
    };

  private:
    static bool InitClass();

  private:
    static bool isClassInit;
    static PoolIdentifiersSrp *poolMgr;
    static HashManagerAk *hashMgr;

  public:
    static IdentifierSrp *addUniqueInstance(char *aValue);

  protected:
    char *content8Bits;
    ushort *content16Bits;
    uint length;
    EncodeType encoding;

  public:
    IdentifierSrp();
    IdentifierSrp(char *content);
    virtual ~IdentifierSrp();

    void* operator new(size_t size);
    void operator delete(void *anObject);

    virtual bool isQualified();
    virtual bool isEqual(BaseIdentifierSrp *anIdent);
    virtual void cleanup();

    inline char *getAsciiContent(void) { return content8Bits; }

    virtual void showNameDBG();
};


class QualifiedIdentSrp : public BaseIdentifierSrp {
  public:
    enum Constants {
      defaultStackSize= 5
    };

  protected:
    IdentifierSrp **stack;
    uint nbrElements;
    uint stackSize;

  protected:
    virtual void growStack();

  public:
    QualifiedIdentSrp(IdentifierSrp *anIdent);
    virtual ~QualifiedIdentSrp();

    virtual void push(IdentifierSrp *anIdent);
    virtual void revpush(IdentifierSrp *anIdent);
    virtual IdentifierSrp *pop();
    virtual IdentifierSrp *revpop();
    virtual bool isQualified();
    virtual bool isEqual(BaseIdentifierSrp *anIdent);

    virtual void showNameDBG();
};

#endif          /* _SHARP_IDENTIFIERS_H_ */
