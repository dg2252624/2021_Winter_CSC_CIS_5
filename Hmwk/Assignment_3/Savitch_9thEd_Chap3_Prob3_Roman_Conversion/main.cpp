/* 
 * File:   Gaddis_9thEd_Chap3_Prob3_Roman_Conversion.cpp
 * Author: David Garcia
 * Created on January 19, 2021, 2:40 PM
 * Purpose:  accepting a year written as four-digit
 *           Arabic (ordinary) numeral and outputs
 *           year written in Roman numerals.
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
    unsigned short numCnvr;//number to be converted to Roman numeral
    unsigned char    n1000,//character assigned by thousands
                      n100,//character assigned by hundreds
                       n10,//character assigned by tens
                        n1;//character assigned by ones
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion.\n";
    cout<<"Input the integer to convert.\n";
    cin>>numCnvr;
    
    //Map inputs -> outputs
    n1000=numCnvr/1000;
    n100=numCnvr%1000/100;
    n10=numCnvr%100/10;
    n1=numCnvr%10;
    
    //Display the outputs
    if (numCnvr>=1000 && numCnvr<=3000){
    cout<<numCnvr<<" is equal to ";
    
    cout<<(n1000==3?"MMM":
           n1000==2?"MM":
           n1000==1?"M":"");
           
    cout<<(n100==9?"CM":
           n100==8?"DCCC":
           n100==7?"DCC":
           n100==6?"DC":
           n100==5?"D":
           n100==4?"CD":
           n100==3?"CCC":
           n100==2?"CC":
           n100==1?"C":"");
    
    cout<<(n10==9?"XC":
           n10==8?"LXXX":
           n10==7?"LXX":
           n10==6?"LX":
           n10==5?"L":
           n10==4?"XL":
           n10==3?"XXX":
           n10==2?"XX":
           n10==1?"X":"");      
    
    cout<<(n1==9?"IX":
           n1==8?"VIII":
           n1==7?"VII":
           n1==6?"VI":
           n1==5?"V":
           n1==4?"IV":
           n1==3?"III":
           n1==2?"II":
           n1==1?"I":"");
    } else {
    cout<<numCnvr<<" is Out of Range!";    
    }
    //Exit stage right or left!
    return 0;
}