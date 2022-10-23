#include <iostream>
using namespace std;
/*
    INDEX
1. Goto Statement
2. Label should not directly precede closing right brace.
3. Goto statement cannot jump over a variable definition.
*/

int main(){
/*
* Goto Statement

The goto(used in QBASIC) statement is rarely used in programming today yet we are 
discussing goto statement as it is provided by C++ and without discussing it we 
cannot say the jump statements have been covered.

* A 'goto' statement can transfer the program control anywhere within a function in the program. 
* The target destination of a 'goto' statement is marked by a 'label'.

! NOTE that it can't transfer control out of a function where the control is.

The target 'label' and 'goto' must appear in the same function.

* The 'label' is a user supplied identifier and can appear either before or after 
* goto.

? The syntax of goto statement is:
*/
  int a = 0;
  start:
    cout << '\n' << ++a;
  if (a < 5){
    goto start;
  } 
/*
The above code fragment prints numbers 1 to 5. The cout prints the value of ++a 
and then checks if a is less than 5, the control is transferred to the label 'start :',
otherwise the control is transferred to the statement following if.
*/
/*
* A label may not immediately precede a closing right brace. For instance, the following
* code fragment is wrong : 

? {
?    ..
?    goto last;
?    ..
!    last :  // <-- this label is just before a closing brace. 
? }

This can be fixed by writing a null statement after the label. For example,

? {
?   ..
?   goto last;
?   ..
*   last : ; <-- null statement
? }
*/  


/*
* Goto statement cannot jump over a variable definition

For example, the following code fragment is wrong:

? int main(){
!     goto last;  //wrong! jumping over a variable definition.
?     char ch = 'a';
?     ..
?     last : 
?     ..  
? }

* The reverse of the above, i.e., a backward jump over an initialized variable is allowed in C++.


The forward jumping over a variable definition is possible only if the 
variable definition is occurring in a block and the entire block is jumped over, such as:

? int main(){
*     goto last;  // Now correct.
?     ..
?     {      
?     char ch = 'a';
?     ..
?     }
?     last : 
?     ..  
? }
*/

  cout << "\n\n";
  return 0;
}