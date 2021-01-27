/* 
 * File:   Collatz_Sequence.cpp
 * Author: David Garcia
 * Created on January 26, 2021, 1:04 PM
 * Purpose: Count from start of sequence to end and
 *          output length.
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n;//number inputted to calculate it Collatz Sequence length.
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test\n";
    cout<<"Input a sequence start\n";
    cin>>n;
    
    //Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in ";
    
    //Calculated by function declaration for collatz
    //Sequence length of a number.
    cout<<collatz(n)<<" steps";
    
    //Exit
    return 0;
}
//Function Definition for the Collatz Sequence length of a number.
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