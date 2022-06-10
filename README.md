<!-- TOC -->

- [Header files and Namespaces](#header-files-and-namespaces)
    - [Accessing methods using **header files** and **namespaces**](#accessing-methods-using-header-files-and-namespaces)
    - [Need of both **Header files** and **namespaces**](#need-of-both-header-files-and-namespaces)
        - [What are Header Files?](#what-are-header-files)
        - [What is a Namespace?](#what-is-a-namespace)
    - [How does the most basic combination of `<iostream>` header file and `std` namespace work?](#how-does-the-most-basic-combination-of-iostream-header-file-and-std-namespace-work)
- [Templates in C++](#templates-in-c)
    - [Declaring one or more Template Parameters using PlaceHolder Types](#declaring-one-or-more-template-parameters-using-placeholder-types)
    - [Templates with Default Parameters](#templates-with-default-parameters)
    - [Function Templates](#function-templates)
    - [Class Templates](#class-templates)
    - [Difference between `typename` and `class` keyword](#difference-between-typename-and-class-keyword)
- [Standard Template Library in C++](#standard-template-library-in-c)
    - [Advantages of STL](#advantages-of-stl)
- [Overloading the Stream Insertion `<<` and Stream Extraction `>>` operator](#overloading-the-stream-insertion--and-stream-extraction--operator)
- [Important Concepts](#important-concepts)
    - [Name lookup vs. Overload Resolution](#name-lookup-vs-overload-resolution)
    - [Type Promotion and Type Narrowing](#type-promotion-and-type-narrowing)
    - [Poor Performance due to `std::endl`](#poor-performance-due-to-stdendl)
    - [Zero Initializing vs. Default Initializing vs. Value Initializing](#zero-initializing-vs-default-initializing-vs-value-initializing)
    - [Function Scope Determination](#function-scope-determination)
    - [Return by Reference in C++](#return-by-reference-in-c)
    - [Data types in Switch Case statement](#data-types-in-switch-case-statement)
    - [Amount of Memory occupied by a Derived Class Object](#amount-of-memory-occupied-by-a-derived-class-object)
    - [Empty Function/Constructor Definition](#empty-functionconstructor-definition)
    - [How does a C++ program end ( return value of `int main()` )](#how-does-a-c-program-end--return-value-of-int-main)
        - [Can we use `void main()` in C? Should we use it?](#can-we-use-void-main-in-c-should-we-use-it)
    
- [Tips for C++](#tips-for-c)
    - [Alternative to `for-else` and `while-else` in C++](#alternative-to-for-else-and-while-else-in-c)
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

Note that the operation returns an object of the class `ostream`, which was passed by reference to the operator function originally.

Since we do not have the ability to add anything to the `ostream` class (which someone else already invented) in order to overload it for use with the user-defined class.

So, we will have to make it a friend of our user-defined class and pass the `ostream` object into the friend function (as opposed to a member function being able to directly access the **data members** of the `ostream` class).


Refer [08Op-d-stream-operator-overloading.cpp](./Operators/08Op-d-stream-operator-overloading.cpp) for an example implementation of this.

## TODO (under stream operator overloading)

Understand what happens after we return the ostream object which was passed by reference.

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

- [08Op-d-stream-opouterator-overloading.cpp](./Operators/08Op-d-stream-operator-overloading.cpp) for understanding why we return `cin` and `cout` by reference when we overload the stream insertion (`<<`) and stream deletion (`>>`)
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

