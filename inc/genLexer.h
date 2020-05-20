#ifndef _GENERIC_LEXER_H_
/**************************************************
* File: genLexer.h.
* Desc: Base classes for handling lexico analysis.
* Module: AkraLog : Compiling.
* Rev: 2001/04/23 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

class LexerAk {
  private:
    static LexerAk *currentLexer;

  public:
    static LexerAk *getCurrentLexer();
    static void setCurrentLexer(LexerAk *aLexer);

  public:
    LexerAk();
    virtual ~LexerAk();
    
    virtual int getSyntaxTokenOf(char *aName);
};


#endif	 /* _GENERIC_LEXER_H_ */
