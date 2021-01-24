/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 13, 2021, 4:16 PM
 * Purpose:  Find the retroactive pay due to
 *           employee, new annual salary, and 
 *           new nomthly salary.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Set Precision
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int      mon;//number of months annually
    float payinc,//pay increase
            anSl,//previous annual salary
          nwAnSl,//new annual salary
          retPay,//retroactive pay
          nwMnSl;//new monthly salary
    
    //Initialize or input i.e. set variable values
    mon=12;
    payinc=0.076;
    cout<<"Input previous annual salary.\n";
    cin>>anSl;
    
    //Map inputs -> outputs
    nwAnSl=anSl+anSl*payinc;
    retPay=(nwAnSl-anSl)/2;
    nwMnSl=nwAnSl/mon;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Retroactive pay    = $"<<setw(7)<<retPay<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<nwAnSl<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<nwMnSl;

    //Exit stage right or left!
    return 0;
}