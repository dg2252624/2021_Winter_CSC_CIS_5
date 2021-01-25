/* 
 * File:   main.cpp
 * Author: David Garcia
 * Created on January 13, 2021, 12:36 PM
 * Purpose:  Find amount of cookies eaten and 
 *           total calories consumed.
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
    int calServ,//calories per serving
           serv,//servings in bag
        totCook,//total cookies in bag 
        calCook,//calories per cookie
           cook,//cookies eaten
         totCal;//total calories consumed
    
    //Initialize or input i.e. set variable values
    calServ=300;
    serv=10;
    totCook=40;
    cout<<"Calorie Counter\n";
    cout<<"How many cookies did you eat?\n";
    cin>>cook;
    
    //Map inputs -> outputs
    calCook=(calServ*serv)/totCook;
    totCal=calCook*cook;
    
    //Display the outputs
    cout<<"You consumed "<<totCal<<" calories.";
    
    //Exit stage right or left!
    return 0;
}