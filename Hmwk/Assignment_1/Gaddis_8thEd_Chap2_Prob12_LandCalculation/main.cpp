/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 11, 2021, 8:30 PM
 * Purpose: Converting square feet of land to acres.
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
    float totSqFt,//total amount of land measured in square feet
           sqFtAc,//amount of square feet in one acre of land
            totAc;//total amount of land converted to acres
    
    //Initialize Variables
    totSqFt=391876;
    sqFtAc=43560;
    
    //Map Inputs to Outputs -> Process
    totAc=totSqFt/sqFtAc;
    
    //Display Inputs/Outputs
    cout<<totSqFt<<" square feet of land equates to "
        <<totAc<<" acres."<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}