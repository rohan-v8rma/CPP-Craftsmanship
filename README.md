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

