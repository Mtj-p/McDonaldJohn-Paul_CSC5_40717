/* 
 * File:   main.cpp
 * Author: jaymc_000
 * Purpose: Find the Celsius and Fahrenheit same number
 * Created on January 20, 2015, 5:56 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int celsius=100;
    int fahrenheit;
    do{
        fahrenheit=(9*celsius)/5+32;
        celsius--;        
    }while(celsius!=(fahrenheit-1));
    cout<<"Celsius = Fahrenheit at the temperature "<<fahrenheit<<" degrees.";
    return 0;
}

