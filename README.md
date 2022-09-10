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
- [Common Errors in C Code](#common-errors-in-c-code)
  - [Code Snippet 1](#code-snippet-1)
- [TODO](#todo)
  - [Array of Pointers](#array-of-pointers)

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

# Common Errors in C Code

## Code Snippet 1

```c
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


# TODO

## Array of Pointers