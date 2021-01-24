/* 
 * File:   Gaddis_9thEd_Chap4_Prob8_SortNames.cpp
 * Author: David Garcia
 * Created on January 19, 2021, 12:36 PM
 * Purpose:  Sort names in alphabetical order
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //string character names
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1,//first name inputted
           name2,//second name inputted
           name3;//third name inputted
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names\n";
    cout<<"Input 3 names\n";
    cin>>name1>>name2>>name3;
    
    //Display the outputs
    if (name1>name2 && name2>name3){
        cout<<name3<<endl;
        cout<<name2<<endl;
        cout<<name1;
    }else if (name1>name3 && name3>name2){
        cout<<name2<<endl;
        cout<<name3<<endl;
        cout<<name1;
    }else if (name2>name1 && name1>name3){
        cout<<name3<<endl;
        cout<<name1<<endl;
        cout<<name2;
    }else if (name2>name3 && name3>name1){
        cout<<name1<<endl;
        cout<<name3<<endl;
        cout<<name2;
    }else if (name3>name1 && name1>name2){
        cout<<name2<<endl;
        cout<<name1<<endl;
        cout<<name3;
    }else if (name3>name2 && name2>name1){
        cout<<name1<<endl;
        cout<<name2<<endl;
        cout<<name3;
    }

    return 0;
}