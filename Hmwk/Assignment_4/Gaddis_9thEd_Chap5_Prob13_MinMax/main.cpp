/* 
 * File:   Gaddis_9thEd_Chap5_Prob13_MinMax.cpp
 * Author: David Garcia
 * Created on January 23, 2021, 12:36 PM
 * Purpose: Input a series of integers in a loop
 *          and display largest and smallest
 *          number entered.
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
    int    num,//number inputted to be included in series
        minInt,//smallest number inputted in series
        maxInt;//largest number inputted in series
    
    //Initialize or input i.e. set variable values
    cin>>num;
    minInt=maxInt=num;
    
    //repeat input until stop input is entered
    //entering -99 signals end of series
    while (num!=-99) {
        if (num<minInt)
        minInt=num;
        
        if (num>maxInt)
        maxInt=num;
        
        cin>>num;
    }
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<minInt<<endl;
    cout<<"Largest  number in the series is "<<maxInt;

    //Exit stage right or left!
    return 0;
}