/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 11, 2021, 8:17 PM
 * Purpose: Finding the distance a car can travel on one fuel tank
            in different terrains
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int   gastank;//amount of gas in full tank, measured in gallons.
    float  avgHwy,//Average milage per gallon driven on highway.
           avgTwn,//Average milage per gallon driven in town.
          distHwy,//total distance traveled on highway, measured in miles
          distTwn;//total distance traveled in town, measured in miles
    
    //Initialize Variables
    gastank=20;
    avgHwy=28.9;
    avgTwn=23.5;
    
    //Map Inputs to Outputs -> Process
    distHwy=gastank*avgHwy;
    distTwn=gastank*avgTwn;
    
    //Display Inputs/Outputs
    cout<<"Distance travelled on the highway is "
        <<distHwy<<" miles."<<endl;
    cout<<"Distance traveled in town is "
        <<distTwn<<" miles."<<endl;
            
    //Exit the Program - Cleanup
    return 0;
}