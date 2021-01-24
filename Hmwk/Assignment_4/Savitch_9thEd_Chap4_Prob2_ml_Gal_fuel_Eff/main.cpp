/* 
 * File:   Savitch_9thEd_Chap4_Prob2_ml_Gal_fuel_Eff.cpp
 * Author: David Garcia
 * Created on January 23, 2021, 12:36 PM
 * Purpose: Calculate the number of miles per
 *          gallon two cars delivered and
 *          compare fuel efficiency.
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
float conv1(float fLtrGas, float fGalGas, int fMilDrv, float fMpg);

float conv2(float sLtrGas, float sGalGas, int sMilDrv, float sMpg);

int fuelEff(float fMpg, float sMpg);

int main(int argc, char** argv) {
    //Declare Variables
    float fLtrGas,//Gas consumed from Car 1, in liters
          fGalGas,//Gas consumed from Car 1, in gallons
             fMpg,//Miles per Gallon from Car 1
          sLtrGas,//Gas consumed from Car 2, in liters
          sGalGas,//Gas consumed from Car 2, in gallons
             sMpg;//Miles per Gallon from Car 2
    int   fMilDrv,//Miles Driven for Car 1
          sMilDrv;//Miles Driven for Car 2
    char   choice;//Input (y) to continue
    
    //Initialize or input i.e. set variable values
    do{
        //Input data for Car 1
        cout<<"Car 1\n";
        cout<<"Enter number of liters of gasoline:\n";
        cin>>fLtrGas;
        cout<<"Enter number of miles traveled:\n";
        cin>>fMilDrv;
        
        //function declaration for miles per gallon for Car 1
        fMpg=conv1(fLtrGas, fGalGas, fMilDrv, fMpg);
        
        //Display output for Car 1
        cout<<"miles per gallon: ";
        cout<<fixed<<setprecision(2)<<fMpg<<endl;
        cout<<endl;
        
        //Input data for Car 2
        cout<<"Car 2\n";
        cout<<"Enter number of liters of gasoline:\n";
        cin>>sLtrGas;
        cout<<"Enter number of miles traveled:\n";
        cin>>sMilDrv;
        
        //function declaration for miles per gallon for Car 2
        sMpg=conv2(sLtrGas, sGalGas, sMilDrv, sMpg);
        
        //Display output for Car 2
        cout<<"miles per gallon: ";
        cout<<fixed<<setprecision(2)<<sMpg<<endl;
        cout<<endl;
        
        //function declaration for fuel efficiency comparison
        fuelEff(fMpg, sMpg);
        
        //Repeat function when prompted
        cout<<"Again:\n";
        cin>>choice;
        if(choice == 'y') {
            cout<<endl;
        }
    }while(choice == 'y');
    
    return 0;
}

//function definition for liter conversion to gallons
//and miles per gallon for Car 1
float conv1(float fLtrGas, float fGalGas, int fMilDrv, float fMpg) {
    
    //conversion from liters to gallons of gasoline for Car 1
    fGalGas=fLtrGas*LCNVGAL;
    
    //calculating miles per gallon of gasoline for Car 1
    fMpg=fMilDrv/fGalGas;
    
    return fMpg;
}

//function definition for liter conversion to gallons
//and miles per gallon for Car 2
float conv2(float sLtrGas, float sGalGas, int sMilDrv, float sMpg) {
    
    //conversion from liters to gallons of gasoline for Car 2
    sGalGas=sLtrGas*LCNVGAL;
    
    //calculating miles per gallon of gasoline for Car 2
    sMpg=sMilDrv/sGalGas;
    
    return sMpg;
}

//function definition for fuel efficiency comparison
int fuelEff(float fMpg, float sMpg) {
    if (fMpg>sMpg) {
        cout<<"Car 1 is more fuel efficient\n";
        cout<<endl;
    }
    if (fMpg<sMpg) {
        cout<<"Car 2 is more fuel efficient\n";
        cout<<endl;
    }
}