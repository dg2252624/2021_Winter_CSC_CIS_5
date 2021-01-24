/* 
 * File:   Gaddis_9thEd_Chap5_Prob23_Pattern.cpp
 * Author: David Garcia
 * Created on January 23, 2021, 12:36 PM
 * Purpose: Display pattern given an input of 10.
 *          Outputs increase from 1 to 10 and 
 *          decreases from 10 to 1.
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
    int rows;//amount of "+" per row and number of 
             //rows based on number input
    
    //Initialize or input i.e. set variable values
    cin>>rows;
    
    //Map inputs -> outputs
    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout<<"+";
        }
        cout<<"\n\n";
    }
    for (int i = rows; i >= 2; --i) {
        for (int j = 1; j <= i; ++j) {
            cout<<"+";
        }
        cout<<"\n\n";
    }
    cout<<"+";
    //Display the outputs

    //Exit stage right or left!
    return 0;
}