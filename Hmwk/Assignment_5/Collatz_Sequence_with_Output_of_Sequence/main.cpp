/* 
 * File:   Collatz_Sequence_with_Output_of_Sequence.cpp
 * Author: David Garcia
 * Created on January 26, 2021, 1:45 PM
 * Purpose: Count and out from start of sequence 
 *          to end and output length.
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int seqCollatz(int);//used to output numbers in sequence.

int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;//number inputted to calculate Collatz Sequence length.
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test\n";
    cout<<"Input a sequence start\n";
    cin>>n;
    
    //function declaration to output numbers in sequence.
    cout<<seqCollatz(n)<<endl;
    
    //Calculated by function declaration for collatz
    //Sequence to output length of a number.    
    cout<<"Sequence start of "<<n<<" cycles to 1 in ";
    cout<<collatz(n)<<" steps";
    
    //Output data
    
    //Exit stage right!
    return 0;
}
//function definition to output numbers in sequence.
int seqCollatz(int n) {
    int i=1;
    while (n!=1) {
        cout<<n<<", ";
        if (n&1) {
        n=(n*3)+1;
        }
        else n=n/2;
    }
}
//function definition to output the length of the collatz
//Sequence of a number.
int collatz(int n) {
    int i=1;
    while (n>1){
        if (n%2==0) {
            n=n/2;
        }
        else {
            n=(n*3)+1;
        }
        i++;
    }
    return i;
}