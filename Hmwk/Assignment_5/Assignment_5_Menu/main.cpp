/* 
 * File:   Assignment_5_Menu.cpp
 * Author: David Garcia
 * Created on January 26, 2021, 3:30 PM
 * Purpose:  Assignment 5 Menu
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>  //Format Library
#include <cmath>    //Math conversion Library
using namespace std;

//User Libraries

//Global Constants

//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float CNVPERC=100.0f;//conversion from percent to decimal

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

int fctrl(int, int);//Function that calculates the factorial of a number.

bool isPrime(int);//Determine if the input number is prime.

int collatz(int);//3n+1 sequence

int seqCollatz(int);//used to output numbers in sequence.

int tmInp(int &, char, int &, bool &); //function to determine if numbers
                                       //inputted is valid

int tmCon(int &, int &, char &);       //function for time conversion

int tmOut(int &, int &, int &, char &);//function for output of time in
                                       //12 hour notation

float psntVal(float, float, int);//Function to calculate present value

void getScre(int &, int &, int &, int &, int &);//Function to check
                                                //for valid values

float calcAvg(int, int, int, int, int);         //Function to calculate average
                                                //after dropping Lowest score

int fndLwst(int, int, int, int, int);           //Function to find lowest score

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;//Input a number to access program problem
    
    //Display Menu
    cout<<"Assignment 5 Menu\n";
    cout<<"Type 1 for MinMax Program\n";
    cout<<"Type 2 for Factorial Program\n";
    cout<<"Type 3 for isPrime Program\n";
    cout<<"Type 4 for Collatz Sequence Program\n";
    cout<<"Type 5 for Collatz Sequence with Output of Sequence Program\n";
    cout<<"Type 6 for Savitch 12 hour notation Program\n";
    cout<<"Type 7 for Savitch Time Converter Program\n";
    cout<<"Type 8 for Gaddis Present Value Program\n";
    cout<<"Type 9 for Gaddis Average Program\n";
    cin>>choice;
    
    if (choice=='1'){
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
           
    }else if (choice=='2'){
    //Declare Variables
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
    
    }else if (choice=='3') {
    //Declare Variables
    int   num,//number inputted to check if its prime 
        state;//statement to determine if number is prime
    
    //Initialize Variables
    cout<<"Input a number to test if Prime.\n";
    cin>>num;
    
    //Function declaration to determine if number is prime
    state=isPrime(num);
    
    //Display output
    if (state==true){
        cout<<num<<" is prime.";
    }
    else cout<<num<<" is not prime."; 
        
    }else if (choice=='4') {
    //Declare Variables
    int n;//number inputted to calculate it Collatz Sequence length.
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test\n";
    cout<<"Input a sequence start\n";
    cin>>n;
    
    //Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in ";
    
    //Calculated by function declaration for collatz
    //Sequence length of a number.
    cout<<collatz(n)<<" steps";
    
    }else if (choice=='5') {
    //Declare Variables
    int n;//number inputted to calculate Collatz Sequence length.
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test\n";
    cout<<"Input a sequence start\n";
    cin>>n;
    
    //function declaration to output numbers in sequence.
    cout<<seqCollatz(n)<<endl;
    
    //Calculated by function declaration for collatz
    //Sequence to output length of a number.    
    cout<<"Sequence start of "<<n<<" cycles to 1 in ";
    cout<<collatz(n)<<" steps";
    
    }else if (choice=='6') {
    //Declare Variables
    int      curHr,//Current hour of time
            curMin,//Current minute of time
           waitMin,//TIme waited in minutes
             addHr;//hours added based on total minutes
    char      AmPm,//states if time is before or after noon.
            choice;//Input (y) to continue
    string    half;//string label to put AM or PM depending on time
    
    //Initialize or input i.e. set variable values
    do {
    cout<<"Enter hour:\n";
    cin>>curHr;
    cout<<endl;
    cout<<"Enter minutes:\n";
    cin>>curMin;
    cout<<endl;
    cout<<"Enter A for AM, P for PM:\n";
    cin>>AmPm;
    cout<<endl;
    cout<<"Enter waiting time:\n";
    cin>>waitMin;
    cout<<endl;
    addHr=0;
    
    //Set characters equal to string
    if(AmPm=='A')
        half=" AM";
    else if (AmPm=='P')
        half=" PM";
    
    //Output Current time
    cout<<"Current time = ";
    if (curHr<10 && curMin>=10)
        cout<<"0"<<curHr<<":"<<curMin<<half<<endl;
    else if (curHr>=10 && curMin<10)
        cout<<curHr<<":0"<<curMin<<half<<endl;
    else if (curHr<10 && curMin<10)
        cout<<"0"<<curHr<<":0"<<curMin<<half<<endl;
    else
        cout<<curHr<<":"<<curMin<<half<<endl;
    
    //calculate time after waiting period
    //calculate new minute value
    curMin+=waitMin;
    while (curMin>59){
        curMin-=60;
        addHr++;
    }
    //Calculate new hour value and string output
    curHr+=addHr;
    if (curHr>12 && AmPm=='A') {
        if (addHr>11)
            AmPm='A';
        else
            AmPm='P';
        curHr-=12;
    }
    if (curHr==12 && AmPm=='A')
        AmPm='P';
    else if (curHr==12 && AmPm=='P')
        curHr='A';
    else if (curHr>12 && AmPm=='P') {
        if (addHr>11)
            AmPm='P';
        else AmPm='A';
        curHr-=12;
    }
    if (AmPm=='A')
        half=" AM";
    else if (AmPm=='P')
        half=" PM";
    
    //Output Time after waiting period    
    cout<<"Time after waiting period = ";
    if (curHr<10 && curMin>=10)
        cout<<"0"<<curHr<<":"<<curMin<<half<<endl;
    else if (curHr>=10 && curMin<10)
        cout<<curHr<<":0"<<curMin<<half<<endl;
    else if (curHr<10 && curMin<10)
        cout<<"0"<<curHr<<":0"<<curMin<<half<<endl;
    else
        cout<<curHr<<":"<<curMin<<half<<endl;
    cout<<endl;
    
    //Input y to input another time, otherwise, end program
    cout<<"Again:\n";
    cin>>choice;
    if (choice=='y' || choice=='Y')
        cout<<endl;
    }while (choice=='y' || choice=='Y');
              
    }else if (choice=='7') {
    //Declare Variables
    int      hr,//number inputted for hour military time
           hr12,//number displayed in a 12 hour conversion
            min;//number inputted for min military time
    char  c=':',//colon inserted to present time properly
           AmPm,//states if time is before or after noon
         choice;//Input (y) to convert another time
    bool  valTm;//states if time inputted is valid or not
    
    //Initialize or input i.e. set variable values
    cout<<"Military Time Converter to Standard Time\n";
    cout<<"Input Military Time hh:mm\n";
    do {
    //function declaration to determine if numbers inputted is valid
    tmInp(hr, c, min, valTm);
    
    if (valTm==true) {
        //function declaration for time and day conversion
        tmCon(hr, hr12, AmPm);
        
        //function declaration for output of time in 12 hour notation
        tmOut(hr, min, hr12, AmPm);
    }
    cout<<"Would you like to convert another time (y/n)\n";
    cin>>choice;
    }while (choice=='y' || choice=='Y');   
        
    }else if (choice=='8') {
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
    
    }else if (choice=='9') {
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
    }

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
//Function Definition of calculating the factorial of a number.
int fctrl(int num, int prd){
    for (int i=1; i<=num; ++i)
    {
        prd*=i;
        //Display Output
    }   cout<<num<<"! = "<<prd;
}
//Function definition to determine if number is prime
bool isPrime(int num) {
 bool state=true;
 for(int i=2; i<=num/2;i++){
     if(num%i==0) {
         state=false;
         break;
     }
 }
 return state;
}
//Function Definition for the Collatz Sequence length of a number.
int collatz(int n) {
    int i=1;
    while (n>1){
        if (n%2==0) {
            n=n/2;
        }
        else {
            n=(n*3)+1;
        }
        i++;
    }
    return i;
}
//function definition to output numbers in sequence.
int seqCollatz(int n) {
    int i=1;
    while (n!=1) {
        cout<<n<<", ";
        if (n&1) {
        n=(n*3)+1;
        }
        else n=n/2;
    }
}
//function definition to determine if numbers inputted is valid
int tmInp(int &hr, char c, int &min, bool &valTm) {
    valTm=true;
    cin>>hr>>c>>min;
    if (hr>24 ||min>59) {
        cout<<hr<<":"<<min<<" is not a valid time\n";
        valTm=false;
    }
}
//function definition for time and day conversion
int tmCon(int &hr, int &hr12, char &AmPm) {
    if (hr==0) {
        hr12=12;
        AmPm = 'A';
    }
    else if (hr<12) {
        hr12=hr;
        AmPm='A';
    }
    else if (hr==12) {
        hr12=12;
        AmPm='P';
    }
    else if (hr>=13) {
        hr12=hr-12;
        AmPm='P';
    }
}
//function definition for output of time in 12 hour notation
int tmOut(int &hr, int &min, int &hr12, char &AmPm) {
    string half;
    if (AmPm=='A')
        half=" AM";
    if (AmPm=='P')
        half=" PM";
    if (hr==0) {
        cout<<"00:"<<min<<" = ";
        cout<<hr12<<":"<<min<<half<<endl;
    }
    else {
        cout<<hr<<":"<<min<<" = ";
        cout<<hr12<<":"<<min<<half<<endl;
    }
}
//Function definition to calculate present value.
float psntVal(float F, float r, int n) {
    float P;
    
    P=F/pow(1+r,n);
    
    return P;
    
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
        cout<<"The average test score = "<<showpoint;
        cout<<fixed<<setprecision(1)<<sum;
    
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