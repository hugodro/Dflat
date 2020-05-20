#ifndef _COMPILER_SHARP_H_
#define _COMPILER_SHARP_H_
/**************************************************
* File: compiler.h.
* Desc: Compilation control classes (SharpCompiler).
* Module: AkraLog : Compiling.
* Rev: 2001/04/23 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include "genCompiler.h"


class SharpCompiler : CompilerAk {
  public:
    SharpCompiler();
    virtual ~SharpCompiler();
    virtual void compile();

    void testRun(char *aFileName);
};

#endif	/* _COMPILER_SHARP_H_ */

