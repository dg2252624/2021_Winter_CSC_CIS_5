/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 13, 2021, 5:10 PM
 * Purpose:  Determine whether a meeting room is in violation
 *           of fire law regulations regarding the maximum
 *           room capacity.
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
    int maxNum,//maximum room capacity
           num,//number of people attending
          diff;//difference between max room capacity and number of people attending
    
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people\n";
    cin>>maxNum>>num;
    
    
    
    //Map inputs -> outputs
    if (num>maxNum){
        diff=num-maxNum;
        cout<<"Meeting cannot be held.\n";
        cout<<"Reduce number of people by "<<diff<<" to avoid fire violation.";
    }
    else if (num<maxNum){
        diff=maxNum-num;
        cout<<"Meeting can be held.\n";
        cout<<"Increase number of people by "<<diff
            <<" will be allowed without violation.";
    }
    
    //Display the outputs
    

    //Exit stage right or left!
    return 0;
}