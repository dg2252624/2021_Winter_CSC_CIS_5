/* 
 * File:   Gaddis_9thEd_Chap4_Prob23_ISP.cpp
 * Author: David Garcia
 * Created on January 19, 2021, 1:50 PM
 * Purpose:  Calculate a customer's monthly bill
 *           based on package purchased and hours
 *           used.
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
    float mnthCh;//monthly charge
    int  hrsused;//number of hours used
    char     pac,//package type customer purchased
           hrlmt,//hours of access provided
            exhr;//additional cost per hour
    
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill\n";
    cout<<"Input Package and Hours\n";
    cin>>pac>>hrsused;
    
    //Map inputs -> outputs
    switch(pac){
        case 'A':
        {
            mnthCh=9.95f;
            hrlmt=10;
            exhr=2;
            break;
        }
        case 'B':
        {
            mnthCh=14.95f;
            hrlmt=20;
            exhr=1;
            break;
        }
        case 'C':
        {
            mnthCh=19.95f;
            hrlmt=0;
            exhr=0;
            break;
        }
    }
    if(hrsused>hrlmt){
        mnthCh+=(hrsused-hrlmt)*exhr;
    }
    //Display the outputs
    cout<<setprecision(2)<<fixed;
    cout<<"Bill = $ "<<setw(5)<<mnthCh;

    //Exit stage right or left!
    return 0;
}