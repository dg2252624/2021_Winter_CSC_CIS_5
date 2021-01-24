/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 11, 2021, 8:00 PM
 * Purpose: Finding the milage rate of a car
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
    int milDriv,//amount of miles a car driven with full gasoline
         amtGas,//amount of full car gasoline, measured in gallons
            MPG;//rate car travels per gallon
    
    //Initialize Variables
    milDriv=375;
    amtGas=15;
    
    //Map Inputs to Outputs -> Process
    MPG=milDriv/amtGas;
    
    //Display Inputs/Outputs
    cout<<"The car travels at a rate of "<<MPG
        <<" miles per gallon."<<endl;
            
    //Exit the Program - Cleanup
    return 0;
}