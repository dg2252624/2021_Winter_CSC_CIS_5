/* 
 * File:   MinMax.cpp
 * Author: David Garcia
 * Created on January 26, 2021, 12:36 PM
 * Purpose: Creates a function that inputs 3 integers 
 *          and returns both min and max.
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num1,//First Number input
        num2,//Second Number input
        num3,//Third Number input
         min,//Minimum of the three numbers inputted
         max;//Maximum of the three numbers inputted
    
    //Initialize Variables
    cout<<"Input 3 numbers\n";
    cin>>num1>>num2>>num3;
    min=max=num1;
    
    //function declaration to find min and max.
    minmax(num1, num2, num3, min, max);
    
    //Output data
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
    
    //Exit
    return 0;
}
//Function definition for finding min and max.
void minmax (int num1, int num2, int num3, int & min, int & max) {
    if (num1<min)
        min=num1;
    
    if (num2<min)
        min=num2;
    
    if (num3<min)
        min=num3;
        
    if (num1>max)
        max=num1;
    
    if (num2>max)
        max=num2;
    
    if (num3>max)
        max=num3;
}