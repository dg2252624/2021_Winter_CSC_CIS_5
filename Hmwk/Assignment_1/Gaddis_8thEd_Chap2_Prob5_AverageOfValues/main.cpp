/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 11, 2021, 7:17 PM
 * Purpose:  Finding the average of values
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Set Precision
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float a,//a represents the number 28.
          b,//b represents the number 32.
          c,//c represents the number 37.
          d,//d represents the number 24.
          e,//e represents the number 33.
        sum,//sum of the letter variables.
        avg;//average of the sum.
    
    //Initialize Variables
    a=28;
    b=32;
    c=37;
    d=24;
    e=33;
            
    //Map Inputs to Outputs -> Process
    sum=a+b+c+d+e;
    avg=sum/5;
    
    //Display Inputs/Outputs
    cout<<"sum = "<<sum<<endl;
    cout<<"average = "<<setprecision(3)<<avg<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}