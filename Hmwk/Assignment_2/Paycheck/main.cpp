/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 13, 2021, 2:50 PM
 * Purpose:  Calculate gross pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Set Precision
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    short  dolHr,//pay rate in dollars per hours
             hr,//number of hours worked
            pay;//gross pay
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck.\n";
    cout<<"Input the pay rate in $'s/hr and the number of hours.\n";
    cin>>dolHr>>hr;
    
    
    //Map inputs -> outputs
    if (hr>40)
        pay=dolHr*40+2*dolHr*(hr-40);
    else
        pay=dolHr*hr;
    
    //Display the outputs
    cout<<"Paycheck = $"<<fixed<<setprecision(2)<<setw(7)<<pay;

    //Exit stage right or left!
    return 0;
}