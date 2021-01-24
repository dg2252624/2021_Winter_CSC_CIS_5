/* 
 * File:   Savitch_9thEd_Chap4_Prob9_Parameters.cpp
 * Author: David Garcia
 * Created on January 23, 2021, 12:36 PM
 * Purpose: Finding the max of either two or three
 *          parameters of type float and return the
 *          largest of them.
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
float max(float num1, float num2);
    
float max(float num1, float num2, float num3);
    
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1,//First number entered
          num2,//Second number entered
          num3;//Third number entered
    
    //Initialize or input i.e. set variable values
    cout<<"Enter first number:\n";
    cin>>num1;
    cout<<endl;
    cout<<"Enter Second number:\n";
    cin>>num2;
    cout<<endl;
    cout<<"Enter third number:\n";
    cin>>num3;
    cout<<endl;
    
    //function declaration for two parameters
    max(num1,num2);
    
    //function declaration for three parameters
    max(num1,num2,num3);
    
    return 0;
}
//function definition for two parameters
float max(float num1, float num2) {
         
        if (num1>num2) {
         cout<<"Largest number from two parameter function:\n";
         cout<<num1<<endl;
         cout<<endl;
        }
        if (num2>num1) {
         cout<<"Largest number from two parameter function:\n";
         cout<<num2<<endl;
         cout<<endl;
        }
}
//function definition for three parameters
float max(float num1, float num2, float num3) {
    
        if (num1>num2 && num1>num3) {
         cout<<"Largest number from three parameter function:\n";
         cout<<num1<<endl;
        }
        if (num2>num1 && num2>num3) {
         cout<<"Largest number from three parameter function:\n";
         cout<<num2<<endl;
        }
        if (num3>num2 && num3>num1) {
         cout<<"Largest number from three parameter function:\n";
         cout<<num3<<endl;
        }
    }