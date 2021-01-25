/* 
 * File:   Savitch_9thEd_Chap3_PracProb1_RockPaperScissors.cpp
 * Author: David Garcia
 * Created on January 19, 2021, 2:20 PM
 * Purpose:  To score a paper-rock-scissor game.
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
    string r="r",//Rock
           R="R",//Rock
           p="p",//Paper
           P="P",//Paper
           s="s",//Scissors
           S="S",//Scissors
            plr1,//player 1 choice
            plr2;//player 2 choice
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game\n";
    cout<<"Input Player 1 and Player 2 Choices\n";
    cin>>plr1>>plr2;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if (plr1==r || plr1==R){
        if (plr2==p || plr2==P){
            cout<<"Paper covers rock.";
        }else if (plr2==s || plr2==S){
            cout<<"Rock breaks scissors.";
        }else if (plr1==r && plr2==R){
            cout<<"Nobody wins";
        }
    }else if (plr1==p || plr1==P){
        if (plr2==r || plr2==R){
            cout<<"Paper covers rock.";
        }else if (plr2==s || plr2==S){
            cout<<"Scissors cuts paper.";
        }else if (plr1==p && plr2==P){
            cout<<"Nobody wins";
        }
    }else if (plr1==s || plr1==S){
        if (plr2==p || plr2==P){
            cout<<"Scissors cuts paper.";
        }else if (plr2==r || plr2==R){
            cout<<"Rock breaks scissors.";
        }else if (plr1==s && plr2==S){
            cout<<"Nobody wins";
        }
    }
    //Exit stage right or left!
    return 0;
}