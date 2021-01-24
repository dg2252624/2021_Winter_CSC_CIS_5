/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 11, 2021, 7:00 PM
 * Purpose:  Calculate Total Meal Cost
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
    float SubTot,//Meal Cost before tax and tip
             tax,//Tax of meal cost
             tip,//Tip of meal cost after adding tax
         totbill;//Total Meal cost after adding tax and tip
    
    //Initialize Variables
    SubTot=88.67;
    
    //Map Inputs to Outputs -> Process
    tax=SubTot*0.0675;
    tip=(SubTot+tax)*0.20;
    totbill=SubTot+tax+tip;
            
    //Display Inputs/Outputs
    cout<<"Total Meal Cost = $"<<setprecision(5)<<totbill<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}