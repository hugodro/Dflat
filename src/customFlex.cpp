/**************************************************
* File: customFlex.cpp.
* Desc: Implementation of a CSharp version of a FlexLexer.
* Module: AkraLog : Compiler.
* Rev: 2001/04/23 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include "customFlex.h"


SharpFlex::SharpFlex(std::istream *inStream)
  : yyFlexLexer(inStream)
{
// TODO.
}

#if defined(_WIN32)
void SharpFlex::LexerOutput( const char* buf, int size )
{
    // Should do an output, but we cancel from NT linking problems.
}
#endif

int SharpFlex::getLineNbr()
{
    return lineno();
}


int SharpFlex::getInput()
{
    return yyinput();
}


void SharpFlex::doUnput(char aChar)
{
  // TODO:
  std::cerr << "@ERR [SharpFlex.doUnput]: Unimplemented method SharpFlex::doUnput.\n";
}
