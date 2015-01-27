/*
 * File:   main.cpp
 * Author: rcc
 * Created on January 27, 2015, 9:11 AM
 * Purpose: Learning to retire
 */

#include <iostream>

using namespace std;

float retirement(float,float,float,int);

int main(int argc, char** argv) {
    //Declare variables
    float salary=250000.0f;
    float invRate=0.05f;
    float defPrct=0.50f;
    float ndtSave=salary/invRate;
    float retSave=0;
    float nmYears;
    //Calculate when we can retire
    for(int year=1;retSave<=ndtSave;year++){
        retSave=retirement(0.0,invRate,defPrct*salary,year);
        cout<<"Year = "<<year<<" Savings = $"<<retSave<<endl;
    }
    return 0;
    
}

float retirement(float p, float i, float d, int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}