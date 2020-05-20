/**************************************************
* File: lexHelp.cpp.
* Desc: Contains helpful functions for the lexographic analyzer.
* Module: AkraLog : Compiling.
* Rev: 2001/04/23 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/

#include <stdio.h>
#if defined(_WIN32)	    // MODNT.
#include <string>
#endif


class LiteralSrp;
class BaseIdentifierSrp;
class StatementSrp;
class ExpressionSrp;
class BlockListAk;
class TypeDefinition;
class VarDeclarationSrp;
class ClauseHolderSrp;
class CatchStmtHelper;


#include "gramTokens.h"
#include "customFlex.h"
#include "genLexer.h"

extern FILE *yyin;
SharpFlex *flexer= NULL;

void SkipCommentV1(void);
void SkipCommentV2(void);
void yyerror(char *);

#ifndef EOF_CHAR
#define EOF_CHAR	-1
#endif


/********************************************************
* Fonction: SkipCommentV1.
* Desc: Reads through a comment, C style.
* Args: None.
* Returns: Nil.
********************************************************/

void SkipCommentV1(void)
{
    char lastChar, c;

    while (1) {
	while ((c = flexer->getInput()) != '/') lastChar= c;
	if (lastChar == '*') {
	    return;
	 }
        else if (c == EOF_CHAR) {
//	    sprintf(ErrorMsgBuffer, "While in comment: unexpected EOF.\n");
//	    AddWarning(NULL, ErrorMsgBuffer);
	    return;
	 }
	else lastChar= c;
    }
}


/********************************************************
* Fonction: SkipComment.
* Desc: Reads through a comment, C++ style.
* Args: None.
* Returns: Nil.
********************************************************/

void SkipCommentV2(void)
{
    char c;

    while ((c = flexer->getInput()) != '\n') {
	if (c == EOF_CHAR) {
	    break;
	 }
     }

    if (c == '\n') flexer->doUnput(c);

    return;
}


void srperror(char *msg)
{
    fprintf(stderr, "%s on line %d.\n", msg, flexer->getLineNbr());
}


int GetTokenID(char *aName)
{
  LexerAk *lexer;

  if ((lexer= LexerAk::getCurrentLexer()) != NULL) {
    return lexer->getSyntaxTokenOf(aName);
  }
  else {
    // DOERR: Throw an internal error, NO LEXER.
    return -1;
  }
}


int srplex(void)
{
  return flexer->yylex();
}

