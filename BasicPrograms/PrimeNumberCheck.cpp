#include <iostream>
#include <cmath>
using namespace std;

int main(){
    /*
Since N is composite, so it has a factor 'F' with 1 < F < N. 
Then by the definition of a factor of positive integers, we have 
*    N = F * E  <--- (1)
where 'E' is a positive integer (E > 1)

We need to show that F ≤ √N or E ≤ √N 

If F > √N or E > √N then F * E > √N * √N 
*   F * E > N 
! which is a contradiction to (1) 

? Consequently, (F ≤ √N) or (E ≤ √N)

Since both E and F are divisors of N, we see that 
N has a positive divisor not exceeding '√N'. 

? This divisor is either prime or, by the fundamental theorem of arithmetic, 
? has a prime divisor less than itself. 

In either case, N has a prime divisor ≤ √N. This completes the proof. 
*/
    int no = 29;
    for(int iterVar = 2; iterVar < (round(pow(no, 0.5)) + 1); iterVar ++) {
        if (no % iterVar == 0) {
            cout << iterVar;
            cout << "The number " << no << ", is a composite number." << endl; 
            return 0; //this prevents the remaining body of the function to be executed
        }
    }
    cout << "The number " << no << ", is a prime number." << endl;     

}
