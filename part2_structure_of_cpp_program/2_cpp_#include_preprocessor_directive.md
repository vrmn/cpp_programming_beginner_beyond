What is the c++ preprocessor d, is a program that process your source code before the compiler sees it.

The c++ preprocessor first strips all the comments from the source file and replaces each comment with a single space.

Then it looks for preprocessor directives and executes them.

Preprocessor directives are lines in the source code that begin with a #

list of preprocessor directives include.

#inlcude <iostream>
#include "myfile.h"

#if
#elif
#else
#endif

#ifdef
#ifndef
#redefine
#undef

#lines
#errors
#pragma

The most commonly used preprocessor directive is the include directive.
 when the preprocessor sees the include directive it replaces the #include line with the filate that it's referring to.

 Then it recursviley processes that file as well.

 -------------------

 So by the time the compiler sees the source code all the comments are stripped out and all preprocessor directives have been processed and removed.

 Preprocessor directives are commonly used to conditionally compile code.

 For example suppose you only want to compile a portion of your source code.

 -------------------------------

 One final note thats very important. The c++ preprocessor does not understand c++  
 It simply follows the preprocessor directives and gets the source code ready for the compiler.

 The compiler is the program that does understand c++.
