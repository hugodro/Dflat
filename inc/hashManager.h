#ifndef _HASHMANAGER_H_
#define _HASHMANAGER_H_

/**************************************************
* File: hashManager.h.
* Desc: Definition of the HashManagerAk class.
* Module: AkraLog : JavaKit.
* Rev: 29 aout 1997 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <akra/portableDefs.h>


class HashBucketAk;
class HashElementAk;


class HashManagerAk {
  public:
    static unsigned int smallPrimes[256];
    static unsigned int bigPrimes[256];

  private:
    static unsigned int stringHashOne(char *aKey);
    static unsigned int stringHashTwo(char *aKey);

  protected:
    unsigned int bucketSize;
    unsigned int nbrElements;
    unsigned int nbrBuckets;
    unsigned int (*hashOne)(char *aKey);
    unsigned int (*hashTwo)(char *aKey);
    HashBucketAk **buckets;

  public:
    HashManagerAk(void);
    virtual ~HashManagerAk(void);
    virtual bool findKey(char *aKey);
    virtual bool addUniqueItem(char *aKey, void *aValue, HashElementAk **resultElement);
    virtual void *getItem(char *aKey, bool & indicator);
};


#endif	/* _HASHMANAGER_H_ */

