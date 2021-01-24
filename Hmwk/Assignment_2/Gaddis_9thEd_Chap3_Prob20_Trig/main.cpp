/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 13, 2021, 2:10 PM
 * Purpose: Calculate the angle, entered in
 *          degrees and display the sine,
 *          cosine, and tangent of angle.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Set Precision
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=4*atan(1); //value of PI
const float cnvRad=PI/180;//Conversion of Radians

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short deg;//angle in degrees
    float rad;//angle in radians
    
    //Initialize or input i.e. set variable values
   
    
    //Map inputs -> outputs
    cout<<"Calculate trig functions\n";
    cout<<"Input the angle in degrees.\n";
    cin>>deg;
    
    rad=deg*cnvRad;
    
    //Display the outputs
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<deg<<") = "<<sin(rad)<<endl;
    cout<<"cos("<<deg<<") = "<<cos(rad)<<endl;
    cout<<"tan("<<deg<<") = "<<tan(rad);
    
    //Exit stage right or left!
    return 0;
}