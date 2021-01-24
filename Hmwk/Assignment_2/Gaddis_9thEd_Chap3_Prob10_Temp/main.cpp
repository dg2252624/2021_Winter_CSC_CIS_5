/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 13, 2021, 1:45 PM
 * Purpose: To convert Fahrenheit temperatures
 *          to Celsius temperatures
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
    float fahr,//degrees in Fahrenheit
           cel;//degrees in Celsius
    
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter\n";
    cout<<"Input Degrees Fahrenheit\n";
    cin>>fahr;
    
    //Map inputs -> outputs
    cel=(fahr-32)*5/9;
    
    //Display the outputs
    cout<<fixed<<setprecision(1)<<fahr<<" Degrees Fahrenheit = "
    <<cel<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}