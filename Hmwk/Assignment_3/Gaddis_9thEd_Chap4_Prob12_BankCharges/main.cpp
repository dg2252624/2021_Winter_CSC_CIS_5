/* 
 * File:   Gaddis_9thEd_Chap4_Prob12_BankCharges.cpp
 * Author: David Garcia
 * Created on January 19, 2021, 1:10 PM
 * Purpose:  To find the new balance after accounting
 *           for beginning balance, number of checks,
 *           check fee, monthly fee, and low balance.
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
    float begBal,//Beginning Balance
          numchk,//number of checks
          chkFee,//check fee based on number of checks
          monFee,//monthly fee for commercial checking account
          lowBal,//fee for low balance
          newBal;//New balance after accounting for fees
    
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>begBal>>numchk;
    
    //Map inputs -> outputs
    if(numchk < 0){
        cout<<"Number of check inputted is invalid.";
    }
    else if(numchk > 0)
    {
        if(begBal < 0)
        {
            cout<<"ACCOUNT IS OVERDRAWN.";
        }
        else if(begBal > 0)
        {
            if(0 <= numchk && numchk < 20)
            chkFee=numchk*0.10f;
            
            else if(20 <= numchk && numchk <= 39)
            chkFee=numchk*0.08f;
            
            else if(40 <= numchk && numchk <= 59)
            chkFee=numchk*0.06f;
            
            else if(numchk > 59)
            chkFee=numchk*0.04f;
            
            monFee=10;
            begBal<400?lowBal=15.00:lowBal=0.00;
            newBal=begBal-chkFee-monFee-lowBal;
        }
    }
    
    
    //Display the outputs
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Balance     $ "<<setw(8)<<begBal<<endl;
    cout<<"Check Fee   $ "<<setw(8)<<chkFee<<endl;
    cout<<"Monthly Fee $ "<<setw(8)<<monFee<<endl;
    cout<<"Low Balance $ "<<setw(8)<<lowBal<<endl;
    cout<<"New Balance $ "<<setw(8)<<newBal;

    //Exit stage right or left!
    return 0;
}