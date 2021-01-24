/* 
 * File:   Gaddis_9thEd_Chap5_Prob22_Rectangle.cpp
 * Author: David Garcia
 * Created on January 23, 2021, 12:36 PM
 * Purpose: asks for a positive integer no greater than
 *          15, displaying a rectangle on the screen.
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
    int     num;//number of characters inputted
    char choice;//choice of character inputted
    
    //Initialize or input i.e. set variable values
    cin>>num>>choice;
    
    //Map inputs -> outputs
    
    //Display the outputs
    for(int i = 1; i < num; i++) {
        for(int j = 1; j < num; j++) {
            cout<<choice;
        }
        cout<<choice<<endl;
    }
    for (int k = 0; k < num; k++) {
        cout<<choice;
    }

    //Exit stage right or left!
    return 0;
}