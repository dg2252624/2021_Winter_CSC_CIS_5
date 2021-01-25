/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 4, 2021, 10:50 AM
 * Purpose: Finding military budget as percentage of Federal Budget 2018
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
    float milBdgt, //USA Military Budget 2018
          fedBdgt, //USA Federal Budget 2018
          mlPrcnt; //USA Military Budget as a percentage of Federal Budget 2018
    
    //Initialize Variables
    milBdgt=7.0e11f; //Military Budget = 700 Billion
    fedBdgt=4.1e12f; //Federal Budget = 4.1 Trillion
    
    //Map Inputs to Outputs -> Process
    mlPrcnt=milBdgt/fedBdgt*100;
    
    //Display Inputs/Outputs
    cout<<" USA Military Budget was "<<setprecision(2)<<mlPrcnt
        <<" percent of Federal budget in 2018"<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}