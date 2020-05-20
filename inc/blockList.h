#ifndef _BLOCK_LIST_H_
#define _BLOCK_LIST_H_
/**************************************************
* File: blockList.h.
* Desc: Definition of the BlockListAk class.
* Module: AkraLog : JavaKit.
* Rev: 2001/04/28 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

class BlockElementHolderAk {
  public:
    enum Constant {
      tableSize= 12
    };

  protected:
    BlockElementHolderAk *next;
    void *elements[tableSize];
    unsigned int nbrElements;

  public:
    BlockElementHolderAk();
    virtual ~BlockElementHolderAk();

    virtual void add(void *anElement);
    virtual bool isFull() { return (nbrElements == tableSize); }
};


class BlockListAk {
  protected:
    BlockElementHolderAk *head, *tail;
    unsigned int nbrElements;

  public:
    BlockListAk();
    BlockListAk(void *rElement);
    virtual ~BlockListAk();

    virtual void add(void *anElement);
};


#endif	 /* _BLOCK_LIST_H_ */
