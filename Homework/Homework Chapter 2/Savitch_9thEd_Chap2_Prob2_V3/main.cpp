/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 * Purpose:Babylonian Square root calc
 *
 * Created on January 13, 2015, 11:40 AM
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    float number,guess,r,count=0;
    cout<<"Please input a number to estimate it's square root.\n";
    cout<<"The format will be a positive float."<<endl;
    cin>>number;
    guess=number/2;
    while(abs(guess!=r)>.01){
        r=number/guess;
        guess=(guess+r)/2;
        count++;
        cout<<"Loop "<<count<<" ->"<<guess<<endl;
    }//preferred technique
    //}while(abs(guess-r)>.01);
    //final guess
    cout<<"By our best estimation, the square root of "<<number<<" is "<<guess<<".";
    return 0;
}

