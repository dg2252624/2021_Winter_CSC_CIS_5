/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 11, 2021, 7:30 PM
 * Purpose:  Finding the Annual Pay
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
               int payAmt,//amount of pay employee earns each period.
                   payPrd,//number of pay periods in a year.
                   annPay;//Employee's total annual pay
    
    //Initialize Variables
    payAmt=2200.0;
    payPrd=26;
            
    //Map Inputs to Outputs -> Process
    annPay=payAmt*payPrd;
            
    //Display Inputs/Outputs
    cout<<"The annual pay of the employee is $"<<annPay<<endl;
            
    //Exit the Program - Cleanup
    return 0;
}