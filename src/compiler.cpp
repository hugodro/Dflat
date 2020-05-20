/**************************************************
* File: compiler.cpp.
* Desc: Compilation control classes (SharpCompiler).
* Module: AkraLog : Compiling.
* Rev: 2001/04/23 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <fstream>

#include "compiler.h"

// TMPTMP:
#include "customFlex.h"
#include "sharpLexer.h"
extern int srpparse();
extern int srpdebug;
extern SharpFlex *flexer;

SharpCompiler::SharpCompiler()
{
  // TODO.
}


SharpCompiler::~SharpCompiler()
{
  // TODO.
}


void SharpCompiler::compile()
{

}


void SharpCompiler::testRun(char *aFileName)
{
  std::ifstream aFile(aFileName);

  if (aFile.good()) {
    LexerAk *tokenizer= new SharpLexer();
    LexerAk::setCurrentLexer(tokenizer);

    srpdebug=1;
    flexer= new SharpFlex(&aFile);
    srpparse();
  }
}
