Project goals:

1- D flat (Db): Extend C# to include finite state machine programming model, embedded SQL, and time
annotation.
2- Port Wao and PUR to Db.
3- Create a demo of Wao under Apache or IIS.



Description of Db:

D flat is a programming language that utilizes C# as its base syntax. That means that to start
with, D flat is a implementation of the C# language standard, as provided by Microsoft.

But wait, there is more. Db is a more advanced language than C#. In order to introduce new syntax
and features to C# in a well managed fashion, the advances of Db are categorized in independent
sets, called districts.


District 0:
The district 0 of Db is C# itself, that is, the whole syntax of C# and its semantic meaning (what
it becomes when the compiled version of the code is executing).


District 1:
The district 1 of Db is the inclusion of a new syntactic component to the class element of C#,
called the state. A state member is similar to the method member of a class, but it has no return
value, and it contains a transition table within. State members are used in a class to construct a
Finite State Machine. The execution semantics of a Finite State Machine in a class (ie, a set of
state members) is realized by attaching to any instance of such a class a sequencing mechanism.
The sequencing mechanism will chose at runtime which state member of the class is to be executed
at a given moment. It will also provide an input queue to the instance, so that it can receive
events. When the code in a state member will have fully executed, the sequencing mechanism will
wait for the queue of the instance to contain an event, and it will then apply the transition
rules in the state to select the next state to be executed. A state member"s code is
executed like a method member"s code (ie, the instance provides the "this" data
context), but it runs within a thread managed by the sequencer. Finally, a state member
isn"t called, nor does it return a value; rather, a state member is transferred to, without
using a call stack mechanism like the method invocation approach.


District 2:
The district 2 of Db is the embedding of the SQL-92 syntax. The embedding of the syntax rather
than its inclusion means that the compiler threats SQL statements as independent chunks of code,
imbricated within Db syntax (from other included districts). In practical term, it signifies that
a given symbol or operator can have a totally different treatment or meaning depending if it is
seen by the compiler in the district 2 of Db; for example, the asterisk or the parentheses. A more
visible difference is for example the "foreach" symbol, which is a keyword when the
compiler is dealing with district 0-1 syntax, while it can be used as a variable name while the
compiler is dealing with district 2 syntax.

A district 2 syntax block is introduced with the "doSql" keyword (which is included to
the district 0 syntax), and it is then enclosed in curly brackets. For example:

void aMethod(int a, string b) {
  int c, i;

  i= 0;
  do {
    doSql {
        select age, firstName+lastName into :c, :b where uid= :a+ :i;
    }
    i++;
  } while (c != a);
}

In this example, the "select" statement is district 2. It is possible in the embedded syntax to refer to district 0
syntax in certain positions by using the ":" escape character before an expression.


District 3:
SQL-92 is a data access language oriented toward a small set of predefined types of data (the '92' is the year of the latest ANSII/ISO review).  With the popularity of object-oriented and hyper-text information, the data types provided in SQL-92 are not advanced enough to sustain the amount of work to implement in database engines without re-inventing the wheel all the time. The solution is provided with a major revision of SQL, called SQL-3, that reached revision quality in 1994.  SQL-3 introduces Advanced Data Types (ADT), which are based on object-oriented concepts.  The district 3 creates a bridge between the object-oriented system of SQL-3 and the one of Db, so that advanced instance operations can be performed between the data repository and the application code without having to spell out the translation mechanism.
*** Future work. ***


District 4:
The last district currenlty planned in Db is about time. In classical programming language, just as in classical logic, there is no notion of time associated with the execution of statements. The language doesn't tell the compiler that the statement 'i= i+2;' is going to take less or more time than the statement 'i= F(i)+2;'. In the interactive applications of today, the applicative code needs to handle durations, timeouts, delays and speeds.  The district 4 of Db is an extension of the districts 0 and 1 syntax, which introduce time consumtion notes. Using time annotation, the developer can define that the execution of a given statement should cause the computer to consume a given amount of time. These time annotations can be used by the execution environment to either implement real-time behaviour, timeout management, or overall synchronization within a multi-threaded application. It can also be used to simplify the construction of a simulation (as in an animation).

District 4 syntax is simply added after a district 0 or 1 statement, such as in:

void aMethod(int a, string b) {
  int c, i;

  i= 0; @[1us]
  do {
    doSql {
        select age, firstName+lastName into :c, :b where uid= :a+ :i;
    } @[1.2s]
    i++; @[2ms]
  } while (c != a);
}

In this example, the assignment of the variable 'i' is specified to take 1 microsecond. The execution environment should make sure that it doesn't start the code for the following statement before 1 microsecond has elapsed since the code for the previous statement (in this case, the method init code) was executed. In the 'do' loop, we can see that the SQL data fetch is expected to consume 1.2 seconds, while the variable increment should make the execution environment move forward by 2 miliseconds.  Since time is a real value (in contrast with an integer value), all the mechanics of time in the execution environment is to be based on open sets. This means that the time annotation is not to specify that something happens 'right now', but to insure that it has either happened or not within a given (open) boundary.
*** Future work ***


 
Detailing the language, the compiler, the execution environment.

The construction of Db language is an abstract process, in which syntax rules are defined to
formalize the possible valid ways of writing characters with a known meaning. The C# language
contains three major kind of syntax rules, which are:

The type definition syntax, to create the outlining of class datatypes,

The statements, which are equivalent to the "flowing control sentences" of the
language.

The expressions, which are the "words" and short combinations of the language.

The expressions comprise the constant values (like 1, or "a string"), the symbols that represent
variable values, the operators that link expressions together (like the add sign or the equal
sign), and some other access sequences (like the array or the method access).

The statements comprise the simple expression execution (like "a= 1+b;", which ask
that at that point in the sequence of actions in the code, the constant expression "1"
and the variable symbol "b" are to be added numerically, and then the result is to
become the new value of the variable symbol "a"), the iterations (for, while), the
selections (if-then-else, switch), the jump (return, continue), the exceptions (try-catch), etc.

The tricky part in add new syntax is to insure that it doesn't break the meaning of existing syntax.  It is a very complex problem to prove that new derivation rules that intermix with existing derivation rules do not change the way the compiler would have reacted if the grammar wouldn't have been extended. Mathematical analysis is the only way to deal with this situation.

The compiler of the language is a program that translate a high-level text into a low-level output. It reads a text file, builds a internal tree-like representation of the text file with respect to the grammar, read additional files to include referred definitions (like included classes), verify that all syntactical and semantical rules are obeyed, and then generates an output that will minimize the amount of work the execution environment has to do in order to perform what the input text file was asking for. Normally the output file is a sequence of elementary instructions, either in text format (assembly code, to be post-processed by an assembler), or in object format (machine code, immediatly meaningful to the execution environment).

The execution environment is whatever is necessary to read the final representation of the original text file, and make the hardware behave. It can be a processor simulator, like a Java Virtual Machine, with a lot of added software pieces to handle dynamically loaded libraries and the access of OS services.  Or it can be a very minimal shell that simply hands over the object code produced by the compiler to the OS, which knows how to deal with it, together with libraries that cover some high-level features of the language that are not directly provided by the OS.



Implementing Db.
1) Setting a development environment.
 - Development Directory Tree (DDT):  The directory tree is floating in the developer environment, based in the variable ProjAkraRoot directory.
    The tree then contains:
    * DFlat (the main Db directory) ->
        ** Core (the basic modules) ->
            *** Compiler (compiler) -> inc src
            *** Exec (execution environment) ->
                *** Shell/VM (shell or Virtual Machine) ->
                    *** Base (OS-independant code) -> inc src
                    *** Specifics (OS-dependant code) ->
                        *** Posix (posix code) -> inc src
                        *** SysV (unix sysV code) -> inc src
                        *** MsWin (MS Windows code) -> inc src
                *** SupportLib (native librairies to support the execution) -> TBD
            *** GenComp (generic components) -> TBD
            *** Packages (files written in Db to support language features) -> TBD
            *** Tests (test suites and scripts to QA on Db)

    The object code produced by the development tools in an OS is to be stored wherever the developer wants.
    The goals of the DDT are to have:
      * easy wrap & backup,
      * easy wrap & ship,
      * easy unwrap of version X,
      * facility to pack a minimal set of include files into a library, independantely of the source code.
      * as much independance on the OS being used to develop as possible.

 - Build procedure: compiling c++ code is done in batch mode with the make utility (gnu make or ms nmake).
    Makefiles are present in most of the directories of the Dev Dir Tree.  Makefiles are given file name extensions:
    * lnx: Linux.
    * winnt: Windows NT.
    * sol: Solaris.
    * pos: PalmOS.
    Makefiles expect that the compiled code is generated in the variable directory ObjDest, under the directory
    specified by the project name.

 - OS dependencies resolution approach: OS dependencies occur in the implementation of some source code,
    the generation of the compiled code, and in the linkage of object code into libraries or executable.

 - Detailing the pieces: complexity of a piece of the project is rated { simple, medium, complex }.
    Progress of the implementation is rated { todo, early stage, in progress, late stage, DONE }.

2) Project plan
a) implementing district 0 (C#):
a.1) learn enough of C# to implement the grammar in bison/flex. [simple; late stage].
a.2) create an internal representation of a parsed syntax. [medium; in progress].
a.3) implement the symbol resolution mechanism. [complex; todo].
a.4) implement the definition representations [medium; early stage].
a.5) implement the syntax/semantic rule checking. [simple; todo].
a.6) generate an output code from the internal representation. [complex; todo].
a.7) provide a shell/vm to execute the output code. [simple/complex; todo].
a.8) implement support native libraries to service C# in given OS. [medium; todo].
a.9) implement packages in C#. [medium; todo].

b) implementing district 1 (FSM):
b.1) extend the <class> grammar element to include the <state> construct, define <state> and <transition> elements.  [simple; todo (reuse Plzen)].
b.2) create internal representation of <state> and <transition>. [simple; todo (reuse Plzen)].
b.3) implement definition representations for <state> and <transitions>. [simple; todo (reuse Plzen)].
b.4) generate output code for <state> and <trnasition>. [medium; todo (reuse Plzen)].
b.5) add necessary code to <new> construct to support multi-threaded stateful instances [medium; todo (reuse Plzen)].
b.6) improve shell/VM to implement the sequencing logic and event queue of stateful objects. [complex; todo (reuse Plzen)].


