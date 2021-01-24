/* 
 * File:   Gaddis_9thEd_Chap4_Prob11_Books.cpp
 * Author: David Garcia
 * Created on January 19, 2021, 12:53 PM
 * Purpose:  To calculate points earned based
 *           on number of books purchased.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>  //Set Precision
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int  bkPur,//number of books purchased in a month
        pntErn;//points earned based on number of books purchased in a month
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points\n";
    cout<<"Input the number of books purchased this month.\n";
    cin>>bkPur;
    
    //Map inputs -> outputs
    switch (bkPur){
        case 0:pntErn=0;break;
        case 1:pntErn=5;break;
        case 2:pntErn=15;break;
        case 3:pntErn=30;break;
        case 4:pntErn=60;break;
        default:pntErn=60;
    }
    
    //Display the outputs
    cout<<"Books purchased ="<<setw(3)<<bkPur<<endl;
    cout<<"Points earned   ="<<setw(3)<<pntErn;

    return 0;
}