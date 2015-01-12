/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 * Created on January 6, 2015, 10:30 AM
 * Purpose: Homework ; free fall problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float GRAVITY=32.174;//(ft/sec2)

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned int time;//(seconds)
    float dist;//distance (ft)
    //Prompt user for input
    cout<<"This program calculates free fall\n";
    cout<<"distance dropped in feet with an\n";
    cout<<"object starting at rest.\n";
    cout<<"Input the free fall time to drop in seconds.\n";
    cout<<"The time input must be a positive integer.\n";
             
    cin>>time;
    //Calculate the distance dropped
    dist=1.0f/2*GRAVITY*time*time;
    //now output the results
    cout<<"Distance dropped = "<<dist<<" (ft).\n";
    
    
    return 0;
}

