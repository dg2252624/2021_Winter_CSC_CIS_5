/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 13, 2021, 10:22 AM
 * Purpose:  Writing a program that asks for five test scores
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
    float tst1,//Test 1
          tst2,//Test 2
          tst3,//Test 3
          tst4,//Test 4
          tst5,//Test 5
           avg;//average of the 5 tests
         
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average.\n";
    cin>>tst1>>tst2>>tst3>>tst4>>tst5;
    
    //Map inputs -> outputs
    avg=(tst1+tst2+tst3+tst4+tst5)/5;
    
    //Display the outputs
    cout<<"The average = "<<fixed<<setprecision(1)<<avg;

    //Exit stage right or left!
    return 0;
}