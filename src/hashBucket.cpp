/**************************************************
* File: hashBucket.cc.
* Desc: Implementation of the HashBucketAk class.
* Module: AkraLog : JavaKit.
* Rev: 29 aout 1997 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <stdlib.h>
#include "hashElement.h"
#include "hashBucket.h"


HashBucketAk::HashBucketAk(unsigned int tableSize)
{
    elements= new HashElementAk*[tableSize];
    elements[0]= new HashElementAk[tableSize];
    for (unsigned int i= 1; i < tableSize; i++) {
	elements[i]= elements[0] + i;
    }

    nbrElements= collisionCount= 0;
}


HashBucketAk::~HashBucketAk(void)
{
    delete elements[0];
    delete elements;
}


bool HashBucketAk::locateKeyAt(char *aKey, unsigned int aPos)
{
    if (elements[aPos]->key != NULL) {
	HashElementAk *tmpElement= elements[aPos];

	do {
	    if (tmpElement->isMatching(aKey)) break;
	    tmpElement= tmpElement->next;
	} while (tmpElement != NULL);

	return (tmpElement != NULL);
    }

    return false;
}


bool HashBucketAk::addElementAt(char *aKey, void *aValue, unsigned int aPos, unsigned int aHashing, HashElementAk **resultEntry)
{
    nbrElements++;
    if (elements[aPos]->key != NULL) {
        HashElementAk *tmpElement= new HashElementAk(elements[aPos]);
        elements[aPos]->key= aKey;
        elements[aPos]->value= aValue;
        elements[aPos]->bucketHash= aHashing;
        collisionCount++;
	*resultEntry= elements[aPos];
        return true;
    }
    else {
	elements[aPos]->key= aKey;
	elements[aPos]->value= aValue;
	elements[aPos]->bucketHash= aHashing;
	*resultEntry= elements[aPos];
    }
    return false;
}


unsigned int HashBucketAk::getCollisions(void)
{
    return collisionCount;
}


void *HashBucketAk::getItemAt(char *aKey, unsigned int aPos, bool & indicator)
{
    if (elements[aPos]->key != NULL) {
	HashElementAk *tmpElement= elements[aPos];

	do {
	    if (tmpElement->isMatching(aKey)) break;
	    tmpElement= tmpElement->next;
	} while (tmpElement != NULL);

	indicator= (tmpElement != NULL);
	if (tmpElement != NULL) return tmpElement->value;
    }
    else {
	indicator= false;
    }
    return NULL;
}

