
/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 11, 2021, 8:47 PM
 * Purpose: Find the selling price of a circuit board
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
    float CBCost,//Cost of circuit board
          prcPrt,//percentage of profit
             Prt,//profit value from cost of circuit board
           slPrc;//selling price and sum of cost of circuit and profit values
    
    //Initialize Variables
   CBCost=14.95;
   prcPrt=0.35;
    
    //Map Inputs to Outputs -> Process
   Prt=CBCost*prcPrt;
   slPrc=CBCost+Prt;
    
    //Display Inputs/Outputs
   cout<<"The selling price of a circuit board is $"
       <<setprecision(4)<<slPrc<<endl;
   
    //Exit the Program - Cleanup
    return 0;
}