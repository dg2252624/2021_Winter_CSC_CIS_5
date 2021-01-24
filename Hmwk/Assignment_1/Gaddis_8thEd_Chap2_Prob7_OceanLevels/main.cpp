/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 11, 2021, 7:44 PM
 * Purpose: Finding the ocean's raised level in specified times
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
    float mmYr,//ocean's level rising rate per year, measured in millimeters.
        fiveYr,//ocean's level raised after 5 years, measured in millimeters.
         svnYr,//ocean's level raised after 7 years, measured in millimeters.
         tenYr;//ocean's level raised after 10 years, measured in millimeters.
    
    //Initialize Variables
    mmYr=1.5;
    
    //Map Inputs to Outputs -> Process
    fiveYr=mmYr*5;
    svnYr=mmYr*7;
    tenYr=mmYr*10;
    
    //Display Inputs/Outputs
    cout<<"ocean's level raised after 5 years = "
        <<fiveYr<<" millimeters"<<endl;
    cout<<"ocean's level raised after 7 years = "
        <<svnYr<<" millimeters"<<endl;
    cout<<"ocean's level raised after 10 years = "
        <<tenYr<<" millimeters"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}