/* 
 * File:   Factorial.cpp
 * Author: David Garcia
 * Created on January 26, 2021, 12:50 PM
 * Purpose: Create an integer function as indicated
 *          with template, that outputs the factorial.
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int, int);//Function that calculates the factorial of a number.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int   num,//Number inputted to find factorial
                 prd=1;//value of factorial number.
    
    //Initialize Variables
    cout<<"This program calculates the factorial using a function";
    cout<<" prototype found in the template for this problem.\n";
    cout<<"Input the number for the function.\n";
    cin>>num;
    
    //Function Declaration of calculating the factorial of a number.
    prd=fctrl(num, prd);
    
    //Exit
    return 0;
}
//Function Definition of calculating the factorial of a number.
int fctrl(int num, int prd){
    for (int i=1; i<=num; ++i)
    {
        prd*=i;
    }   cout<<num<<"! = "<<prd;
}