/**************************************************
* File: hashElement.cpp.
* Desc: Implementation of the HashElementAk class.
* Module: AkraLog : Compiler.
* Rev: 29 aout 1997 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <string.h>
#include "hashElement.h"


HashElementAk::HashElementAk(void)
{
    next= NULL;
    bucketHash= 0;
    key= NULL;
    value= NULL;
}


HashElementAk::HashElementAk(HashElementAk *parent)
{
    next= NULL;
    bucketHash= parent->bucketHash;
    key= parent->key;
    value= parent->value;
    parent->next= this;
}


bool HashElementAk::isMatching(char *aKey)
{
    return (strcmp(aKey, key) == 0);
}


void HashElementAk::setKey(char *aKey)
{
    key= aKey;
}
