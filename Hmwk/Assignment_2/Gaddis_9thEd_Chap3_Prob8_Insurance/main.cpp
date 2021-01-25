/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 13, 2021, 1:17 PM
 * Purpose: Find the replacement cost and Minimum
 *          amount of insurance for property.
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
    int repCost,//Replacement Cost
         minAmt;//Minimum Amount
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator\n";
    cout<<"How much is your house worth?\n";
    cin>>repCost;
    
    //Map inputs -> outputs
    minAmt=repCost*0.8;
    
    //Display the outputs
    cout<<"You need $"<<minAmt<<" of insurance.";

    //Exit stage right or left!
    return 0;
}