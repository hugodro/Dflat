#ifndef _SHARP_LEXER_H_
#define _SHARP_LEXER_H_
/**************************************************
* File: sharpLexer.h.
* Desc: Derivation of LexerAk for CSharp lexico analysis.
* Module: AkraLog : Compiling.
* Rev: 2001/04/23 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include "genLexer.h"


class SharpLexer : public LexerAk {
  public:
    SharpLexer();
    virtual ~SharpLexer();
    
    virtual int getSyntaxTokenOf(char *aName);
};


#endif	 /* _SHARP_LEXER_H_ */
