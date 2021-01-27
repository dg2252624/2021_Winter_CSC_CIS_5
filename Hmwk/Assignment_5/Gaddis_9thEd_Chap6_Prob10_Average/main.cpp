/* 
 * File:   Gaddis_9thEd_Chap6_Prob10_Average.cpp
 * Author: David Garcia
 * Created on January 26, 2021, 3:10 PM
 * Purpose: Create a program that calculates the average
 *          of a group of test scores, where the lowest
 *          score is dropped.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>  //Set Precision
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void getScre(int &, int &, int &, int &, int &);//Function to check for valid values

float calcAvg(int, int, int, int, int);         //Function to calculate average after
                                                //dropping Lowest score

int fndLwst(int, int, int, int, int);           //Function to find lowest score

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int   test1,//first test score inputted
          test2,//second test score inputted
          test3,//third test score inputted
          test4,//fourth test score inputted
          test5;//fifth test score inputted
    float   avg;//average test score after dropping lowest score
    
    //Initialize Variables
    cout<<"Find the Average of Test Scores\n";
    cout<<"by removing the lowest value.\n";
    cout<<"Input the 5 test scores.\n";
    cin>>test1>>test2>>test3>>test4>>test5;
    
    //Function declaration to check for valid values
    getScre(test1, test2, test3, test4, test5);
    
    //function declaration to calculate average after
    //dropping lowest score
    calcAvg(test1, test2, test3, test4, test5);
    
    return 0;
}
//Function definition to check for valid values
void getScre(int &test1, int &test2, int &test3, int &test4, int &test5) {
    while ((test1<0 || test1>100) && (test2<0 || test2>100)
    && (test3<0 || test3>100) && (test4<0 || test4>100)
    && (test5<0 || test5>100)) {
        //Value invalidation
        cout<<"Error: Not a valid test score.";
    }
}
//function declaration to calculate average
//after dropping lowest score
float calcAvg(int test1, int test2, int test3, int test4, int test5) {
    //Declare variables
    int  lwst;//lowest score inputted in set
    float sum;//sum of the test scores inputted
    
        sum=test1+test2+test3+test4+test5;
        //Function declaration for finding lowest test score
        lwst=fndLwst(test1, test2, test3, test4, test5);
        //sum after dropping lowest test score
        sum-=lwst;
        sum/=4;
        
        //Display Output
        cout<<"The average test score = "<<showpoint<<fixed<<setprecision(1)<<sum;

    
}
//Function definition for finding lowest test score
int fndLwst(int test1, int test2, int test3, int test4, int test5) {
    int lwst;
    
    lwst=test1;
    if (test2<lwst)
        lwst=test2;
    if (test3<lwst)
        lwst=test3;
    if (test4<lwst)
        lwst=test4;
    if (test5<lwst)
        lwst=test5;
    return lwst;
}