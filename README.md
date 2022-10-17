- [Memory Allocation in C](#memory-allocation-in-c)
  - [1. Text / Code Segment](#1-text--code-segment)
  - [2. Initialized Data Segment](#2-initialized-data-segment)
  - [3. Uninitialized Data Segment / BSS](#3-uninitialized-data-segment--bss)
  - [4. Heap](#4-heap)
  - [5. Stack](#5-stack)
    - [What is Stack Overflow Error?](#what-is-stack-overflow-error)
  - [6. Command Line Arguments](#6-command-line-arguments)
  - [7. Usage of Heap](#7-usage-of-heap)
  - [Static vs. Dynamic Languages](#static-vs-dynamic-languages)
- [Source Code to Executable File](#source-code-to-executable-file)
  - [Source Code to Assembly Code](#source-code-to-assembly-code)
  - [Assembly Code to Object Code](#assembly-code-to-object-code)
    - [What is Object Code?](#what-is-object-code)
  - [`gcc` compiler](#gcc-compiler)
  - [Intermediate/Object Code files](#intermediateobject-code-files)
  - [Role of Linker in creating executable/library files](#role-of-linker-in-creating-executablelibrary-files)
    - [How exactly does `linker` work and what is its need?](#how-exactly-does-linker-work-and-what-is-its-need)
    - [Static vs. Dynamic Linking](#static-vs-dynamic-linking)
      - [Static Linking](#static-linking)
      - [Dynamic Linking](#dynamic-linking)
- [Sequence Points in C/C++](#sequence-points-in-cc)
- [Pointers in C](#pointers-in-c)
  - [What are Pointers?](#what-are-pointers)
  - [Dereference Operator (`*`)](#dereference-operator-)
  - [Dereference (`*`) AND Reference (`&`) operators are converse of each other](#dereference--and-reference--operators-are-converse-of-each-other)
  - [What is the type of a pointer variable?](#what-is-the-type-of-a-pointer-variable)
  - [Why do we have to define a type for just pointing to an address? Aren't all addresses the same?](#why-do-we-have-to-define-a-type-for-just-pointing-to-an-address-arent-all-addresses-the-same)
  - [(Pointer initialization) Vs. (Pointer declaration & assignment)](#pointer-initialization-vs-pointer-declaration--assignment)
    - [Initializing a Pointer with a value](#initializing-a-pointer-with-a-value)
    - [When we declare a pointer and assign a value to it later](#when-we-declare-a-pointer-and-assign-a-value-to-it-later)
  - [Using pointers in looping statements](#using-pointers-in-looping-statements)
    - [Pointer as LOOP VARIABLE of a WHILE loop](#pointer-as-loop-variable-of-a-while-loop)
    - [Pointer as LOOP VARIABLE of a FOR loop](#pointer-as-loop-variable-of-a-for-loop)
  - [Pointer to Pointer](#pointer-to-pointer)
  - [Pointers To Multidimensional Arrays](#pointers-to-multidimensional-arrays)
    - [Syntax for declaring a pointer to 2-D array](#syntax-for-declaring-a-pointer-to-2-d-array)
    - [INCORRECT syntax 1](#incorrect-syntax-1)
    - [INCORRECT syntax 2](#incorrect-syntax-2)
    - [Using Multi-dimensional array pointers](#using-multi-dimensional-array-pointers)
- [Arrays in C](#arrays-in-c)
  - [Incrementing pointers pointing to array elements](#incrementing-pointers-pointing-to-array-elements)
  - [Decaying of array names to pointers](#decaying-of-array-names-to-pointers)
    - [Array name as argument of `&` operator](#array-name-as-argument-of--operator)
  - [Calculating the length of an array using pointers](#calculating-the-length-of-an-array-using-pointers)
  - [2-D Arrays](#2-d-arrays)
    - [Declaring 2-D Arrays](#declaring-2-d-arrays)
    - [Memory Allocation of 2-D Arrays.](#memory-allocation-of-2-d-arrays)
      - [Testing this theory..](#testing-this-theory)
- [Compiling using g++](#compiling-using-g)
  - [Options controlling the kind of Output](#options-controlling-the-kind-of-output)
  - [Operands accepted by `gcc`/`g++`](#operands-accepted-by-gccg)
  - [Compiling a CPP file to generate an executable target file](#compiling-a-cpp-file-to-generate-an-executable-target-file)
    - [`g++ file_name`](#g-file_name)
    - [`g++ -S file_name`](#g--s-file_name)
    - [`g++ -c file_name`](#g--c-file_name)
    - [`g++ -o target_name file_name`](#g--o-target_name-file_name)
  - [Compiling and linking multiple files](#compiling-and-linking-multiple-files)
    - [Printing compilation warning messages (`g++ -Wall file_name`)](#printing-compilation-warning-messages-g--wall-file_name)
- [Header files and Namespaces](#header-files-and-namespaces)
  - [Accessing methods using **header files** and **namespaces**](#accessing-methods-using-header-files-and-namespaces)
  - [Need of both **Header files** and **namespaces**](#need-of-both-header-files-and-namespaces)
    - [What are Header Files?](#what-are-header-files)
      - [How do they work?](#how-do-they-work)
    - [What is a Namespace?](#what-is-a-namespace)
  - [How does the most elementary combination of `<iostream>` header file and `std` namespace work?](#how-does-the-most-elementary-combination-of-iostream-header-file-and-std-namespace-work)
- [Scopes in C++](#scopes-in-c)
- [I/O in C++](#io-in-c)
- [OOP in C++](#oop-in-c)
  - [Introduction](#introduction)
  - [Member Functions of Classes (Implicitly Inline)](#member-functions-of-classes-implicitly-inline)
  - [Access Modifiers](#access-modifiers)
  - [Friend Class](#friend-class)
    - [Important points about friendship](#important-points-about-friendship)
    - [Example code-snippet](#example-code-snippet)
  - [Friend Function](#friend-function)
- [Templates in C++](#templates-in-c)
  - [Declaring one or more Template Parameters using PlaceHolder Types](#declaring-one-or-more-template-parameters-using-placeholder-types)
  - [Templates with Default Parameters](#templates-with-default-parameters)
  - [Class Templates](#class-templates)
  - [Function Templates](#function-templates)
  - [Difference between `typename` and `class` keyword](#difference-between-typename-and-class-keyword)
- [Standard Template Library in C++](#standard-template-library-in-c)
  - [Advantages of STL](#advantages-of-stl)
  - [Containers](#containers)
    - [Sequence Containers](#sequence-containers)
    - [`std::vector`](#stdvector)
    - [Some member functions of `std::vector`](#some-member-functions-of-stdvector)
      - [Take a look at vectors.cpp for example code.](#take-a-look-at-vectorscpp-for-example-code)
    - [`std::list`](#stdlist)
    - [Associative Containers](#associative-containers)
    - [`std::set` and `std::multiset`](#stdset-and-stdmultiset)
    - [`std::map` and `std::multimap`](#stdmap-and-stdmultimap)
    - [Derived Containers](#derived-containers)
  - [Iterators](#iterators)
- [Overloading the Stream Insertion (`<<`) and Stream Extraction (`>>`) operator](#overloading-the-stream-insertion--and-stream-extraction--operator)
  - [`ostream` class](#ostream-class)
    - [`ofstream` class (derived from `ostream` class)](#ofstream-class-derived-from-ostream-class)
  - [`istream` class](#istream-class)
    - [`ifstream` class (derived from `istream` class)](#ifstream-class-derived-from-istream-class)
  - [`cin` and `cout`](#cin-and-cout)
  - [Stream Insertion and Extraction operators](#stream-insertion-and-extraction-operators)
    - [Stream Insertion Operator (`<<`)](#stream-insertion-operator-)
  - [Return type of the overloaded Operator Function](#return-type-of-the-overloaded-operator-function)
- [Important Concepts](#important-concepts)
  - [Name Lookup vs. Overload Resolution](#name-lookup-vs-overload-resolution)
    - [What is Overload Resolution?](#what-is-overload-resolution)
    - [What is Name Lookup?](#what-is-name-lookup)
    - [Coming to the important part mentioned in Clause 6.5.1...](#coming-to-the-important-part-mentioned-in-clause-651)
    - [Example code-snippet (Example of why multiple inheritance is bad)](#example-code-snippet-example-of-why-multiple-inheritance-is-bad)
  - [Type Promotion and Type Narrowing](#type-promotion-and-type-narrowing)
  - [Poor Performance due to `std::endl`](#poor-performance-due-to-stdendl)
    - [Why aren't characters immediately written?](#why-arent-characters-immediately-written)
    - [Is there need to explicitly flush a stream?](#is-there-need-to-explicitly-flush-a-stream)
  - [Zero Initializing vs. Default Initializing vs. Value Initializing](#zero-initializing-vs-default-initializing-vs-value-initializing)
  - [Function Scope Determination](#function-scope-determination)
  - [Pass and Return by Reference in C++](#pass-and-return-by-reference-in-c)
    - [What is actually the meaning of By Reference?](#what-is-actually-the-meaning-of-by-reference)
    - [Makeshift Pass and Return by Reference of C](#makeshift-pass-and-return-by-reference-of-c)
    - [Example scripts of Pass and Return by Reference in C++](#example-scripts-of-pass-and-return-by-reference-in-c)
  - [Data types in Switch Case statement](#data-types-in-switch-case-statement)
  - [Size of Classes/Structures in C++](#size-of-classesstructures-in-c)
    - [Size of an Empty Class](#size-of-an-empty-class)
    - [Amount of Memory occupied by a Derived Class Object](#amount-of-memory-occupied-by-a-derived-class-object)
  - [Empty Function/Constructor Definition](#empty-functionconstructor-definition)
  - [How does a C++ program end ( return value of `int main()` )](#how-does-a-c-program-end--return-value-of-int-main-)
    - [Can we use `void main()` in C? Should we use it?](#can-we-use-void-main-in-c-should-we-use-it)
  - [Difference b/w Argument & Parameter](#difference-bw-argument--parameter)
  - [Lvalues & Rvalues](#lvalues--rvalues)
- [Common Errors in C/C++ Code](#common-errors-in-cc-code)
  - [Code Snippet 1](#code-snippet-1)
- [Tips for C++](#tips-for-c)
  - [Alternative to `for-else` and `while-else` in C++](#alternative-to-for-else-and-while-else-in-c)
  
<!-- /TOC -->


# Memory Allocation in C

Memory assigned to a program in a typical architecture can be broken down into four segments:
A typical memory representation of a C program consists of the following sections.
1. Text/Code segment  (i.e. instructions)
2. Initialized data segment 
3. Uninitialized data segment  (bss)
4. Heap 
5. Stack
6. Command Line Arguments
   
A typical memory layout of a running process

![](./images/memory-layout-in-c.png)

## 1. Text / Code Segment 

Text / Code segment is one of the sections of a program in an object file or in memory, which contains executable instructions.

We can understand this with the help of an example:

When we compile a program a BINARY file containing **Intermediate Code** gets generated. Suppose we generate a.out for a hello world C-program. a.out consists of the instructions and these instructions are stored in the text segment. 

As a memory region, a text segment may be placed below the heap or stack in order to prevent heaps and stack overflows from overwriting it. In addition to that, it is read-only. 

Usually, the text segment is sharable so that only a single copy needs to be in memory for frequently executed programs, such as text editors, the C compiler, the shells, and so on. Also, the text segment is often read-only, to prevent a program from accidentally modifying its instructions.

## 2. Initialized Data Segment 

Initialized data segment, usually called simply the **Data Segment**. A data segment is a portion of the virtual address space of a program, which contains the global variables and static variables that are initialized by the programmer.
Note that, the data segment is not read-only, since the values of the variables can be altered at run time.
This segment can be further classified into the initialized read-only area and the initialized read-write area.

For instance, the global string defined by 
`char s[] = “hello world”` in C and a C statement like `int debug=1` outside the main (i.e. global) would be stored in the initialized read-write area. 

And a global C statement like `const char* string = “hello world”` makes the string literal `“hello world”` to be stored in the initialized read-only area and the character pointer variable string in the initialized read-write area.

Ex: `static int i = 10` will be stored in the data segment and `global int i = 10` will also be stored in data segment

## 3. Uninitialized Data Segment / BSS

Uninitialized data segment often called the `bss` segment, named after an ancient assembler operator that stood for “block started by symbol.” 

It starts at the end of the [initialized data segment](#2-initialized-data-segment).

Every member of this segment is initialized by the kernel to arithmetic 0 before the program starts executing

It contains all `global` and `static` variables that are initialized to zero or do not have EXPLICIT INTIALIZATION in source code.

For instance, 

- a variable declared `static int i`
- a global variable declared `int j`
 
both, would be contained in the BSS segment.

## 4. Heap

Heap is the segment where dynamic memory allocation usually takes place.

The heap area begins at the end of the BSS segment and grows to larger addresses from there. 

Using `malloc` and `calloc` we can allocate memory in heap.

The Heap area is shared by all shared libraries and dynamically loaded modules in a process.

Checkout the [usage of heap](#7-usage-of-heap) below.

## 5. Stack

The process Stack contains TEMPORARY data such as:

- used to store all `local variables`.
- used for passing `parameters` to the methods/functions along with storing the `return address` of the **instruction**. This instruction is returned to the appropriate `return address` after the function call is over.
- used for storing [automatic variables](#what-are-automatic-variables). 
  
    ### What are Automatic Variables??

    Automatic variables are local variables that allocate memory automatically upon entry to that block and free the occupied memory upon exit from that block.

    In C/C++, all variables declared within a block of code are `automatic` by default. An uninitialized automatic variable has an undefined value until it is assigned a valid value of its type.

It is called the **Stack** segment since it has the Last-In-First-Out (LIFO) structure.


The stack area is traditionally adjoined with the heap area and grows in the opposite direction. When the stack pointer meets the heap pointer, free memory was exhausted. (With modern large address spaces and virtual memory techniques they may be placed almost anywhere, but they still typically grow in opposite directions.)

Each time a function is called, a `stack frame` is pushed onto the stack. It is effectively, a segregated section on the stack. It consists at the least, a return address and certain information about the caller's environment. 

The newly called function then allocates room within the `stack frame` for its automatic and other local variables. 

This is the premise of the working of recursive functions in C. Each time a recursive function calls itself, a new stack frame is pushed, so that one set of variables doesn’t interfere with the variables from another instance of the function. 

As the variables are popped out of the stack frame once their scope is over, at the bottom of the stack frame is the `return address`, which is the last operation completed before the stack frame is removed because the function call ends with a return operation.

### What is Stack Overflow Error?

The compiler allocates some space for the stack part of the memory. When this space gets exhausted due to some faulty code, the situation is called **stack overflow**.
Typical example includes recursion with wrong/no base condition.

## 6. Command Line Arguments

Command line arguments like `argc` and `argv`, and environment variables are stored in this memory.

## 7. Usage of Heap

We can create a pointer/reference variable in our `main` function and point to a memory block in the HEAP. 
The address is stored by the reference variable local to the `main` function (this local variable is stored in Stack segment in the `stack frame` of the `main` function). 

The value the reference variable points to in HEAP is known as the 'Object'. Note that multiple reference variables can point to the same object. 
```c
int main() {
  int a = 10;
  int b = 10;
}
```
`a` and `b` are both **reference variables** that point to the **object** `10`.

Also, in the case of [dynamic languages](#static-vs-dynamic-languages), the same reference variable can be made to point to an object of another data-type, which would also be stored in the heap memory.

We should note that the memory consumed will not get freed automatically in case we overwrite/destroy the pointer. 

If suppose we overwrite the pointer to an array with a character, the remaining memory which was occupied by the array will become GARBAGE and it will be counted in the usage of the program.

OR

If we delete the pointer/reference variable, the object will still consume memory in heap as GARBAGE.

This should be looked out for as it can lead to complete exhaustion of the memory.

In the case of languages like Java, which have the facility of GARBAGE collection, those **objects** which don't have any **reference variable** pointing to them are removed from memory.

## Static vs. Dynamic Languages

![](./images/static-vs-dynamic-languages.png)

# Source Code to Executable File

## Source Code to Assembly Code

When we have the source code of a C program, that `source code` is passed to the compiler and compiler will produce the output in `assembly code` (mnemonic version of machine code). 

## Assembly Code to Object Code

This assembly language code is given to the assembler and assembler produces `object code`,  which is usually in binary language.  

### What is Object Code?

The term `object code` indicates the code is the goal or **"objective"** of the compiling process, wherein compilation includes the assembling phases as well.

This code can be run on any machine with the same CPU architecture. It is also referred to as **Intermediate Code**.

## `gcc` compiler

When we wish to run a C program, we just pass it to the `gcc` compiler and it directly gives us the executable file for the program. 

But, we know that there are several steps along with compilation for obtaining the executable file for a program.

The compiler software actually has within it, the `assembler` along with `loader` and `linker`. So, all the modules are kept together. 

When we call `gcc`, we are actually calling not just the `compiler`, we are calling the `compiler`, then `assembler`, then `linker` and `loader`.

## Intermediate/Object Code files

`.obj` files (.o files on Linux/Unix) are `compiled & assembled` source files. There will indeed be one for each `.cpp` file, or more formally "compilation unit". 

They are produced by the `compilation & assembling` phase of building a project.
<div align="center" >
<img src="./image/compilation-of-c-programs.jpg" width = "50%" />
</div>

## Role of Linker in creating executable/library files

These `.obj` files are then combined by linker to:
 - an application, which is usually a `.exe` file on Windows. On Unix-like systems, an application has no extension. 
 
 OR
 - a library file (dynamic or static)
    -  `.dll` on Windows, `.so` on a Unix-like platform for dynamic library files.
    - `.lib` on Windows, `.a` on a Unix-like platform for static library files (which is basically a collection of `.obj` files in one packed into one file). 

We do not see `.obj` files or static `.lib` files with applications/programs, because they are not needed at runtime, they are used only by `linker`. 

When we run the linking phase of building a project, `linker` combines all the needed `.obj` files into `.exe` and `.dll` files (or equivalent), which are used at runtime.

### How exactly does `linker` work and what is its need?

Let us assume that we `#include`'d some header files in our C program and used the functions that had their prototypes within these header files.

We know that the actual definitions of these functions are in certain libraries that are referred to within the header file.

If we were to explain the need of a linker in simple terms, after `compilation & assembling`, once we obtain the object code contained within an `.obj` file, the linker ensures that the definitions of the `library functions` used are grouped with the object code into a single package which is the `executable file` of the program.

### Static vs. Dynamic Linking

#### Static Linking
  
When we click the .exe (executable) file of the program and it starts running, all the necessary contents of the binary file have been loaded into the process’s virtual address space. However, most programs also need to run functions from the system libraries, and these library functions also need to be loaded.

In the simplest case, the necessary library functions are embedded directly in the program’s executable binary file. Such a program is statically linked to its libraries, and statically linked executable codes can commence running as soon as they are loaded.

- **Advantage:**

  The executable would still run even if the library whose functions are being used gets uninstalled.

- **Disadvantage:**

  Every program generated must contain copies of exactly the same common system library functions. In terms of both physical memory and disk-space usage, it is much more efficient to load the system libraries into memory only once. Dynamic linking allows this single loading to happen.

#### Dynamic Linking

Every dynamically linked program contains a small, statically linked function that is called when the program starts. This static function only maps the link library into memory and runs the code that the function contains. The link library determines what are all the dynamic libraries which the program requires along with the names of the variables and functions needed from those libraries by reading the information contained in sections of the library.

After which it maps the libraries into the middle of virtual memory and resolves the references to the symbols contained in those libraries. We don’t know where in the memory these shared libraries are actually mapped: They are compiled into position-independent code (PIC), that can run at any address in memory.

- **Advantage:** 

  Memory requirements of the program are reduced. A DLL is loaded into memory only once, whereas more than one application may use a single DLL at the moment, thus saving memory space. Application support and maintenance costs are also lowered.

- **Disadvantage:**

  Suppose we have the compiled binary executable which has a bunch of libraries linked dynamically. If suppose the object file was converted to executable in one Linux distribution, and we try to run the executable in another distribution, there is a probability that the library that we dynamically linked isn't installed in the second distribution.

# Sequence Points in C/C++

In general, we can consider the sequence point as it defines any point in the execution of a computer program at which it guarantees or ensures that all the side effects of the previous evaluation of the program's code are done or successfully performed. 

However, it also ensures that none of the alterations or side effects of the subsequent evaluations is yet performed at all.

Also, according to the C++ Standard:
```
Between the previous and next sequence point, 
a scalar object shall have its stored value 
modified at most once by the evaluation of an expression.
```
which, in a sense means that we are not supposed to change a variable's value multiple times in the same expression.

Take a look at [16-sequence-points.c](./16-sequence-points.c) for example code.

# Pointers in C
  
## What are Pointers?

Pointers (pointer variables) are special variables that are used to store addresses rather than values of data items.

## Dereference Operator (`*`)

What the `*` operator does in actuality is that it gets the corresponding data of the memory location stored in the variable.

For example, if a variable `var` stores an integer 100, `*var` will get us the data stored in memory location 100.

## Dereference (`*`) AND Reference (`&`) operators are converse of each other

The Reference/Address-of operator(&) gets us the memory location of the data stored in a variable.

For example, if we have a variable `var`, which holds an integer value, `&var` will get us the memory location where that integer value is stored.

After this operation, if we use `*` operator, it will go back to the integer value, as it is using the newly obtained address to obtain the data item stored in that address.

```c
int a = 10;
printf("%d\n", a);
printf("%d\n", *&a); //Same output
```

## What is the type of a pointer variable?

Pointer to the datatype of the data item whose address is stored 

Example: integer pointer `int*`, float pointer `float*`, char pointer `char*`, etc.

## Why do we have to define a type for just pointing to an address? Aren't all addresses the same?

All data types occupy different sizes in a computer's memory. This size is sometimes compiler dependent.

Specifying a data type for a pointer tells the compiler how many bytes to read from memory when you dereference that pointer. 

If your architecture imposes a 4-byte integer, when you dereference an `int*` variable the compiler will retrieve 4 bytes of data from the place in memory where your pointer points. 

This is why you have to be careful with pointers. If you define a `char` variable in your code and force an `int*` to point to that variable (via casting), when you dereference that `int*` you may get unexpected results (because you are accessing 4 bytes from a memory location where you have only stored a 1-byte value).

```c
int *point, var; 
```

Here, we are declaring a pointer variable 'point' and a regular integer variable 'var'. The asterisk (`*`) tells the compiler that `point` is a pointer variable.

Note that `point` is a pointer, not `*point`.

```c
point = &var;
var = 0;

*point = 1; //Note that `*point` is the same as `var`
```

## (Pointer initialization) Vs. (Pointer declaration & assignment)

### Initializing a Pointer with a value

```c
int *pointer_1 = &variable;
```

Here, note that we are not assigning a value to `*pointer_1`, but to `pointer_1` itself. 

The first part of the statement just tells the compiler that `pointer_1` is a pointer variable.


### When we declare a pointer and assign a value to it later

```c
int *pointer_2;
pointer_2 = &variable; 
```

We don't have to apply an asterisk before `pointer_2` in the above statement, as we have already told the compiler that `pointer_2` is a pointer variable 
when we declared it.

If we do put an asterisk, that would be an attempt to change the value of the variable whose address is already stored in `pointer_2`, but since there is no
address stored in `pointer_2`, that statement would throw an error.

## Using pointers in looping statements

```c
#include <stdio.h>

int main()
{

    char str[128] = "We all scream for ice cream!";
    char *pointer_1 = str;
    ...
    ...
```

### Pointer as LOOP VARIABLE of a WHILE loop    

```c
  while(*pointer_1) {
      
      printf("%c", *pointer_1);
      pointer_1++;
  } 
  printf('\n');
```

In this loop, since null character `\0` has FALSE truth value, as soon as `*pointer_1 == '\0'`, which is also the end of the string, the loop will terminate.

### Pointer as LOOP VARIABLE of a FOR loop    

```c
  for(char *pointer_2 = str; *pointer_2; pointer_2++) {
    printf("%c", *pointer_2);
  }
  printf('\n');
```
  
Here we again see the loop exit condition `*pointer_2 == '\0'`.


## Pointer to Pointer

Usage of this is when we want to dynamically allocate memory for 2D arrays or higher in DATA MINING.

But, nowadays we use Python for Data Mining.

```c
int main() {
    int **pointer_to_a_pointer;

    int *pointer;
    
    int variable;
    
    pointer = &variable;
    pointer_to_a_pointer = &pointer;

    return 0;
}
```

The pointer `pointer_to_a_pointer` points to `pointer`, which stores the address of `variable`.

## Pointers To Multidimensional Arrays

### Syntax for declaring a pointer to 2-D array

```c
int (*threeElementArrayPtr)[3];
```

This means that the variable `threeElementArrayPtr` is a pointer to 3 element integer arrays.

### INCORRECT syntax 1

```c
int* integerPtrArray[3];

```
This means the variable `integerPtrArray` is an array of pointers, having 3 elements..

### INCORRECT syntax 2

```c
int* integerPtr; 
```

We can't use this pointer with a 2D array because this can only point to integers, which are contained within 1D arrays. 

A 2D arrays contains other arrays.

### Using Multi-dimensional array pointers

Look through [Arrays in C](#arrays-in-c) for better understanding of this topic.

```c
int arr[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
};

threeElementArrayPtr = arr;
```

Note that incrementing `threeElementArrayPtr` using `++` will mean movement to the memory location of the 2nd 3-element array within `arr`.

- 
  ```cpp
  std::cout << **(threeElementArrayPtr) << std::endl; 
  ```
  This will give the first element of the 1st 3-element array contained within `arr`, which is `1`.

-
  ```cpp
  std::cout << **(threeElementArrayPtr + 1) << std::endl; 
  ```

  This will give the first element of the 2nd 3-element array contained within `arr`, which is `4`.

- 
  ```cpp
  std::cout << *( (*threeElementArrayPtr) + 1 ) << std::endl; 
  ```

  This will give the second element of the 1st 3-element array contained within `arr`, which is `2`.


# Arrays in C

In C, arrays consist of contiguous memory locations.

The lowest address corresponds to the first element and the highest address to the last element. 
  
The variable we assign the array to points to the base address (first contigouous memory location) of the array and we can obtain the that element by DEREFERENCING the name of the variable.

Some basic terminologies related to arrays:
- The data type of array elements is known as the **BASE TYPE** of the array. 

  This can be integer (`int`), double (`double`), integer array (`int[3]`) in the case of multi-dimensional arrays, character (`char`), etc.
  
- The element numbers in `[]` are called **SUBSCRIPTS** or **INDICES**. 

The `numpy` API in `Python3` uses C arrays which is why it is so fast.

## Incrementing pointers pointing to array elements

A pointer pointing to a specific element in an array, can be made to point to the next element of the array by 'incrementing' it.

```cpp
int arr[3] = {1, 2, 3};

int *integerPtr = &(arr[0]);
// integerPtr pointing to element at 0th index

integerPtr++;
// integerPtr NOW pointing to element at 1st index
```

Although integers usually occupy 4 bytes of memory, in case of pointers, the compiler internally recognizes according to the datatype, that how many elements separation is between the addresses stored in two pointers. 

So `++` operation results in the pointer moving 4 bytes forward in the above case.

## Decaying of array names to pointers

In most contexts, array names decay to pointers. 
In simple words, array names are converted to pointers. 

That's the reason why you can use pointers to access elements of arrays. 

However, you should remember that pointers and arrays are not the same.

There are a few cases where array names don't decay to pointers, such as:
- When it's the argument of the `&` (address-of) operator.
- When it's the argument of the `sizeof` operator.

### Array name as argument of `&` operator

```c
int arr[4];
int index;

// Address POINTED to by the variable name `arr`
printf("%p", arr);

// Adress of first contiguous memory location of `arr`
printf(": %p", &arr); 

//both give the same output
```


We know that the variable name of an array points to its base address so,

- In the first line, we are getting that base address that the variable (technically, the pointer) is pointing to, which is the address of the first element of the array.

- In the second line, we are referencing the array using (`&`) operator. In this case, we don't get the storage location of the pointer-value pointing to the first element of the array, we actually get a pointer-value pointing to the array as a WHOLE.

  
In the second case, the array name is not DECAYING into pointer.

## Calculating the length of an array using pointers

```cpp
int arr[5] = {1, 2, 3, 4, 5};

int* integerPtr1 = &arr[0];
int* integerPtr2 = &arr[4];

std::cout << integerPtr2 - integerPtr1 << std::endl;
``` 

The output of this code snippet is 4. 

Now a question may arise in our mind that if the array `arr` has 5 elements, why is the output 4?

This is because `integerPtr2` points to the BEGINNING memory location of the 5th element. So, in between the addresses `integerPtr1` and `integerPtr2`, there are 4 elements.

We need to go to the address AFTER the 5th element to get the actual length of the array. 

We can use the property of array names NOT [decaying to pointers](#decaying-of-array-names-to-pointers) when kept as an argument of `&` operator.

If we increment `&arr` like so:

```c
printf("%p", (&arr + 1));
```

This will give us the address just after the array.

Dereferencing `(&arr + 1)` will bring it back to `int*` level, where the compile again understands addition/subtraction of 1, 2, etc, as 4, 8 bytes, etc (size of `int` in bytes). 

```cpp
int arr[5] = {1, 2, 3, 4, 5};

if( *(&arr + 1) - 5 == arr) {
    printf("Equal");
}
```

NOTE that the `if` condition returns true in the above case, since these are the same address, which is the beginning of the memory location of element 1.

This indicates that what we have discussed till now is correct.

This allows us to determine the number of elements in an array like this:

```c
printf("No. of elements : %d", *(&arr + 1) - arr);
```

## 2-D Arrays

Two dimensional arrays are called Matrices.

### Declaring 2-D Arrays

- First Method
  ```c
  int matrix_1[4][2] = {
      {1,2},
      {3,4},
      {5,6},
      {7,8}
  };
  ```
- Second method
  ```c
  int matrix_2[][2] = {1,2,3,4,5,6,7,8};
  ```
  According to the length of the row specified, the compiler is able to decipher the number of rows.
  
  BUT, avoid this to prevent confusion.

### Memory Allocation of 2-D Arrays.

If we look at this in terms of matrices, the first number represents the number of rows (each student occupies a row) the second number represents the number of columns (each data point related to the students occupies a column).

According to C/C++ language specifications, matrices are laid out in memory in a ROW-MAJOR ORDER, which means the elements of the first row are laid out consecutively in memory, followed by the elements of the second row NEXT TO THEM in the memory, and so on.

Note that **COLUMN-MAJOR ORDER** is the opposite of this where column wise layout is present.


#### Testing this theory..

```c
for(int index = 0; index < 4; index++) {
    printf("Address of element %d is %p\n", (index + 1), &matrix_1[index]);   
}
``` 
    
As seen by the output, each address is 8 bytes apart.

This signifies that if we try accessing the 1st, 2nd etc element of `matrix_1`, we are accessing a complete row/2-element array, which has two integers. 

Each integer takes up 4 bytes, so 2 integers take up 8 bytes.

So, the 2-D array is stored row wise in contiguous memory locations.

---

# Compiling using g++

The information is just a summarized explanation of the most used commands. Check out [this](https://man7.org/linux/man-pages/man1/g++.1.html) documentation for all the possible flags.

## Options controlling the kind of Output

We invoke `gcc`/`g++` in order to compile the source code of a C/C++ program. In reality, these programs perform multiple steps along with compilation in order to obtain the executable file from the source code.

**Compilation** can involve up to four stages: `preprocessing`, `compilation proper`, `assembly and linking`, always in that order.

GCC is capable of preprocessing and compiling several files either into several assembler input files, or into one assembler input file; then each assembler input file produces an object file, and linking combines all the object files (those newly compiled, and those specified as input) into an executable file.

The "overall options" allow you to stop this process at an intermediate stage. 

For example, the `-c` option says not to run the linker.  Then the output consists of object files output by the assembler, instead of the executable file.

Other options are passed on to one or more stages of processing.
Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker, we rarely need to use any of them.

The usual way to run GCC is to run the executable called `gcc`, or `machine-gcc` when cross-compiling, or `machine-gcc-version` to run a specific version of GCC.  

When you compile `C++` programs, you should invoke GCC as `g++` instead.

## Operands accepted by `gcc`/`g++`

The `gcc` program accepts `options` and `file names` as **operands**. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: `-dv` is very different from `-d` `-v`.

We can mix options and other arguments.  For the most part, the order you use doesn't matter.  Order does matter when you use several options of the same kind; for example, if you specify `-L` more than once, the directories are searched in the order specified.  Also, the placement of the `-l` option is significant.

- `-c` :  Compile or assemble the source files, but do not link.  
    
    The linking stage simply is not done.  The ultimate output is in the form of an object file for each source file.
    
    By default, the object file name for a source file is made by replacing the suffix .c, .i, .s, etc., with .o.
    
    Unrecognized input files, not requiring compilation or assembly, are ignored.

- `-o` *file* : Place output in file *file*. 

    This applies to whatever sort of output is being produced, whether it be an executable file, an object file, an assembler file or preprocessed C code.

    If `-o` is not specified, the default is to put an executable file in `a.out`, the object file for `source.suffix` in `source.o`, its assembler file in `source.s`, a precompiled header file in `source.suffix.gch`, and all preprocessed C source on standard output.

## Compiling a CPP file to generate an executable target file
### `g++ file_name`
```console
rohan@ubuntu:~$ g++ exampleFile.cpp
``` 

This command compiles, assembles and links `exampleFile.cpp` to produce a default target executable file `a.out` in present working directory. 

To run this program, type `./a.out` where `./` represents present working directory and `a.out` is the executable target file.

### `g++ -S file_name`

``` 
rohan@ubuntu:~$ g++ -S exampleFile.cpp
``` 
This command is used to only compile `exampleFile.cpp` and not assembling or linking. It will generate a `exampleFile.s` assembly source file.

### `g++ -c file_name`

```
rohan@ubuntu:~$ g++ -c exampleFile.cpp
```
This command is used to only compile and assemble `exampleFile.cpp` and not link the object code to produce executable file. It will generate a `exampleFile.o` object code file in present working directory.

### `g++ -o target_name file_name`

``` 
rohan@ubuntu:~$ g++ -o main.exe hello.cpp
```
Compiles and links `hello.cpp` and generates executable target file with `main.exe` (or `a.out` by default when a target is not specified).

## Compiling and linking multiple files 

When `-c` flag is used, it invokes the compiler stage which translates source code to object code.

When `-o` flag is used it links object code to create the executable file from `file_name.o` to `a.out`(default). 

Multiples files may be passed together as arguments.
 
```
rohan@ubuntu:~$ g++ -c helloWorld.cpp hello.cpp
```
It compiles and creates object code for the files `helloWorld.cpp` and `hello.cpp` to `helloWorld.o` and `hello.o` respectively.
``` 
rohan@ubuntu:~$ g++ -o main.exe helloWorld.o hello.o
```
It links the object codes `helloWorld.o` and `hello.o` to create an executable file `main.exe`. So, effectively we are executing the commands of both the cpp files when we run `main.exe`.

### Printing compilation warning messages (`g++ -Wall file_name`)

It prints all warning messages that are generated during compilation of `file_name`.

# Header files and Namespaces

## Accessing methods using **header files** and **namespaces**

In C++, we access pre-defined methods and functions by two ways.

- The first is to `#include` certain header files and use methods declared and defined within said header files.

    ```cpp
    #include <iostream>
    #include <string.h>
    
    int main() {
        ...
        
        char string[5] = "hello";
        char copy_string[5];

        strcpy(copy_string, string); 
        
        ...
        return 0;
    }
    ```
    Here, `strcpy()` is a method defined within the `<string.h>` header file.

- The second is to use the name of a particular namespace along with a scope resolution operator, followed by the name of the method.

    ```cpp
    #include <iostream>
    
    int main() {
        ...

        std::cout << "hello world" << std::endl;
        
        ...
        return 0;
    }
    ```
    Here, we are using the method `cout` and `endl` which are a part of the `std` namespace. 

## Need of both **Header files** and **namespaces**

Namespaces and header files are inherently different in function.

### What are Header Files?

Header files are actual files - stored in the file system. They typically contain declarations of certain classes and functions.

#### How do they work?

Header files are source files that get textually copied into the current translation unit by the `#include` directive. That's it. It's literally just copying in the contents.

### What is a Namespace?

A namespace enables code to categorize identifiers. That is, classes, functions, etc. can be placed inside a namespace, keeping those separate from other classes that are unrelated. 

They don't exist as a file system object, but rather as a designation within code telling the compiler that certain things are within that namespace. 

For instance, the `std` namespace in C++ contains all of the Standard Library functions and classes.


Header file would be a unique file on a file system and namespace would be covering one or more files.
i.e. Header file is a **physical thing** and namespace is a **logical thing**.

## How does the most elementary combination of `<iostream>` header file and `std` namespace work?

Some of the methods defined within the `<iostream>` header file, like `cin`, `cout`, `flush` and `endl` are members of the `std` namespace. 

In other words, some methods of `<iostream>` form a piece of the `std` namespace.

Looking at the following code

```cpp
#include <iostream>

int main(){
    std::cout << "Hello World" << std::endl;
    return 0;
}
```

Here, we are able to use the `cout` and `endl` methods BECAUSE they are defined within the `<iostream>` header file, which has been `#include`'d in this code. 

If it had NOT been `#include`'d, we wouldn't have been able to access these methods.

So, along with specifying the namespace of a particular method, it is important to ensure that the header file or library header containing the definition of that method is `#include`'d by the source file.

# Scopes in C++

TODO: Complete in detail

```cpp
#include <iostream>

int a = 1

void exampleFn() {
  a = 5;
}

int main() {
  std::cout << a << "\n";
  exampleFn();
  std::cout << a;
}
```
Output:
```
1
5
```
Since, we didn't pass the variable by value `a` into `exampleFn()`, no local copy was created, and `a` referred to the global version itself.

This is why the change in `a` is reflected.

# I/O in C++

TODO : Refer [10B-InputOutput-in-C++.cpp](10B-InputOutput-in-C++.cpp) and write here

# OOP in C++

## Introduction

Because objects are dynamic, they are called run-time entities as they are created and modified during the run-time.

A class is a user-defined type. It consists of a set of members which might be PRIVATE or PUBLIC. 

A `struct` which we studied earlier is a type of class where all MEMBERs are by default public. 

PUBLIC MEMBERS provide the class’s interface.
PRIVATE MEMBERS provide implementation details.

The most common kinds of members are data members and member functions.

MEMBER FUNCTIONS can define the meaning of initialization (creation), copy, move, and cleanup (destruction).

The variables defined within an objects are called its DATA MEMBERS.

Members are accessed using `.` (dot) for objects and `−>` (arrow) for pointers to objects.

A class is defined in C++ using keyword `class` followed by the name of the class.

The body of the class is defined inside the curly brackets and terminated by a semicolon at the end.

```cpp
class className {
   // some data
   // some functions
};
```

When a class is defined, only the specification for the object is defined; no memory or storage is allocated.
To use the data and access functions defined in the class, we need to create objects.

## Member Functions of Classes (Implicitly Inline)

Defining a member function within the class definition implicitly converts the function to inline, even if we do not use the inline specifier.

> **_NOTE:_** Any function declared within a class is IMPLICITLY INLINE, irrespective of the fact whether it is defined INSIDE or OUTSIDE the class.

```cpp
class Point {
private:
    int x, y;
public:
    // inline function DECLARED and DEFINED within a class
    
    int getX() {
        return x;
    };
    
    // inline function DECLARED within a class but DEFINED OUTSIDE it
    
    int getY();
};

//DEFINITION of the function DECLARED above
int Point::getY() {
    return y;
};
```

Here, the functions `getX()` and `getY()` are inline member functions of the class `Point`.

## Access Modifiers

There are 3 kinds of access modifiers: public, private and protected. 
The default access modifier in a class is PRIVATE

- `public` keyword is used to create public members (data and functions). The public members are accessible from any part of the program.

  The public elements are accessible from `main()`, because public elements are accessible from all parts of the program.

- `private` keyword is used to create private members (data and functions).

  The private members can only be accessed from within the class.

  > _**NOTE**_: `private` members are inherited by derived classes. They even occupy memory when instances of the derived classes are created.
  >
  > But, they still can't be accessed from anywhere EXCEPT from within the base class.

  However, a `friend class` or a `friend function` can access private members.

- `protected` access modifier is similar to private access modifier in the sense that it can’t be accessed outside of its class unless with the help of friend class.

  The difference is that the class members declared as `protected` can be accessed by any 
subclass(derived class) of that class as well. 

Look at the following code-snippet to see the usage of all access modifiers.

```cpp
class Employee {

private: 
    int age;
protected:
    int protected_variable;
public:
    int hours_worked;
    void display_hours_worked() {
        cout << "Hours worked by employee: " << hours_worked << endl;
    };
    void displayAge(int age_argument) {
        age = age_argument;
        cout << "Age of the employee is: " << age << endl;
    }
};

class EmployeeChild : public Employee  {
    
public:
    int child_number;

    //? The member function of the child class is able to access the protected variable of its parent

    void access_protected_variable (int value_argument) {
        protected_variable = value_argument;
        cout << "Value of protected variable: " << protected_variable << endl;
    }
};

int main() {
    Employee employee_1;

    //* accessing public members of the object `employee_1`

    employee_1.hours_worked = 100;
    employee_1.display_hours_worked();

    //* modifying and displaying a private data member using a public inline member function 

    employee_1.displayAge(29);

    /*
    In main(), we cannot directly access the class variable age.
    We can only indirectly manipulate age through the public inline member function displayAge().
    */
    
    //* demonstrating how child can access protected variable of parent

    EmployeeChild child_1;
    
    child_1.access_protected_variable(10);

    return 0;
}
```

## Friend Class

A friend class can access PRIVATE and PROTECTED members of other class in which it is declared as friend. 
It is sometimes useful to allow a particular class to access private members of other class.

### Important points about friendship

- Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
- Friendship is not inherited

### Example code-snippet

```cpp
class SecondaryClass {
    friend class PrimaryClass;

private: 
    int privateVarSecondary;
};

class PrimaryClass {

private: 
    int privateVarPrimary;
public:
    void variableAccessFunction(SecondaryClass &exampleSecondaryClass) { 
        
        exampleSecondaryClass.privateVarSecondary = 10;
        cout << exampleSecondaryClass.privateVarSecondary;
    };
};


int main() {
    PrimaryClass one;
    SecondaryClass two;

    one.variableAccessFunction(two);

    return 0;
}
```

Output:
```
10
```

The function `variableAccessFunction` has to be a public member function to allow its usage in `main()`.

## Friend Function

Like friend class, a friend function can be given a special grant to access PRIVATE and PROTECTED members. 

A friend function is a function that is specified outside a class but has the ability to access 
the class members’ protected and private data.

A friend function can be any of the TWO: 
1. A member of another class 
2. A global function 

The benefit of using friend functions instead of member functions defined within a class is that MEMBER functions are implicitly made INLINE which is good for speed but can cause some functional problems and reduces separation of local variables of the function.

> **_NOTE:_** Member functions are USEFUL in case of short codes that will benefit from reduced time of creating a function call stack.

Syntax for declaring a Friend Function:

```cpp
class <class-name> {
    friend <return-type> <function-name> (argument/s);
    ...
    ...
};
```

Take a look at the following code-snippet to understand Friend Functions.

```cpp
class Box {    
    private:    
        int length;    
    public:    
        Box() {
            length = 0;
        }
        friend int printLength(class Box example_box); //friend function    
};    

int printLength(class Box example_box) {    
    example_box.length += 10;      
    return example_box.length;    
}     
int main() {    
    class Box first_box;
    cout << "Length of box: " << printLength(first_box) << endl;    
    return 0;    
}   
```

Output:
```
Length of box: 10
```

# Templates in C++

In C++, the **template** system was designed to simplify the process of creating functions (or classes) that are able to work with different data types.

Instead of manually creating a bunch of mostly-identical functions (**function overloading**) or classes (one for each set of different types), we instead create a single template. 

Just like a normal definition, a template describes what a function or class looks like.

In a way, we can say that..

- **Class** is a blueprint for an **Object**
- So, **Template** is a blueprint for a **Class**

Once a template is defined, the compiler can use the template to generate as many overloaded functions (or classes) as needed, each using different actual types.

This concept of helps us to satisfy **DRY**(Don't Repeat Yourself).

## Declaring one or more Template Parameters using PlaceHolder Types

In order to declare the **Template Parameters**, we start with the `template` keyword, which tells the compiler that we’re creating a template. 

Next, we specify all of the template arguments (regular types OR `placeholder` types) that our template will use inside angled brackets (`<>`). 

- A `placeholder` type is declared with the use of the `typename` keyword along with a **placeholder name** (For example: `T`, `U`, `V`, etc...). 

- It represents some type that is not known at the time the template is written, but that will be provided later. Unlike a normal definition (where ALL types must be specified), in a template we can use one or more `placeholder` types. 

- These placeholder types are useful for creating Library Functions BECAUSE, we can re-use the same functions for datatypes that didn't even exist at the time of writing the Library Functions. 

Note that we can declare multiple **comma separated** template parameters for a `function template` or a `class template`.

An example of a `function template`:
```cpp
template <typename T, typename G> //parameters can be ONE or more

void print(T firstVal, G secondVal) {
    cout << firstVal << endl;
    cout << secondVal << endl;
};
```

An example of a `class template`:
```cpp
template <typename T, typename U> //parameters can be ONE or more

class Array {
    private:
        U key;
        T arr[50];
    public:
        void displayArr();
        void displayKey() {
            cout << "Your key is" << key << endl;
        };
};

template <typename G, typename H>
/*
Note that we can change the placeholder names of the placeholder types.

Although the standard is, to use the same placeholder names 
as the original class definition in order to avoid confusion.
*/
void Array<G, H>::displayArr() {
    for(int index = 0; index < 50; index++) {
        cout << arr[index] << '\n';
    };
};

template <typename T, typename U>
/*
Also keep in mind that each usage of the placeholder types 
requires a separate `Template Parameter Declaration` as well. 
*/
void Array<T, U>::displayKey() {
    cout << "Your key is" << key << endl;
};
```

## Templates with Default Parameters


We can use the following syntax for specifiying default datatypes of Template Parameters in case the used doesn't specify a datatype.

```cpp
template <typename T=int, typename U=float>
```

## Class Templates

Refer... 
- [17oop-a-intro-to-class-templates.cpp](./ObjectOrientedProgramming/17oop-a-intro-to-class-templates.cpp) for an example implementation of templates with multiple parameters, as well as to see the usage of **Templates with default parameters**.
- [17oop-b-another-example-of-class-templates.cpp](./ObjectOrientedProgramming/17oop-b-another-example-of-class-templates.cpp) to see how two objects derived from different classes but the same class template interact.

## Function Templates

Refer...
- [07Fu-a-function-templates.cpp](./Functions/07Fu-a-function-templates.cpp) for a standard implementation of function templates.
- [07Fu-c-overloaded-and-templatized-member-func.cpp](./Functions/07Fu-c-overloaded-and-templatized-member-func.cpp) for understanding how a function call is resolved when a function is both templatized and overloaded.

## Difference between `typename` and `class` keyword

For each template type, we use the keyword `typename` or `class`, followed by the name of the template type. The best practice is to use a single capital letter (starting with `T`) to name your template types (e.g. `T`, `U`, `V`, etc…)

```cpp
template <typename someType>
template <class someClass>
```

Here `someType` and `someClass` are template types.

There is no difference between the `typename` and `class` keywords in this context. The use of the `class` keyword is often seen since it was introduced into the language earlier. 

However, the newer `typename` keyword is preferred, because it makes it clearer that the template type can be replaced by any type (such as a `fundamental` type), not just `class` types.

# Standard Template Library in C++

The C++ STL (Standard Template Library) is a powerful set of C++ template classes to provide general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures like vectors, lists, queues, and stacks.

STL is used because it is a good idea not to re-invent the wheel.

At the core of the C++ Standard Template Library are following three well-structured components −

- **Containers** are used to manage collections of objects of a certain kind. There are several different types of containers like deque, list, vector, map etc.

- **Algorithms** act on containers. They provide the means by which you will perform initialization, sorting, searching, and transforming of the contents of containers.

- **Iterators** are used to step through the elements of collections of objects. These collections may be containers or subsets of containers.

Iterator is an object that points to an element in a Container. It is handled just like pointers. 

The movement of this object is controlled by the Algorithm.  

## Advantages of STL

- We can re-use well tested components.
- We can save time no matter what level of proficiency you have in C++.

## Containers

A Container class is a class designed to hold and organize multiple instances of another type (either another class, or a fundamental type). 

There are many different kinds of container classes, each of which has various advantages, disadvantages, and restrictions in their use.

### Sequence Containers

Sequence containers are container classes that maintain the ordering of elements in the container. A defining characteristic of sequence containers is that you can choose where to insert your element by position. 

As of C++11, the STL contains 6 sequence containers: `std::vector`, `std::deque`, `std::array`, `std::list`, `std::forward_list`, and `std::basic_string`

### `std::vector`

`std::vector` provides dynamic array functionality that handles its own memory management.

 This means we can create arrays that have their length set at run-time, without having to explicitly allocate and deallocate memory using `new` and `delete` operators. 
 
 `std::vector` is defined in the `<vector>` header file and is included under the `std` namespace.

- Random access is fast in `std::vector`.
- Insertion and deletion at the end is fast but slow in the middle.

This is in comparison with the built-in implementation of arrays in C.

### Some member functions of `std::vector`

- `std::vector::begin()`

    Returns an `iterator` pointing to the first element in the vector.

    Notice that, unlike member `vector::front`, which returns a **reference** to the first element, this function returns a `random access iterator` pointing to it.
    <br><br>

- `std::vector::end()`
    
    Returns an iterator referring to the **past-the-end** element in the vector container.

    The **past-the-end** element is the theoretical element that would follow the last element in the vector. It does not point to any element, and thus shall not be dereferenced.

    Because the ranges used by functions of the standard library do not include the element pointed by their closing iterator, this function is often used in combination with `vector::begin` to specify a range including all the elements in the [container](#containers).

    If the container is empty, this function returns the same as `vector::begin`.
    <br><br>

- `std::vector::size()` 
    
    Returns the number of elements in the vector.

    This is the number of actual objects held in the vector, which is not necessarily equal to its storage capacity.
    <br><br>

- `std::vector::capacity()` 

    Returns the size of the storage space **currently allocated** for the vector, expressed in terms of elements.

    This capacity is not necessarily equal to the vector size. It can be equal or greater, with the extra space allowing to accommodate for growth without the need to reallocate on each insertion.

    Notice that this capacity does not suppose a limit on the size of the vector. When this capacity is exhausted and more is needed, it is automatically expanded by the container (reallocating it storage space). The theoretical limit on the size of a vector is given by member max_size.
    <br><br>

- `std::vector::max_size()` 

    Returns the maximum number of elements that the vector can hold.

    This is the **maximum potential size** the container can reach due to known system or library implementation limitations, but the container is by no means guaranteed to be able to reach that size: it can still fail to allocate storage at any point before that size is reached.
    <br><br>

- `std::vector::push_back(<element>)`

    Adds a new element at the end of the vector, after its current last element. The content of val is copied (or moved) to the new element.

    This effectively increases the container size by one, which causes an automatic reallocation of the allocated storage space if **-and only if-** the new vector size surpasses the current vector capacity.
    <br><br>

- `std::vector::pop_back()`
    <br><br>

- `std::vector::insert(<element>, <iterator-index-position> )`
    The vector is extended by inserting new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.

    This causes an automatic reallocation of the allocated storage space if -and only if- the new vector size surpasses the current vector capacity.
    <br><br>

#### Take a look at [vectors.cpp](./StandardTemplateLibrary/vectors.cpp) for example code.

### `std::list`

TODO

- Random access is slow in `std::list`.
- Insertion and deletion is fast both at the end and in the middle.

### Associative Containers

Associative containers are containers that automatically sort their inputs when those inputs are inserted into the container. By default, associative containers compare elements using operator `<`.

All operations (searching, insertion and deleting) are fast except for Random Access.

### `std::set` and `std::multiset`

- `std::set` is a container that stores unique elements, with duplicate elements disallowed. The elements are sorted according to their values.
- `std::multiset` is a set where duplicate elements are allowed.

`std::set` and `std::multiset` are both defined in the `<set>` header file and are included under the `std` namespace.

### `std::map` and `std::multimap`

- `std::map` (also called an associative array) is a set where each element is a pair, called a key/value pair. The key is used for sorting and indexing the data, and must be unique. The value is the actual data.
- `std::multimap` (also called a dictionary) is a map that allows duplicate keys. Real-life dictionaries are multimaps: the key is the word, and the value is the meaning of the word. All the keys are sorted in ascending order, and you can look up the value by key. Some words can have multiple meanings, which is why the dictionary is a multimap rather than a map.

`std::map` and `std::multimap` are both defined in the `<map>` header file and are included under the `std` namespace.

### Derived Containers

These containers model real-world objects so the speed of their operations depends on the implementation of the container.

## Iterators

# Overloading the Stream Insertion (`<<`) and Stream Extraction (`>>`) operator

## `ostream` class

This is a class defined in the `<iostream>` header file. 

### `ofstream` class (derived from `ostream` class)

This class is made to operate on files.

Objects of this class maintain a `filebuf` object as their internal stream buffer, which performs input/output operations on the file they are associated with (if any).

In simple words, it is a special kind of `ostream` that writes data out to a data file.

## `istream` class

This is a class defined in the `<iostream>` header file. 

### `ifstream` class (derived from `istream` class)

This class is made to operate on files.

Objects of this class maintain a `filebuf` object as their internal stream buffer, which performs input/output operations on the file they are associated with (if any).

## `cin` and `cout`  

- `cin` is an instance/object of `ostream` class, which is declared within the `<iostream>` header file.
- `cout` is an instance/object of `istream` class, which is declared within the `<iostream>` header file.

## Stream Insertion and Extraction operators

- `<<` is the stream insertion operator
- `>>` is the stream extraction operator

### Stream Insertion Operator (`<<`)

The insertion operator `<<` gets its name from the idea of inserting data into the output stream.

It is the one we usually use for output, as in:

```cpp
cout << "This is output\n";
```

Notice that it has two arguments in most use cases: 

- on the left, an instance of the `ostream` class, and 
- on the right, an instance of any implicit data type. 

The Operator Function for defining the behaviour of this (`<<`) operator is a public member function of the `ostream` class. 

It can be accessed using the following scope resolution syntax - `std::ostream::operator<<`

Since we do not have the ability to add anything to the `ostream` class (which someone else already invented) in order to overload it for use with the user-defined class.

So, we will have to make it a friend of our user-defined class and pass the `ostream` object into the friend function (as opposed to a member function being able to directly access the **data members** of the `ostream` class).

## Return type of the overloaded Operator Function

The operation is made to return an object of the class `ostream`/`istream`, which was passed by reference to the operator function originally.

Note that it isn't necessary that return type of the operator function is `istream&` or `ostream&`. 

We can also keep the return type as `void`. This is possible in the cases where there is just the object to be shown:
```cpp
cout << objectName;
```
If suppose we had a statement similar to:
```
cout << objectName << "\n";
```
Then, we would be needing the `cout << objectName` operation to return `cout` so that `\n` could also be written to the output stream, with the command effectively becoming
```cpp
cout << "\n"; 
```
with the object `objectName` already written to the output stream.

Even though it isn't necessary to keep the return type as `istream&` or `ostream&`, we should still do it everytime as that is how `cin` and `cout` work with primitive values as well.

Refer [08Op-d-stream-operator-overloading.cpp](./Operators/08Op-d-stream-operator-overloading.cpp) for an example implementation of this.

# Important Concepts
    
## Name Lookup vs. Overload Resolution 

### What is Overload Resolution?

C++20 Standard (Clause 12.4.1)

Overload Resolution is a mechanism for selecting the best function to call given a list of expressions that are
to be the arguments of the call and a set of candidate functions that can be called based on the context of
the call. 

The selection criteria for the best function are the number of arguments, how well the arguments
match the parameter-type-list of the candidate function, how well (for non-static member functions) the
object matches the implicit object parameter, and certain other properties of the candidate function.

### What is Name Lookup?

C++20 Standard (Clause 6.5.1)

The name lookup rules apply uniformly to all names (including typedef-names (9.2.4), namespace-names (9.8),
and class-names (11.3)) wherever the grammar allows such names in the context discussed by a particular rule.

Name lookup associates the use of a name with a set of declarations (6.2) of that name. 

If the declarations found by name lookup all denote functions or function templates, the declarations are said to form an **Overload Set**. 

The declarations found by name lookup shall either all denote the same entity or form an overload set.

### Coming to the important part mentioned in Clause 6.5.1...

Overload Resolution (Clause 12.4) takes place **AFTER** Name Lookup(Clause 6.5.1) has succeeded.

### Example code-snippet (Example of why multiple inheritance is bad)

This code-snippet is an example which justifies why multiple inheritance is bad.

In this case, it is causing confusing overload resolution.

This code is erroneous and hence can't be run.

```cpp
class BaseClass1 {
  public:
    void greet() {
        cout << "Hello beautiful" << endl;
    };
};

class BaseClass2 {
  public:
    void greet(string name) {
        cout << "Hello " << name << endl;
    };
};

class DerivedClass : public BaseClass1, public BaseClass2 {

};

int main() {
  DerivedClass sampleDerived; 
  sampleDerived.greet();
  sampleDerived.greet("rohan");
  
  return 0;
}
```


> ***NOTE:*** Inheriting two function definitions from two different classes is not the same as having two function definitions written in the derived class definition itself. This is in regard to ***SCOPING***.
>
> Because if the two functions had been declared in the Derived Class itself, they would've formed an OVERLOAD SET.
>
> But in this case, Name Lookup occurs first and the compiler tries to figure out which BASE class `greet` member function belongs. But it finds that the function call is AMBIGUOUS because a member function with the name `greet` is present in both the classes.
> 
> The compiler stops EXECUTION there, irrespective of the member function SIGNATURES.

## Type Promotion and Type Narrowing

Read [08B-c-type-promotion-and-type-narrowing.cpp](./08B-c-type-promotion-and-type-narrowing.cpp). It is important to understand why narrowing type conversion can be bad and how to prevent it.

## Poor Performance due to `std::endl`

`std::endl` not only adds newlines to the stream, it also flushes the buffer each time it is used. Thus when we write

```cpp
 cout << std::endl 
```
We are actually doing something like this
```cpp
 cout << '\n' << std::flush;
```

On a sequential stream syncing with the external destination just means that any buffered characters are immediately sent. That is, using `std::flush` causes the stream buffer to flush its output buffer.

### Why aren't characters immediately written? 

The simple answer is that writing characters is generally fairly slow. 

Flushing of buffers is an Operating System task. Each time the buffer is flushed, a request has to be made to the OS and these requests are comparatively expensive. 

Furthermore, we don’t really need to flush the buffer every time we write something to the stream, since the buffers get flushed automatically when they get full.

However, the amount of time it takes to write a reasonable amount of characters is essentially identical to writing just one. 

The amount of characters depends on many characteristics of the operating system, file systems, etc. but often up to something like 4k characters are written in about the same time as just one character. 

Thus, buffering characters up before sending them using a buffer depending on the details of the external destination can be a **huge performance improvement**.

### Is there need to explicitly flush a stream?

There are a handful of situations where flushing is required.

This may be at the end of writing a file **(closing a file IMPLICITLY flushes the buffer, though)**.

OR 

Immediately before asking for user input **(note that `std::cout` is automatically flushed when reading from `std::cin`)**.

Although there may be a few occasions where you EXPLICITLY want to flush a stream, they are fairly rare.

## Zero Initializing vs. Default Initializing vs. Value Initializing

According to the C++20 standard,

To **zero-initialize** an object of type T means:

- if T is a scalar type (6.8), the object is initialized to the value obtained by converting the integer literal 0 (zero) to T;
- if T is a (possible cv-qualified) non-union class type, its padding bits(6.8) are initialized to zero bits and each non-static data member, each non-virtual base class subobject, and, if the object is not a base class subobject, each virtual base class subobject is zero-initialized;
- if T is a (possible cv-qualified) union type,  its padding bits(6.8) are initialized to zero bits and the object’s first non-static named data member is zero-initialized;
- if T is an array type, each element is zero-initialized;
- if T is a reference type, no initialization is performed.

To **default-initialize** an object of type T means:

- If T is a (possibly cv-qualified) class type (Clause 11), constructors are considered. The applicable constructors are enumerated (12.4.2.4), and the best one for the initializer () is chosen through overload resolution (12.4). The constructor thus selected is called, with an empty argument list, to initialize the
object.
- If T is an array type, each element is default-initialized;
- otherwise, no initialization is performed.

To **value-initialize** an object of type T means:

- if T is a (possibly cv-qualified) class type (Clause 11), then (8.1.1) — if T has either no default constructor (11.4.5.2) or a default constructor that is user-provided or deleted, then the object is default-initialized;
- otherwise, the object is zero-initialized and the semantic constraints for default-initialization are checked, and if T has a non-trivial default constructor, the object is default-initialized;
- if T is an array type, then each element is value-initialized;
- otherwise, the object is zero-initialized.

## Function Scope Determination 

The concept of local and global function scope is very important in C++.
In simple terms, a function can be called from a scope wherre its prototype is declared.

Read [09B-a-scope.cpp](./09B-a-scope.cpp) for more details.

## Pass and Return by Reference in C++

### What is actually the meaning of By Reference?

The concept is to be able to refer to a certain variable using an alternate name. 

The difference between a reference and a pointer is that: 
- references are used to refer an existing variable in another name 
- whereas, pointers are used to store address of variable

Note that references are such that we can use them as if they are the ACTUAL names of the variables themselves.

For example, if a function having a return type `int&` returns an integer. We can use that function's call and assign a value to the variable.

Input:
```cpp
int& test(int& var) {
    return var;
};

int main() {
    int mainVar = 1;

    cout << mainVar << '\n';

    test(mainVar) = 5; //Using the function call on the left side of an assignment operation
    
    cout << mainVar << '\n';

    return 0;
}
```
Output:
```
1
5
```

### Makeshift Pass and Return by Reference of C

In C, passing and returning a value `by reference` is actually just passing or returning a pointer `by value`.

```cpp
void swap_by_pointers(int *first_num, int *second_num) {
    /*
    Here, we are specifying that we would be inputting: 
    
    pointers which point to an integer value 
    OR 
    pointers which hold the address of integer values 
    OR 
    addresses of integer values DIRECTLY
    */
    int temp = *first_num;
    *first_num = *second_num;
    *second_num = temp;
    /*
    In this function, we are manipulating the variables as if we
    have addresses stored in them. 
    
    In the case of the Call by Reference method of C++, 
    we manipulate the variables normally as in Call by Value.
    It's just that the original copies are getting mutated.
    */
}
```

### Example scripts of Pass and Return by Reference in C++


- [12B-b-return-by-reference-in-CPP.cpp](./12B-b-return-by-reference-in-CPP.cpp) for an elementary example of return by reference.

- [08Op-d-stream-operator-overloading.cpp](./Operators/08Op-d-stream-operator-overloading.cpp) for understanding why we return `cin` and `cout` by reference when we overload the stream insertion (`<<`) and stream deletion (`>>`)
operators.

## Data types in Switch Case statement

Only integers and characters can be used in switch case expression.

Read [07FoC-SwitchStatement.cpp](./FlowOfControl/07FoC-SwitchStatement.cpp) for more details.

## Size of Classes/Structures in C++

When the structure was introduced in `C`, there was no concept of 'Objects' at that time. So, according to the `C standard`, it was decided to keep the size of the empty structure to zero. 

In `C++`, the Size of an empty structure/class is **one byte** as to call a function at least empty structure/class should have some size, i.e. one byte to make them distinguishable.

### Size of an Empty Class

**Empty class** is a class that does not contain any data members (e.g. `int a`, `float b`, `char c`, and `string d`, etc.) However, an empty class may contain member functions. 

A class WITHOUT an object requires no space allocated to it. 

The space is allocated when the class is instantiated, so **1 byte** is allocated by the compiler to an object of an empty class for its **unique address identification**. 

Taking a hypothetical situation where an object of an empty class is allocated 0 memory, how would be able to know that there exists an object, when we don't even have the address at which its stored? 

That’s the reason when we create an object of an empty class in a C++ program, it needs some memory to get stored, and the minimum amount of memory that can be reserved is 1 byte. 

Hence, if we create multiple objects of an empty class, every object will have a unique address.

See [12oop-d-sizeof-empty-class.cpp](./ObjectOrientedProgramming/12oop-d-sizeof-empty-class.cpp) for validation of this.

### Amount of Memory occupied by a Derived Class Object

It is important to understand that the amount of memory occupied by an instance of a **Derived Class** is INDEPENDENT of its [mode of inheritance](./ObjectOrientedProgramming/12oop-a-inheritance.cpp) from the **Base Class** as well as the [access modifiers](./ObjectOrientedProgramming/03oop-access-modifiers.cpp) of the data members of the **Base Class**.

It would be inconsistent and problem causing if we were to decide what members get inherited
based on the ACCESS MODIFIER they are enclosed in ( In the Base Class ).

It is easier and more reliable to accept the MEMORY OVERHEAD of the extra data members inherited from the **Base Class** which can't be accessed ( they might be under the `private:` access modifier ) but are still grouped with the **Derived Class** and are allocated memory upon creation of instances of the **Derived Class**.
Take a look at [12oop-e-sizeof-derived-class.cpp](./ObjectOrientedProgramming/12oop-e-sizeof-derived-class.cpp) for validation of this concept.

## Empty Function/Constructor Definition

Consider the following code snippet...
```cpp
1  #include <iostream>
2
3  class Example {
4     public:
5         void display1();
6         void display2(){};
7 
8         int process1();
9         int process2(){};
10
11        Example();
12        Example(){};
13 };
```
- Line 5 is a VALID **function prototype declaration**.
- Line 6 is a VALID **empty function definition**. This means that it is not possible use the scope resolution operator and define the function (again) outside the class because we will receive a **function re-definition error**. 
- Line 8 is a VALID **function prototype declaration**.
- Line 9 is an INVALID **empty function definition** because the function has a non-void return type, yet there is no return statement within the function definition, so we get a warning similar to this: 

    ```bash
    warning: no return statement in function returning non-void [-Wreturn-type]
    ```
- Line 10 is a VALID **default constructor prototype**. But, the user might get errors when trying to create objects using the default constructor if the program doesn't contain a definition later on for this **default constructor**. The sytax for the constructor definition is similar to this:
    ```cpp 
    Base::Base() {
        //...
        //constructor definition
        //...
    };
    ```
- Line 11 is a VALID **empty default constructor definition** because constructors don't return any values. But, just like line 6, we can't write a definition for this constructor using the scope resolution operator (`::`) outside the class as it would be considered a **function re-definition** which is not allowed. 

## How does a C++ program end ( return value of `int main()` )

The `exit` function, declared in `<stdlib.h>`, terminates a C++ program. 

The value supplied as an argument to exit is returned to the operating system as the program's return code or exit code. 

By convention, a return code of `zero` means that the program completed successfully. We can also use the constants `EXIT_FAILURE` and `EXIT_SUCCESS`, also defined in `<stdlib.h>`, to indicate success or failure of your program.

Issuing a return statement from the `main` function is equivalent to calling the exit function with the return value as its argument. 

That is why we can't declare the return type of the `main` function as `void` in C++.

### Can we use `void main()` in C? Should we use it?

Although most C compilers don't give error when running `void main()`, it's non-standard (not in accordance with latest C standard that is a reference for what rules govern the behaviour of C compilers). 

The standard prototype of main is `int main()` with the optional command line arguments `argc` and `argv` . 

The `int` returned by `main()` is a way for a program to return a value to the system that invokes it.

## Difference b/w Argument & Parameter

```cpp
int add(int augend, int addend) { // Parameters
  return (augend + addend);
}

int main() {

  int sum = add(5, 6); // Arguments

  return 0;
}
```

- The variables that are defined when the function is declared are known as **parameters**.

  **Parameters** are local variables which are assigned values of the arguments when the function is called.

  In the above code snippet, `augend` and `addend` are the **parameters**.

- The values that are declared within a function when the function is called are known as an **argument**.

  During the time of call each **argument** is always assigned to the parameter in the function definition.

  In the above code snippet, `5` and `6` are the **arguments**.


## Lvalues & Rvalues

Lvalue and Rvalue used to refer to values on the left and right side of the assignment operator, respectively, but it is not descriptive enough for each case.

- An **lvalue** (locator value) represents an object that occupies some identifiable location in memory (i.e. has an address). 
- **rvalues** are defined by exclusion. 

Every expression is either an **lvalue** or an **rvalue**, so, an **rvalue** is an expression that does not represent an object occupying some identifiable location in memory.

In general, **rvalues** are temporary and short lived, while **lvalues** live a longer life since they exist as variables. 

It's also fun to think of **lvalues** as containers and **rvalues** as things contained in the containers.

# Common Errors in C/C++ Code

## Code Snippet 1

```cpp
1  void func() {
2    cout << n;
3  }
4  
5  int n = 0;
6  
7  int main() {
8  
9    cout << "Hello World";
10 
11   func();
12  
13   return 0;
14 }
```

At first glance, this seems like working code. 

But, as we can see in line 2, the variable `n` is being printed, without being declared yet, so we would get the error:

```
error: 'n' was not declared in this scope
```

One would think that we declared `n` before the function `func` is called, so the code should work.

But, we need to ATLEAST declare if not initialize a variable being used inside a function, before the definition of the function. 

# Tips for C++

## Alternative to `for-else` and `while-else` in C++

Like `for-else` or `while-else` in python in which `else` block was executed on 
successful completion of iteration of the loop, we can use `exit()` function in `C++` to end 
the program in case we don't want the body after the loop to be executed so, in a way we 
get that same functionality.

Here is a snippet of a prime number checker from Python:

```python
num = int(input("What is the number to check for prime? \n>>> "))

for divisor in range(2, num):
    if (num % divisor == 0):
        print("Not a prime number.")
else:
    print("It is a prime number.")
```

...and a similar functionality implemented in C++:

```cpp
int main(){
    int num;
    int divisor = 2;

    cout << "What is the number to check for prime : ";
    cin >> num;
    cout << '\n';
    for( ; divisor < num ; ++divisor){
        if (num % divisor == 0){
            cout << "Not a prime number.\n\n";
            exit(0);
        }
    }
    cout << "It is a prime number.";
    
    return 0;
}
```

>>>>>>> e2cd24e3b6ca780252022c97ba13df9932cc3b72
