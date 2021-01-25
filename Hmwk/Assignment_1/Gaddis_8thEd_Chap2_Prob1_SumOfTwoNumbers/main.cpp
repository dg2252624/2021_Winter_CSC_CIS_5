/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 14, 2021, 11:00 AM
 * Purpose:  Finding the sum of two numbers
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int a,//a represents the number 50.
        b,//b represents the number 100.
    total;//The sum of variables a and b.
    
    //Initialize Variables
    a=50;
    b=100;
    
    //Map Inputs to Outputs -> Process
    total=a+b;
    
    //Display Inputs/Outputs
    cout<<"total = "<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}