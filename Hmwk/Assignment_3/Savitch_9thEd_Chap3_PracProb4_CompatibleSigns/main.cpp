/* 
 * File:   Savitch_9thEd_Chap3_Prob4_CompatibleSigns.cpp
 * Author: David Garcia
 * Created on January 19, 2021, 3:15 PM
 * Purpose:  Compare two signs for compatibility.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string Aries="Aries", Leo="Leo", Sagittarius="Sagittarius",
           Taurus="Taurus", Virgo="Virgo", Capricorn="Capricorn",
           Gemini="Gemini", Libra="Libra", Aquarius="Aquarius",
           Cancer="Cancer", Scorpio="Scorpio", Pisces="Pisces",
           ele1="Fire", ele2="Earth", ele3="Air", ele4="Water",
           sign1, sign2;
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs.\n";
    cout<<"Input 2 signs.\n";
    cin>>sign1>>sign2;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if (sign1==Aries){
        if (sign2==Aries || sign2==Leo || sign2==Sagittarius){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele1<<" signs.";
        }else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1==Leo){
        if (sign2==Aries || sign2==Leo || sign2==Sagittarius){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele1<<" signs.";
        } else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1==Sagittarius){
        if (sign2==Aries || sign2==Leo || sign2==Sagittarius){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele1<<" signs.";
        } else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1==Taurus){
        if (sign2==Taurus || sign2==Virgo || sign2==Capricorn){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele2<<" signs.";
        } else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1==Virgo){
        if (sign2==Taurus || sign2==Virgo || sign2==Capricorn){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele2<<" signs.";
        } else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1==Capricorn){
        if (sign2==Taurus || sign2==Virgo || sign2==Capricorn){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele2<<" signs.";
        } else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1==Gemini){
        if (sign2==Gemini || sign2==Libra || sign2==Aquarius){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele3<<" signs.";
        } else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1==Libra){
        if (sign2==Gemini || sign2==Libra || sign2==Aquarius){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele3<<" signs.";
        } else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1==Aquarius){
        if (sign2==Gemini || sign2==Libra || sign2==Aquarius){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele3<<" signs.";
        } else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1==Cancer){
        if (sign2==Cancer || sign2==Scorpio || sign2==Pisces){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele4<<" signs.";
        } else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1==Scorpio){
        if (sign2==Cancer || sign2==Scorpio || sign2==Pisces){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele4<<" signs.";
        } else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }else if (sign1==Pisces){
        if (sign2==Cancer || sign2==Scorpio || sign2==Pisces){
            cout<<sign1<<" and "<<sign2<<" are compatible "<<ele4<<" signs.";
        } else cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    }
    //Exit stage right or left!
    return 0;
}