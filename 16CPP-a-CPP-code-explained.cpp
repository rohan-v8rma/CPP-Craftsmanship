/*
My first C++ program

            INDEX
1. Preprocessor Directives
2. Header files
3. All devices are treated as files 
4. Function of I/O library
5. Predefined Streams in I/O library
6. namespace
7. main() function
8. cout statement
9. return instruction
*/

#include <iostream>
/*
* 1. Preprocessor Directives

Statements that begin with # sign - are directives for the preprocessor.
That means these statements are processed before compilation takes place.
The #include <iostream> statement tells the compiler's preprocessor to 
include the header file 'iostream'.

! These preprocessor directives don't require semi-colon delimiters at the end of them.

2. Header files

? Earlier, header files were specified in a way in which they 
? ended with '.h' but the modern style mandates the name 
? without the suffix, in case of some header files.

The header file iostream is included in every C++ program to implement
input & output facilities. I/O facilities are not defined with C++
language, but rather implemented through a component of C++ standard
library, iostream which, is I/O library.

* 3. All devices are treated as files

In C++, all devices are treated as files. Thus, 
the standard input device (the keyboard) (where the input is received), 
the standard output device (the screen) (where the output is displayed),
and 
the standard error device (the screen) (where the errors, if any, are displayed)
are all treated as files. 

At its lowest level, a file is interpreted simply as a sequence or a stream 
of bytes. At this level, the notion of a data type is absent i.e., data is 
treated simply as a sequence of bytes without considering the data type.

However, at the user level, a file consists of a sequence of possibly intermixed
data types-character, arithmetic values, class objects etc.


* 4. Function of I/O library

--> At the lowest implementation level, where the notion of data type is missing
and files are treated as a stream of bytes, the I/O library manages the transfer
of these bytes.

--> At the user level, where the notion of data types is present, I/O library
manages the interface between these two levels i.e., between user level and the
lowest implementation level.

--> The I/O library predefines a set of operations for handling reading and 
writing of built-in data types.


* 5. Predefined Streams in I/O library

As mentioned, at lowest levels, files are implemented as a stream of bytes.

Input and output operations are supported by the istream(input stream) and
ostream(output stream) classes.

The predefined stream objects for input, output and error are as follows:

--> cin, an istream class object tied to standard input. cin stands for 
console input.

--> cout, an ostream class object tied to standard output. cout stands for
console output.

--> cerr, an ostream class object tied to standard error. cerr stands for 
console error.

Declarations and functions of cin, cout, cerr are contained within iostream

NOTE: If the #include <iostream> line is omitted in a program, each reference
to cin, cout, cerr will be flagged as a type error by the compiler.
*/

using namespace::std; //TODO: see 06Op-scope-resolution-operator for more detail about `::` operator

/* 
* 6. namespace

C++ has a standard library that contains common functionality you use in 
building your applications like containers, algorithms, etc. 

If names used by these were out in the open, for example, if they defined 
a queue class globally, you'd never be able to use the same name again without conflicts. 

? So they created a namespace, std to contain this change.

The using namespace statement just means that in the scope it is present, 
make all the things under the std namespace available without 
having to prefix std:: before each of them 
? for example, cout, cin, etc.

While this practice is okay for example code, pulling in the entire std namespace 
into the global namespace is not good as it defeats the purpose of namespaces and 
can lead to name collisions. 

! This situation is called namespace pollution.
*/

int main(){
/*
* 7. main() function

This line indicates the beginning of main function. The main() function is 
the point by where all c++ programs begin their execution. Infact, the content
of main() is always the first to be executed when a program starts.

And for that reason it is essential that all C++ programs have a main() function.

Program execution begins at main() and continues by sequentially executing the 
statements within main(). A programs terminated normally following execution of
last statement of main().

Every function in C++ has its code included in a pair of curly braces{} so that
code below int main() and inside { and } is code of function main().
*/
    cout << "Welcome to C++ Programmming";
/*
* 8. cout statement

This instruction does the most important thing in this specific program. The cout
is the standard output stream in C++(usually the screen) and the above
statement inserts (we are saying that characters are being inserted insteaded 
of printed because C++ sees all devices as files) a sequence of characters - 
"Welcome to C++ Programming" here - into this output stream(i.e, the screen). 
Since cout is declared(is present) in header file iostream, so in order to use 
cout in the program, we have included this very header file with #include directive.


Notice that this statement end with a semicolon character(;). The semicolon(;) 
character is used to finish every executable statement of a C++ program and it 
must be included after every executable instruction.
(#preprocessor directives are not executable instructions) 
*/
    return 0;
}
/*
* 9. return instruction

The return instruction is important as the main function should always return 
'int' dataType (this is a rule), as evident from int before 'main()'. So as 
to not get an error from the compiler saying the 'main' function must 
return 'int', we return 0 at the end of our code.
*/    