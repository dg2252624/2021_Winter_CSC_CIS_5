/* 
 * File:   Savitch_9thEd_Chap4_Prob5_Inflation_by_year.cpp
 * Author: David Garcia
 * Created on January 23, 2021, 12:36 PM
 * Purpose: Calculate inflation rate for one and two years.
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
float inflate(float curPrc, float prvPrc);

float prd(float prvPrc, float infRte);

int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float curPrc,//current price in Dollars
          prvPrc,//price a year ago in Dollars
          infRte;//Inflation rate in percentage
    char  choice;//Input (y) to continue
    
    //Initialize or input i.e. set variable values
    do {
        cout<<"Enter current price:\n";
        cin>>curPrc;
        cout<<"Enter year-ago price:\n";
        cin>>prvPrc;
        
        //function declaration for inflation rate in percentage
        infRte=inflate(curPrc,prvPrc);
        
        //Display Output
        cout<<fixed<<setprecision(2);
        cout<<"Inflation rate: "<<infRte<<"%\n";
        cout<<endl;
        
        //Price prediction
        prvPrc=curPrc;
        
        //function declaration for price prediction in one year
        prvPrc=prd(prvPrc,infRte);
        
        //Display Output
        cout<<"Price in one year: $"<<prvPrc<<endl;
        
        //function declaration for price prediction in two years
        prvPrc=prd(prvPrc,infRte);
        
        //Display Output
        cout<<"Price in two year: $"<<prvPrc<<endl;
        cout<<endl;
        
        //Repeat function when prompted
        cout<<"Again:\n";
        cin>>choice;
        if(choice == 'y'){
            cout<<"\n";
        }
        }while(choice == 'y');
    
    return 0;
}

//function definition for inflation rate in percentage
float inflate(float curPrc, float prvPrc) {
    float diff,//difference between current and previous price
           inf;//inflation conversion to percentage
          
    diff=curPrc-prvPrc;
    inf=(diff/prvPrc)*100.0f;
    
    return inf;
}
//function definition for prediction in prices after inflation
float prd(float prvPrc, float infRte) {
  
    infRte/=100.0f;
    prvPrc+=(prvPrc*infRte);
    
    return prvPrc;
}