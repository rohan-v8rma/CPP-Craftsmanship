#include <iostream>
using namespace std;

/*
        INDEX
1. Dangling else problem
2. Usage semi-colon in if-else blocks

* 1. Dangling else problem

The nested if-else statement introduces a source of potential ambiguity 
referred to as 'dangling-else' problem. 

(The default dangling-else matching is overridden using braces, this is important
to know just for troubleshooting.) 

This problem arises when in a nested if statement, the number of ifs
is more than the number of else clauses.
The question then arises, which which if does the additional else clause matchup.

In C++, indentation level is not enough for the compiler to figure this out.

That is why we always use braces to enclose nested statements.

Let us take an example, 

if (testCondition1)
    if (testCondition2)
        codeBlock1;
else 
    codeBlock2;

The indentation in the above code fragment indicates the programmer wants the 
'else' to be with the outer 'if'. However, C++ matches an 'else' with the 
preceding 'if'(If no braces are used to enclose the nested if statement). 
In this case, the actual evaluation of the if-else statement will be as shown.


if (testCondition1)
    if (testCondition2)
        codeBlock1;
    else 
        codeBlock2;


This will not give the desired output. If we would have used braces, everything 
would have been fine (-_-).

* 2. Usage semi-colon in if-else blocks
*/



