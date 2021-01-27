/* 
 * File:   Savitch_9thEd_Chap5_Prob1_TimeConverter.cpp
 * Author: David Garcia
 * Created on January 26, 2021, 2:31 PM
 * Purpose: Create a program that converts from 24-hour
 *          notation to 12-hour notation.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...


//Function Prototypes
int tmInp(int &, char, int &, bool &); //function to determine if numbers
                                       //inputted is valid

int tmCon(int &, int &, char &);       //function for time conversion

int tmOut(int &, int &, int &, char &);//function for output of time in
                                       //12 hour notation
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int      hr,//number inputted for hour military time
           hr12,//number displayed in a 12 hour conversion
            min;//number inputted for min military time
    char  c=':',//colon inserted to present time properly
           AmPm,//states if time is before or after noon
         choice;//Input (y) to convert another time
    bool  valTm;//states if time inputted is valid or not
    
    //Initialize or input i.e. set variable values
    cout<<"Military Time Converter to Standard Time\n";
    cout<<"Input Military Time hh:mm\n";
    do {
    //function declaration to determine if numbers inputted is valid
    tmInp(hr, c, min, valTm);
    
    if (valTm==true) {
        //function declaration for time and day conversion
        tmCon(hr, hr12, AmPm);
        
        //function declaration for output of time in 12 hour notation
        tmOut(hr, min, hr12, AmPm);
    }
    cout<<"Would you like to convert another time (y/n)\n";
    cin>>choice;
    }while (choice=='y' || choice=='Y');

    return 0;
}
//function definition to determine if numbers inputted is valid
int tmInp(int &hr, char c, int &min, bool &valTm) {
    valTm=true;
    cin>>hr>>c>>min;
    if (hr>24 ||min>59) {
        cout<<hr<<":"<<min<<" is not a valid time\n";
        valTm=false;
    }
}
//function definition for time and day conversion
int tmCon(int &hr, int &hr12, char &AmPm) {
    if (hr==0) {
        hr12=12;
        AmPm = 'A';
    }
    else if (hr<12) {
        hr12=hr;
        AmPm='A';
    }
    else if (hr==12) {
        hr12=12;
        AmPm='P';
    }
    else if (hr>=13) {
        hr12=hr-12;
        AmPm='P';
    }
}
//function definition for output of time in 12 hour notation
int tmOut(int &hr, int &min, int &hr12, char &AmPm) {
    string half;
    if (AmPm=='A')
        half=" AM";
    if (AmPm=='P')
        half=" PM";
    if (hr==0) {
        cout<<"00:"<<min<<" = ";
        cout<<hr12<<":"<<min<<half<<endl;
    }
    else {
        cout<<hr<<":"<<min<<" = ";
        cout<<hr12<<":"<<min<<half<<endl;
    }
}