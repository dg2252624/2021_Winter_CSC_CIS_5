/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 13, 2021, 5:30 PM
 * Purpose:  Read in ten whole numbers and that outputs the
 *           sum of all the numbers greater than zero, the
 *           sum of all the numbers less than zero (which will
 *           be a negative number or zero), and the sum of all
 *           the numbers, whether positive, negative, or zero.
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
    float    num=0,//ten numbers inputted in program
          negSum=0,//Negative Sum
          posSum=0,//Positive Sum
          totSum=0;//Total Sum
    
    //Initialize or input i.e. set variable values
    cout<<"Input 10 numbers, any order, positive or negative\n";
    for (int i=0;i<10;i++){
    cin>>num;
  
    if (num>0){
    posSum+=(num);
    }
    else if (num<0){
    negSum+=(num);
    }
    }
    
    //Map inputs -> outputs
    totSum=posSum+negSum;
    
    //Display the outputs
    cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<totSum;

    //Exit stage right or left!
    return 0;
}