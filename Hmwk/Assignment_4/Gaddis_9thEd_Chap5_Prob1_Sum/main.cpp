/* 
 * File:   Gaddis_9thEd_Chap5_Prob1_Sum.cpp
 * Author: David Garcia
 * Created on January 23, 2021, 12:36 PM
 * Purpose: Use a loop to find the sum of
 *          positive integers.
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int   num,//Number Input by user
        tot=0;//Total starting at 0
    
    //Initialize or input i.e. set variable values
    cin>>num;
    
    //Map inputs -> outputs
    for(int i=1; i<=num; i++) {
        tot+=i;
    }
    
    //Display the outputs
    cout<<"Sum = "<<tot;

    return 0;
}