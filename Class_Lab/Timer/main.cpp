/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 * Created on January 26, 2015, 10:04 AM
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    unsigned int x,y,begTime,endTime,ans;
    //Randomly choose 2 digits for each
    x=rand()%90+10;
    y=rand()%90+10;
    //Prompt user for an answer
    cout << "What is " << x << " + " << y << endl;
    cout << "You have 5 seconds to answer\n";
    begTime=static_cast<unsigned int>(time(0));
    cout << "Your answer is?" << endl;
    cin>>ans;
    //Determine if correct
    if(begTime<=5&ans==(x+y))cout<<"You are Correct"<<endl;
    else cout<<"You are wrong"<<endl;
    
    //Exit Stage Right
    return 0;
}

