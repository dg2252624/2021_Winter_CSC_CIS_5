/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 13, 2021, 3:37 PM
 * Purpose:  Ratio, Conversion, Dieter Question
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
#include <cstdlib>   //Random Number Function
#include <ctime>     //Time Library to set random number seed
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVENGM=453.592;//Lbs to Grams

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float     massMs=35,//Mass of Mouse in Grams
              massKms=5,//Mass to kill mouse of sweetener
            mssCoke=350,//Mass of 1 can of Diet Coke
          cncnt8=0.001f,//Concentration of sweetener in a can of Diet Coke
                 wDietr;//Weight of Dieter
    int           nCans;//Number of cans of Diet Coke
    
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption.\n";
    cout<<"Input the desired dieters weight in lbs.\n";
    cin>>wDietr;
    
    //Map inputs -> outputs
    nCans=(massKms*wDietr*CNVENGM)/(massMs*mssCoke*cncnt8);
    
    //Display the outputs
    cout<<"The maximum number of soda pop cans\n";
    cout<<"which can be consumed is "<<nCans<<" cans";

    //Exit stage right or left!
    return 0;
}