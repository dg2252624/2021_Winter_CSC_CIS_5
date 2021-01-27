/* 
 * File:   Twelve_hour_notation.cpp
 * Author: David Garcia
 * Created on January 26, 2021, 2:10 PM
 * Purpose: Create a program that uses 12-hour
            notation.
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
    int      curHr,//Current hour of time
            curMin,//Current minute of time
           waitMin,//TIme waited in minutes
             addHr;//hours added based on total minutes
    char      AmPm,//states if time is before or after noon.
            choice;//Input (y) to continue
    string    half;//string label to put AM or PM depending on time
    
    //Initialize or input i.e. set variable values
    do {
    cout<<"Enter hour:\n";
    cin>>curHr;
    cout<<endl;
    cout<<"Enter minutes:\n";
    cin>>curMin;
    cout<<endl;
    cout<<"Enter A for AM, P for PM:\n";
    cin>>AmPm;
    cout<<endl;
    cout<<"Enter waiting time:\n";
    cin>>waitMin;
    cout<<endl;
    addHr=0;
    
    //Set characters equal to string
    if(AmPm=='A')
        half=" AM";
    else if (AmPm=='P')
        half=" PM";
    
    //Output Current time
    cout<<"Current time = ";
    if (curHr<10 && curMin>=10)
        cout<<"0"<<curHr<<":"<<curMin<<half<<endl;
    else if (curHr>=10 && curMin<10)
        cout<<curHr<<":0"<<curMin<<half<<endl;
    else if (curHr<10 && curMin<10)
        cout<<"0"<<curHr<<":0"<<curMin<<half<<endl;
    else
        cout<<curHr<<":"<<curMin<<half<<endl;
    
    //calculate time after waiting period
    //calculate new minute value
    curMin+=waitMin;
    while (curMin>59){
        curMin-=60;
        addHr++;
    }
    //Calculate new hour value and string output
    curHr+=addHr;
    if (curHr>12 && AmPm=='A') {
        if (addHr>11)
            AmPm='A';
        else
            AmPm='P';
        curHr-=12;
    }
    if (curHr==12 && AmPm=='A')
        AmPm='P';
    else if (curHr==12 && AmPm=='P')
        curHr='A';
    else if (curHr>12 && AmPm=='P') {
        if (addHr>11)
            AmPm='P';
        else AmPm='A';
        curHr-=12;
    }
    if (AmPm=='A')
        half=" AM";
    else if (AmPm=='P')
        half=" PM";
    
    //Output Time after waiting period    
    cout<<"Time after waiting period = ";
    if (curHr<10 && curMin>=10)
        cout<<"0"<<curHr<<":"<<curMin<<half<<endl;
    else if (curHr>=10 && curMin<10)
        cout<<curHr<<":0"<<curMin<<half<<endl;
    else if (curHr<10 && curMin<10)
        cout<<"0"<<curHr<<":0"<<curMin<<half<<endl;
    else
        cout<<curHr<<":"<<curMin<<half<<endl;
    cout<<endl;
    
    //Input y to input another time, otherwise, end program
    cout<<"Again:\n";
    cin>>choice;
    if (choice=='y' || choice=='Y')
        cout<<endl;
    }while (choice=='y' || choice=='Y');
    
    //Exit
    return 0;
}