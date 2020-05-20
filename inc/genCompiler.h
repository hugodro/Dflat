#ifndef _GENERIC_COMPILER_H_
#define _GENERIC_COMPILER_H_
/**************************************************
* File: genCompiler.h.
* Desc: Generic Compilation control classes (CompilerAk).
* Module: AkraLog : Compiling.
* Rev: 2001/04/23 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

class CompilerAk {
  public:
    CompilerAk();
    virtual ~CompilerAk();
    virtual void compile();
};

#endif	 /* _GENERIC_COMPILER_H_ */
