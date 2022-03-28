# Memory Allocation in C

Memory assigned to a program in a typical architecture can be broken down into four segments:
A typical memory representation of a C program consists of the following sections.
1. Text segment  (i.e. instructions)
2. Initialized data segment 
3. Uninitialized data segment  (bss)
4. Heap 
5. Stack
 
A typical memory layout of a running process

## 1. Text Segment 

A text segment, also known as a code segment or simply as text, is one of the sections of a program in an object file or in memory, which contains executable instructions.
As a memory region, a text segment may be placed below the heap or stack in order to prevent heaps and stack overflows from overwriting it. 
 

Usually, the text segment is sharable so that only a single copy needs to be in memory for frequently executed programs, such as text editors, the C compiler, the shells, and so on. Also, the text segment is often read-only, to prevent a program from accidentally modifying its instructions.

## 2. Initialized Data Segment 

Initialized data segment, usually called simply the Data Segment. A data segment is a portion of the virtual address space of a program, which contains the global variables and static variables that are initialized by the programmer.
Note that, the data segment is not read-only, since the values of the variables can be altered at run time.
This segment can be further classified into the initialized read-only area and the initialized read-write area.

For instance, the global string defined by 
`char s[] = “hello world”` in C and a C statement like `int debug=1` outside the main (i.e. global) would be stored in the initialized read-write area. 

And a global C statement like `const char* string = “hello world”` makes the string literal `“hello world”` to be stored in the initialized read-only area and the character pointer variable string in the initialized read-write area.

Ex: `static int i = 10` will be stored in the data segment and `global int i = 10` will also be stored in data segment

## 3. Uninitialized Data Segment

Uninitialized data segment often called the “bss” segment, named after an ancient assembler operator that stood for “block started by symbol.” 

Data in this segment is initialized by the kernel to arithmetic 0 before the program starts executing
uninitialized data starts at the end of the data segment and contains all global variables and static variables that are initialized to zero or do not have explicit initialization in source code.
For instance, a variable declared static int i; would be contained in the BSS segment. 
For instance, a global variable declared int j; would be contained in the BSS segment.

## 4. Stack

The stack area traditionally adjoined the heap area and grew in the opposite direction; when the stack pointer met the heap pointer, free memory was exhausted. (With modern large address spaces and virtual memory techniques they may be placed almost anywhere, but they still typically grow in opposite directions.)
The stack area contains the program stack, a LIFO structure, typically located in the higher parts of memory. On the standard PC x86 computer architecture, it grows toward address zero; on some other architectures, it grows in the opposite direction. A “stack pointer” register tracks the top of the stack; it is adjusted each time a value is “pushed” onto the stack. 

The set of values pushed for one function call is termed a “stack frame”; A stack frame consists at minimum of a return address.

Stack, where automatic variables are stored, along with information that is saved each time a function is called. Each time a function is called, the address of where to return to and certain information about the caller’s environment, such as some of the machine registers, are saved on the stack. The newly called function then allocates room on the stack for its automatic and temporary variables. This is how recursive functions in C can work. Each time a recursive function calls itself, a new stack frame is used, so one set of variables doesn’t interfere with the variables from another instance of the function.

### What is Stack Overflow Error?

The compiler allocates some space for the stack part of the memory. When this space gets exhausted due to some faulty code, the situation is called **stack overflow**.
Typical example includes recursion with wrong/no base condition.

## 5. Heap

Heap is the segment where dynamic memory allocation usually takes place.

The heap area begins at the end of the BSS segment and grows to larger addresses from there. 

The Heap area is managed by `malloc`, `realloc`, and `free`, which may use the brk and sbrk system calls to adjust its size (note that the use of brk/sbrk and a single “heap area” is not required to fulfill the contract of malloc/realloc/free; they may also be implemented using mmap to reserve potentially non-contiguous regions of virtual memory into the process’ virtual address space). 

The Heap area is shared by all shared libraries and dynamically loaded modules in a process.

### Usage of Heap

We can create a pointer in our `main` function and point to a memory block in the HEAP. 
The address is stored by the local variable in the `main` function. 

We should note that the memory consumed will not get freed automatically in case we overwrite the pointer. If suppose we overwrite the pointer to an array with a character, the remaining memory which was occupied by the array will become GARBAGE and it will be counted in the usage of the program