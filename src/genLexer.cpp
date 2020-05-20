/**************************************************
* File: genLexer.cpp.
* Desc: Base classes for handling lexico analysis.
* Module: AkraLog : Compiling.
* Rev: 2001/04/23 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <akra/portableDefs.h>
#include "genLexer.h"


LexerAk *LexerAk::currentLexer= NULL;

LexerAk *LexerAk::getCurrentLexer()
{
  return currentLexer;
}


void LexerAk::setCurrentLexer(LexerAk *aLexer)
{
  currentLexer= aLexer;
}


LexerAk::LexerAk()
{
  // TODO.
}


LexerAk::~LexerAk()
{
  // TODO.
}

    
int LexerAk::getSyntaxTokenOf(char *aName)
{
  return -1;
}
