/* 
 * File:   Savitch_9thEd_Chap4_Prob1_ml_Gal.cpp
 * Author: David Garcia
 * Created on January 23, 2021, 12:36 PM
 * Purpose: Calculate the number of miles per
 *          gallon a car delivered.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Set Precision
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed

const float LCNVGAL=0.264179f;//liter conversion to gallons

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int conv(float ltrGas, float galGas, int milDrv, float mpg);

int main(int argc, char** argv) {
    //Declare Variables
    float ltrGas,//Gas consumed, in liters
          galGas,//Gas consumed, in gallons
             mpg;//Miles per gallon
    int   milDrv;//Miles Driven
    char  choice;//Input (y) to continue
    
    //Initialize or input i.e. set variable values
    do{
        cout<<"Enter number of liters of gasoline:\n";
        cin>>ltrGas;
        cout<<endl;
        cout<<"Enter number of miles traveled:\n";
        cin>>milDrv;
        cout<<endl;
       
        //function declaration for miles per gallon 
        conv(ltrGas, galGas, milDrv, mpg);
        
        //Repeat function when prompted
        cout<<"Again:\n";
        cin>>choice;
        if(choice == 'y') {
            cout<<endl;
        }
    }while(choice == 'y');
    
    return 0;
}

//function definition for liter conversion to gallons and miles per gallon
int conv(float ltrGas, float galGas, int milDrv, float mpg) {
    
    //conversion from liters to gallons of gasoline
    galGas=ltrGas*LCNVGAL;
    
    //calculating miles per gallon of gasoline
    mpg=milDrv/galGas;
    
    //Display Outputs
    cout<<"miles per gallon:\n";
    cout<<fixed<<setprecision(2)<<mpg<<endl;
}