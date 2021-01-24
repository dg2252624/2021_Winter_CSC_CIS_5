/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 11, 2021, 6:23 PM
 * Purpose:  Predicting Sales
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
    float totSls,//Total Company Sales, measured in millions
           ECDiv;//East Coast Division Sales, measured in millions
    
    //Initialize Variables
    totSls=8.6;
    
    //Map Inputs to Outputs -> Process
    ECDiv=totSls*0.58;
            
    //Display Inputs/Outputs
    cout<<"East Coast Division Sales = $"<<ECDiv<<" million."<<endl;
            
    //Exit the Program - Cleanup
    return 0;
}