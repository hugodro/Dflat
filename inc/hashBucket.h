#ifndef _HASHBUCKET_H_
#define _HASHBUCKET_H_

/**************************************************
* File: hashBucket.h.
* Desc: Definition of the HashBucketAk class.
* Module: AkraLog : Compiler.
* Rev: 29 aout 1997 : REV 0 : Hugo DesRosiers : Creation.
**************************************************/

#include <akra/portableDefs.h>


class HashElementAk;


class HashBucketAk {
  protected:
    unsigned int nbrElements;
    unsigned int collisionCount;
    HashElementAk **elements;

  public:
    HashBucketAk(unsigned int tableSize);
    virtual ~HashBucketAk(void);
    virtual bool locateKeyAt(char *aKey, unsigned int aPos);
    virtual bool addElementAt(char *aKey, void *aValue, unsigned int aPos, unsigned int aHashing, HashElementAk **resultEntry);
    virtual unsigned int getCollisions(void);
    virtual void *getItemAt(char *aKey, unsigned int aPos, bool & indicator);
};


#endif	/* _HASHBUCKET_H_ */

