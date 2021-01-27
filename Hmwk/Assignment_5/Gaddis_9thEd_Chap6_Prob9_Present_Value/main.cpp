/* 
 * File:   Gaddis_9thEd_Chap6_Prob9_Present_Value.cpp
 * Author: David Garcia
 * Created on January 26, 2021, 2:50 PM
 * Purpose: Create a program that calculates the amount
 *          needed to deposit to accumulate desired interest
 *          into account in an amount of years and a set 
            interest rate.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>  //Set Precision
#include <cmath>    //Math conversions
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float CNVPERC=100.0f;//conversion from percent to decimal
//Function Prototypes
float psntVal(float, float, int);//Function to calculate present value

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int   n;//number of years account draws interest
    float F,//Future value of account after set amount of years
          r,//interest rate measured in %.
          P;//Present value needed to accumulate desired interest.
    
    //Initialize Variables
    cout<<"This is a Present Value Computation\n";
    cout<<"Input the Future Value in Dollars\n";
    cin>>F;
    cout<<"Input the Number of Years\n";
    cin>>n;
    cout<<"Input the Interest Rate %/yr\n";
    cin>>r;
    
    //percent to decimal conversion
    r/=CNVPERC;
    
    //function declaration to calculate present value.
    P=psntVal(F, r, n);
    
    //Output data
    cout<<"The Present Value = $"<<fixed<<setprecision(2)<<P;

    return 0;
}
//Function definition to calulate present value.
float psntVal(float F, float r, int n) {
    float P;
    
    P=F/pow(1+r,n);
    
    return P;
    
}