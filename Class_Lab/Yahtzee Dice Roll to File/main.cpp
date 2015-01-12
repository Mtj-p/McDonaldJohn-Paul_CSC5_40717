/* 
 * File:   Yahtzee!
 * Author: McDonald, John-Paul
 * Purpose: Illustrate file i/o and random numbers
 * 
 *
 * Created on January 12, 2015, 10:06 AM
 */

//System Libraries
#include <cstdlib>      //random rand(), srand()
#include <iostream>     //Keyboard/Monitor i/o
#include <fstream>      //file i/o
#include <ctime>        //Time functions

using namespace std;

//System Libraries

//Global Constants

//Function Prototypes

//Execution beings here!
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare a file object
    ofstream output;
    //Open the file
    output.open("RolleTheDice.dat");
    //Declare 5 dice
    unsigned short die1,die2,die3,die4,die5;
    //Set the values for each dice
    die1=rand()%6+1;
    die2=rand()%6+1;
    die3=rand()%6+1;
    die4=rand()%6+1;
    die5=rand()%6+1;
    //Output the results
    cout<<"Yahtzee first roll => ";
    cout<<die1<<" "<<die2<<" "<<die3<<" "<<die4<<" "<<die5<<endl;
    //Output to file
    output<<"Yahtzee first roll => ";
    output<<die1<<" "<<die2<<" "<<die3<<" "<<die4<<" "<<die5<<endl;
    //Close the stream
    output.close();
    return 0;
}

