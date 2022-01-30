/*
From the fundamental datatypes, other types can be derived using the declaration operators.
*/

/*
    INDEX
1. Functions
2. Arrays
3. Pointers
4. References
5. Constants
*/
#include <iostream>
using namespace std;

/*
1. Functions

A function is a named part of a program that can be invoked from other parts of 
the program as often needed. 

The syntax for writing a function in C++ is:

returnType functionName(parameter1, parameter2, ....){
    //function body
}

Instead of declaring and initializing the parameters beforehand,
they can be initialized directly in the function parameters.

! It is important to note that the variables passed into the function as parameters 
! are not themselves passed into the function, rather their values are passed
! local variables are created holding that value and they are destroyed upon returning from the function.

? For instance, if a variable has an initial value of 1 is incremented in a function body, after returning
? from that function, the value of that variable will still remain 1.

! To summarize, if a variable passed into a function isn't returned after changing it's value, it's value
! will remain what it was before the function call.
*/


//Defining a function
float cube(int a = 1){ //We have written a = 1 which means the default value of a will be 1 if no value is passed into the function
    return a * a * a;
}


int main(){

//Using a function
    float num;
    cout << "Enter value of side : ";
    cin >> num;
    cout << cube(num) << endl;
/*
Even if we enter a float value in num, since the function cube is instructed to
take an integer as a parameter, it will only take the integer part of num,
without throwing an error
*/



/*
2. Arrays

Arrays refer to a named list of a finite number 'n' of similar data elements.
Each of the data elements can be referenced respectively by a set of consecutive
numbers, usually 0, 1, 2, 3,... n. If the name of an array of 10 elements is ARR,
then it's elements will be referenced as shown :
    ARR[0], ARR[1], ARR[2],..., ARR[9]

Array can be one dimensional, two dimensional or multidimensional. */
    
    
    int arr[3];
    //This is the procedure of declaring an array. <data type stored in array> <name>[number of elements]
    // The above array is an array of 3 integers, arr[0], arr[1], arr[2].

    float b[2][4];
    /* declares a two dimensional array of floats: 
    b[0][0], b[0][1], b[0][2], b[0][3],
    b[1][0], b[1][1], b[1][2], b[1][3] 
    
    Here, there are two float arrays, b[0] and b[1] each having 4 integers elements. */



/*
3. Pointers

A pointer is a variable that holds a memory address. This address is usually the location
of another variable.

If one variable contains the address of another variable, the first variable is said to 
'point' to the second one. 

E.g :- A variable 'A' stored in memory address 1050 can have stored in it memory address
1053, which has a variable named 'B' stored in it. This way variable 'A' points to memory
address of variable 'B'.

If a variable is going to hold a pointer, it must be declared as such. A pointer declaration
consists of a base type, an *, and the variable name. The general form of declaring a pointer
variable is 
    type *name;

The base type of the pointer defines what type of variables the pointer can point to. 
Technically, any point can point anywhere in memory. However, all pointer arithmetic is 
done relative to its base type so it is important to declare the pointer correctly.
*/

    int *integer_pointer; //Declaring a pointer
/*
4. References

A reference is an alternative name for an object. A reference variable provides an
'alias' for a previously defined variable. A reference declaration consists of a base
type, an &, a reference variable name equated to a variable name(previously defined).

Syntax for declaring a reference variable is:

dataType &reference-variable = variable-name;

The datatype has to be same as the data type of the main variable.

References themselves are not really new variables. They don't really occupy memory.
The main differences between POINTERS and REFERENCES are that pointers can be a null pointer
but references have to reference an existing variable, otherwise they would have no meaning.

There can be no references of references, no arrays of references, and no pointers of 
references.

The reference variable and the main variable name can be used interchangably. 

The value of the reference variable changes with change in the main variable
*/
    int total;
    int &sum = total;
    total = 100;
    cout << "The value of the total is : " << total << endl;
    cout << "The value of the sum is : " << sum << endl;
//Both variable names refer to the same data object in the memory, thus, print the same value


/*
5. Constants (Access Modifier)

The keyword 'const' can be added to the declaration of a variabe to make that variable 
a constant rather than a variable.
Thus, the value of the named constant cannot be changed during the program run.
Syntax for declaring a constant:
    const dataType name = <value>;

For instance, 
    const int upperage = 50;
NOTE :- The const modifier by itself is equivalent to const int.
The above statement declares a constant named as 'upperage' of type integer that holds
value 50.

'const' keyword is also seens as an access modifier. It modifies a variable's access 
type, i.e., the access of the constant variable is readable only; it can no longer
be written on to.


A constant must be initialized at the time of declaration i.e., we have to say that it 
is a constant when we are declaring it's datatype and value.

*/
    cout<<"\n\n";
    return 0;
}