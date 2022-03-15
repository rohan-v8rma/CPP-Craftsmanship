#include<iostream>
/*
            INDEX
1. Lifetime of a Variable
2. Scope of iteration variable & variables declared within loop and if-else statements.
*/

int main() {
    /*
    * 1. Lifetime of a Variable
    The time interval for which a particular variable or data value lives in the memory is called 
    ? Lifetime of the variable or data value.

    Generally a variable's life time is its parent-block-run i.e., as long as its parent block 
    (the block containing its declaration) is executing, the variable lives in the memory. 
    
    As soon as the execution of its parent block is over, the variable is destroyed from the memory.
    
    
    * 2. Scope of iteration variable & variables declared within loop and if-else statements.

    Earlier, the same variable could not be declared in another loop as the iteration variable.

    Now, the iteration variable as well as the variables declared within the loopBody or the body
    of if or else statements, cannot be accessed after their scope is over 
    OR 
    outside the body-of-if or loopBody. 

    ?    for (char ch = 'a'; ch <= 'z'; ++ch); //ch declared & initialized

    ?    cout << ch;  <--  ch is not valid here. Its scope was for previous loop, which is over.

    ?    for (char ch = 'a'; ch <= 'z'; ++ch);  //Correct. No ch variable already defined in this scope.

    
    */
    
    return 0;
}