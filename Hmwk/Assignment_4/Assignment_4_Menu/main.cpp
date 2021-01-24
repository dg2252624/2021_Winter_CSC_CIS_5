/* 
 * File:   Assignment_4_Menu.cpp
 * Author: David Garcia
 * Created on January 23, 2021, 10:36 PM
 * Purpose:  Assignment 4 Menu
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
#include <string>    //String class
using namespace std;

//User Libraries

//Global Constants
const float LCNVGAL=0.264179f;//liter conversion to gallons
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
int conv(float ltrGas, float galGas, int milDrv, float mpg);
float conv1(float fLtrGas, float fGalGas, int fMilDrv, float fMpg);
float conv2(float sLtrGas, float sGalGas, int sMilDrv, float sMpg);
int fuelEff(float fMpg, float sMpg);
float inflate(float curPrc, float prvPrc);
float prd(float prvPrc, float infRte);
float max(float num1, float num2);
float max(float num1, float num2, float num3);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Display Menu
    cout<<"Assignment 4 Menu\n";
    cout<<"Type 0 for Gaddis Sum Program\n";
    cout<<"Type 1 for Gaddis Pay In Pennies Program\n";
    cout<<"Type 2 for Gaddis Min and Max Program\n";
    cout<<"Type 3 for Gaddis Rectangle Program\n";
    cout<<"Type 4 for Gaddis Pattern Program\n";
    cout<<"Type 5 for Savitch Miles per Gallon Program\n";
    cout<<"Type 6 for Savitch Fuel Efficiency Comparison Program\n";
    cout<<"Type 7 for Savitch Inflation Rate Program\n";
    cout<<"Type 8 for Savitch Future Price Program\n";
    cout<<"Type 9 for Savitch Parameters Program\n";
    cin>>choice;
    
    if (choice=='0'){
    //Declare Variables
    int   num,//Number Input by user
        tot=0;//Total starting at 0
    
    //Initialize or input i.e. set variable values
    cin>>num;
    
    //Map inputs -> outputs
    for(int i=1; i<=num; i++) {
        tot+=i;
    }
    //Display the outputs
    cout<<"Sum = "<<tot;
    }else if (choice=='1'){
    //Declare Variables
    unsigned int   payAmt=1,//pay amount in a given day in pennies
                   amtMul=2,//multiplier to pay amount
                   payPen=0,//total pay in pennies
                     numDay;//number of days of pay
    
    //Initialize or input i.e. set variable values
    cin>>numDay;
    
    //Input Validation
    while (numDay<1) {
        cout<<"Invalid number input.\n";
        cout<<"Please Input positive integer number.";
        cin>>numDay;
    }
    
    for(int i=0;i<numDay;i++) {
        payPen+=payAmt;
        payAmt*=amtMul;
    }
    
    //Display the outputs
    //total pay in pennies converted to dollar amount
    cout<<"Pay = $"<<payPen/100<<".";
    if ((payPen%100)<10) {
        cout<<"0"<<payPen%100;
    } else if ((payPen%100)>=10) {
        cout<<payPen%100;
    }        
    }else if (choice=='2'){
    //Declare Variables
    int    num,//number inputted to be included in series
        minInt,//smallest number inputted in series
        maxInt;//largest number inputted in series
    
    //Initialize or input i.e. set variable values
    cin>>num;
    minInt=maxInt=num;
    
    //repeat input until stop input is entered
    //entering -99 signals end of series
    while (num!=-99) {
        if (num<minInt)
        minInt=num;
        
        if (num>maxInt)
        maxInt=num;
        
        cin>>num;
    }
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<minInt<<endl;
    cout<<"Largest  number in the series is "<<maxInt;
    }else if (choice=='3') {
    //Declare Variables
    int     num;//number of characters inputted
    char choice;//choice of character inputted
    
    //Initialize or input i.e. set variable values
    cin>>num>>choice;
    
    //Map inputs -> outputs
    
    //Display the outputs
    for(int i = 1; i < num; i++) {
        for(int j = 1; j < num; j++) {
            cout<<choice;
        }
        cout<<choice<<endl;
    }
    for (int k = 0; k < num; k++) {
        cout<<choice;
    }        
    }else if (choice=='4') {
    //Declare Variables
    int rows;//amount of "+" per row and number of 
             //rows based on number input
    
    //Initialize or input i.e. set variable values
    cin>>rows;
    
    //Map inputs -> outputs
    for(int i = 1; i <= rows; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout<<"+";
        }
        cout<<"\n\n";
    }
    for (int i = rows; i >= 2; --i) {
        for (int j = 1; j <= i; ++j) {
            cout<<"+";
        }
        cout<<"\n\n";
    }
    cout<<"+";        
    }else if (choice=='5') {
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
    }else if (choice=='6') {
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
    }else if (choice=='7') {
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
        
        //Display output
        cout<<fixed<<setprecision(2);
        cout<<"Inflation rate: "<<infRte<<"%\n";
        cout<<endl;
        
        //Repeat function when prompted
        cout<<"Again:\n";
        cin>>choice;
        if(choice == 'y'){
            cout<<"\n";
        }
        }while(choice == 'y');
    }else if (choice=='8') {
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
    }else if (choice=='9') {
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
    }

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