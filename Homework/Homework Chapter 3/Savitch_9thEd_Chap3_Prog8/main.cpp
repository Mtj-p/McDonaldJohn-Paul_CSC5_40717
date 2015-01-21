/* 
 * File:   main.cpp
 * Author: jaymc_000
 * Purpose: Approximate pi
 * Created on January 20, 2015, 9:38 PM
 */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(int argc, char** argv) {
    //would consider using a double to push the values farther
    string pieend;
    float pie;
    float term;
    float ration=0;
    cout<<"Would you like to approximate the value of pi? *hint* more numbers\n"
            "create a higher chance of success. (Y/N) ";
    cin>>pieend;
    while(pieend!="N"){
        cout<<"Please input the number of terms you'd like pie to be approximated to: ";
        cin>>term;
        while(term>=0){
            ration+=((pow(-1,term))/(2*term+1));
            cout<<ration<<endl<<term<<endl;
            term--;
        }
        pie=ration*4.0f;
        cout<<endl<<pie<<endl;
        cout<<"Would you like to approximate again? (Y/N) ";
        cin>>pieend;
    }         
    cout<<"Have a nice day.";
    return 0;
}

