/* 
 * File:   Gaddis_9thEd_Chap5_Prob7_PayInPennies.cpp
 * Author: David Garcia
 * Created on January 23, 2021, 12:36 PM
 * Purpose: Calculate pay in Pennies 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned int   payAmt=1,//pay amount in a given day in pennies
                   amtMul=2,//multiplier to pay amount
                   payPen=0,//total pay in pennies
                     numDay;//number of days of pay
    
    //Initialize or input i.e. set variable values
    cin>>numDay;
    
    //Input Validation
    while (numDay<1) {
        cout<<"Invalid number input.\n";
        cout<<"Please Input positive integer number.";
        cin>>numDay;
    }
    
    for(int i=0;i<numDay;i++) {
        payPen+=payAmt;
        payAmt*=amtMul;
    }
    
    //Display the outputs
    //total pay in pennies converted to dollar amount
    cout<<"Pay = $"<<payPen/100<<".";
    if ((payPen%100)<10) {
        cout<<"0"<<payPen%100;
    } else if ((payPen%100)>=10) {
        cout<<payPen%100;
    }

    return 0;
}