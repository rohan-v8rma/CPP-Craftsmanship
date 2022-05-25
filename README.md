<!-- TOC -->

- [Header files and Namespaces](#header-files-and-namespaces)
    - [Accessing methods using **header files** and **namespaces**](#accessing-methods-using-header-files-and-namespaces)
    - [Need of both **Header files** and **namespaces**](#need-of-both-header-files-and-namespaces)
        - [What are Header Files?](#what-are-header-files)
        - [What is a Namespace?](#what-is-a-namespace)
    - [How does the most basic combination of `<iostream>` header file and `std` namespace work?](#how-does-the-most-basic-combination-of-iostream-header-file-and-std-namespace-work)
- [Important Concepts](#important-concepts)
    - [Name lookup vs. Overload Resolution](#name-lookup-vs-overload-resolution)
    - [Type Promotion and Type Narrowing](#type-promotion-and-type-narrowing)
    - [Poor Performance due to `std::endl`](#poor-performance-due-to-stdendl)
    - [Zero Initializing vs. Default Initializing vs. Value Initializing](#zero-initializing-vs-default-initializing-vs-value-initializing)
    - [Function Scope Determination](#function-scope-determination)

<!-- /TOC -->

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

See [12oop-c-multiple-inheritance-overloading.cpp](./ObjectOrientedProgramming/12oop-c-multiple-inheritance-overloading.cpp) for an example implementation of this.

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