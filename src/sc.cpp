/**************************************************
* File: sc.cpp.
* Desc: Main module for launching the Sharp compiler.
* Module: AkraLog : Compiling.
* Rev: 2001/04/23 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <iostream>

#include "compiler.h"

main(int argc, char **argv)
{
  SharpCompiler *compiler= new SharpCompiler();
  compiler->testRun(argv[argc-1]);

}
