/* 
 * File:   isPrime.cpp
 * Author: David Garcia
 * Created on January 26, 2021, 1:15 PM
 * Purpose: To determine if the input integer
 *          is prime or not
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int   num,//number inputted to check if its prime 
        state;//statement to determine if number is prime
    
    //Initialize Variables
    cout<<"Input a number to test if Prime.\n";
    cin>>num;
    
    //Function declaration to determine if number is prime
    state=isPrime(num);
    
    //Display output
    if (state==true){
        cout<<num<<" is prime.";
    }
    else cout<<num<<" is not prime.";  

    return 0;
}
//Function definition to determine if number is prime
bool isPrime(int num) {
 bool state=true;
 for(int i=2; i<=num/2;i++){
     if(num%i==0) {
         state=false;
         break;
     }
 }
 return state;
}