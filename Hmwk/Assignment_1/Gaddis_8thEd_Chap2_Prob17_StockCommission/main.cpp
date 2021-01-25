/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 11, 2021, 9:40 PM
 * Purpose:  Finding the total price of stock with commission
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
    int       stk;//number of stocks bought.
    float  stkPrc,//price paid per stock
           stkTot,//total price of stocks before commission
          comRate,//commission paid per stock
              com,//total commission paid
              tot;//total amount paid for the stock with commission
    
    //Initialize Variables
    stk=750;
    stkPrc=35.00;
    comRate=0.02;
    
    //Map Inputs to Outputs -> Process
    stkTot=stk*stkPrc;
    com=stkTot*comRate;
    tot=stkTot+com;
    
    //Display Inputs/Outputs
    cout<<"Amount paid for stock before commission = $"<<stkTot<<endl;
    cout<<"Commission fee paid for transaction = $"<<com<<endl;
    cout<<"Total cost of shares including commission fee = $"<<tot<<endl;
            
    //Exit the Program - Cleanup
    return 0;
}