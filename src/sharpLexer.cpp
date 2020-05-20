/**************************************************
* File: sharpLexer.cpp.
* Desc: Base classes for handling lexico analysis.
* Module: AkraLog : Compiling.
* Rev: 2001/04/23 : REV 0 : Hugo DesRosiers : Creation.
* $Log$
**************************************************/


#include <string.h>


class LiteralSrp;
class BaseIdentifierSrp;
class StatementSrp;
class ExpressionSrp;
class BlockListAk;
class TypeDefinition;
class VarDeclarationSrp;
class ClauseHolderSrp;
class CatchStmtHelper;


#include "sharpLexer.h"
#include "gramTokens.h"

SharpLexer::SharpLexer()
{
  // TODO.
}


SharpLexer::~SharpLexer()
{
  // TODO.
}

    
int SharpLexer::getSyntaxTokenOf(char *aName)
{
#define NBR_KEYWORDS	74
    static char *tokens[NBR_KEYWORDS]= {
      "abstract", "base", "bool", "break", "byte",
      "case", "catch", "char", "checked", "class", "const", "continue",
      "decimal", "default", "delegate", "do", "double",
      "else", "enum", "event", "explicit", "extern",
      "false", "finally", "fixed", "float", "for", "foreach",
      "goto", "if", "implicit", "in", "int", "interface", "internal", "is",
      "lock", "long", "namespace", "new", "null",
      "object", "operator", "out", "override",
      "params", "private", "protected", "public",
      "readonly", "ref", "return",
      "sbyte", "sealed", "short", "sizeof", "static", "string", "struct",
      "switch", "this", "throw", "true", "try", "typeof",
      "uint", "ulong", "unchecked", "unsafe", "ushort", "using",
      "virtual", "void", "while" 
    };

    static int tokensID[NBR_KEYWORDS]= {
      ABSTRACT_KW, BASE_KW, BOOL_KW, BREAK_KW, BYTE_KW,
      CASE_KW, CATCH_KW, CHAR_KW, CHECKED_KW, CLASS_KW, CONST_KW, CONTINUE_KW,
      DECIMAL_KW, DEFAULT_KW, DELEGATE_KW, DO_KW, DOUBLE_KW,
      ELSE_KW, ENUM_KW, EVENT_KW, EXPLICIT_KW, EXTERN_KW,
      FALSE_KW, FINALLY_KW, FIXED_KW, FLOAT_KW, FOR_KW, FOREACH_KW,
      GOTO_KW, IF_KW, IMPLICIT_KW, IN_KW, INT_KW, INTERFACE_KW, INTERNAL_KW, IS_KW,
      LOCK_KW, LONG_KW, NAMESPACE_KW, NEW_KW, NULL_KW,
      OBJECT_KW, OPERATOR_KW, OUT_KW, OVERRIDE_KW,
      PARAMS_KW, PRIVATE_KW, PROTECTED_KW, PUBLIC_KW,
      READONLY_KW, REF_KW, RETURN_KW,
      SBYTE_KW, SEALED_KW, SHORT_KW, SIZEOF_KW, STATIC_KW, STRING_KW, STRUCT_KW,
      SWITCH_KW, THIS_KW, THROW_KW, TRUE_KW, TRY_KW, TYPEOF_KW,
      UINT_KW, ULONG_KW, UNCHECKED_KW, UNSAFE_KW, USHORT_KW, USING_KW,
      VIRTUAL_KW, VOID_KW, WHILE_KW 
     };

    int tmpCmp;
    unsigned int i;

    i= 0;
    if (aName[0] == 'a') i= 0;
    else if (aName[0] == 'b') i= 1;
    else if (aName[0] == 'c') i= 5;
    else if (aName[0] == 'd') i= 12;
    else if (aName[0] == 'e') i= 17;
    else if (aName[0] == 'f') i= 22;
    else if (aName[0] == 'g') i= 28;
    else if (aName[0] == 'i') i= 29;
    else if (aName[0] == 'l') i= 36;
    else if (aName[0] == 'n') i= 38;
    else if (aName[0] == 'o') i= 41;
    else if (aName[0] == 'p') i= 45;
    else if (aName[0] == 'r') i= 49;
    else if (aName[0] == 's') i= 52;
    else if (aName[0] == 't') i= 60;
    else if (aName[0] == 'u') i= 65;
    else if (aName[0] == 'v') i= 71;
    else if (aName[0] == 'w') i= 73;
    else i= NBR_KEYWORDS;

    for (; i < NBR_KEYWORDS; i++) {
	if ((tmpCmp=  strcmp(aName, tokens[i])) == 0) {
	  break;
	}
	else if (tmpCmp < 0) {
	  i= NBR_KEYWORDS;
	  break;
	}
    }
    if (i < NBR_KEYWORDS) {
      return tokensID[i];
    }
    else
      return -1;
}
