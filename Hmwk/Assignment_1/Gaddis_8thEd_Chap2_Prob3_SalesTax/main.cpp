/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 11, 2021, 6:45 PM
 * Purpose:  Finding Total After Sales Tax
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
    int PurPrc=95;//Purchase Price
    float StTax,//State Sales Tax
          CtyTax,//County Sales Tax
          TotTax;//Total Sales Tax
    
    //Initialize Variables
           
    //Map Inputs to Outputs -> Process
    StTax=PurPrc*0.04;
    CtyTax=PurPrc*0.02;
    TotTax=StTax+CtyTax;
    
    //Display Inputs/Outputs
    cout<<"Total Sales tax = $"<<TotTax<<endl;
                    
    //Exit the Program - Cleanup
    return 0;
}