/* 
 * File:   Gaddis_9thEd_Chap4_Prob14_Race.cpp
 * Author: David Garcia
 * Created on January 19, 2021, 1:30 PM
 * Purpose:  Display who came in first, second,
 *           and third place.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Set Precision
#include <string>    //String character names
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string   nam1,//First runner name
             nam2,//Second runner name
             nam3;//Third runner name
    float  runtm1,//First runner time 
           runtm2,//Second runner time
           runtm3;//Third runner time
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program\n";
    cout<<"Input 3 Runners\n";
    cout<<"Their names, then their times\n";
    cin>>nam1>>runtm1>>nam2>>runtm2>>nam3>>runtm3;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if(runtm1 <= runtm2 && runtm1 <= runtm3 && runtm2 <= runtm3){
        cout<<nam1<<"\t"<<setw(3)<<runtm1<<endl;
        cout<<nam2<<"\t"<<setw(3)<<runtm2<<endl;
        cout<<nam3<<"\t"<<setw(3)<<runtm3;
    } else if(runtm1 <= runtm3 && runtm1 <= runtm2 && runtm3 <= runtm2){
        cout<<nam1<<"\t"<<setw(3)<<runtm1<<endl;
        cout<<nam3<<"\t"<<setw(3)<<runtm3<<endl;
        cout<<nam2<<"\t"<<setw(3)<<runtm2;
    } else if(runtm2 <= runtm1 && runtm2 <= runtm3 && runtm1 <= runtm3){
        cout<<nam2<<"\t"<<setw(3)<<runtm2<<endl;
        cout<<nam1<<"\t"<<setw(3)<<runtm1<<endl;
        cout<<nam3<<"\t"<<setw(3)<<runtm3;
    } else if(runtm2 <= runtm1 && runtm2 <= runtm3 && runtm3 <= runtm1){
        cout<<nam2<<"\t"<<setw(3)<<runtm2<<endl;
        cout<<nam3<<"\t"<<setw(3)<<runtm3<<endl;
        cout<<nam1<<"\t"<<setw(3)<<runtm1;
    } else if(runtm3 <= runtm1 && runtm3 <= runtm2 && runtm1 <= runtm2){
        cout<<nam3<<"\t"<<setw(3)<<runtm3<<endl;
        cout<<nam1<<"\t"<<setw(3)<<runtm1<<endl;
        cout<<nam2<<"\t"<<setw(3)<<runtm2;
    } else{
        cout<<nam3<<"\t"<<setw(3)<<runtm3<<endl;
        cout<<nam2<<"\t"<<setw(3)<<runtm2<<endl;
        cout<<nam1<<"\t"<<setw(3)<<runtm1;
    }

    return 0;
}