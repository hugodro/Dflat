#ifndef _HASHELEMENT_H_
#define _HASHELEMENT_H_

/**************************************************
* File: hashElement.h.
* Desc: Definition of the HashElementAk class.
* Module: AkraLog : JavaKit.
* Rev: 29 aout 1997 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <akra/portableDefs.h>


class HashElementAk {
    friend class HashBucketAk;
  protected:
    HashElementAk *next;
    unsigned int bucketHash;
    char *key;
    void *value;

  public:
    HashElementAk(void);
    HashElementAk(HashElementAk *parent);
    virtual bool isMatching(char *aKey);
    virtual void setKey(char *aKey);
};


#endif	/* _HASHELEMENT_H_ */

