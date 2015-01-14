/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 * Purpose:Babylonian Square root calc
 *
 * Created on January 13, 2015, 11:40 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float number,guess,r;
    cout<<"Please input a number to estimate it's square root.\n";
    cout<<"The format will be a positive float."<<endl;
    cin>>number;
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"First pass calculation -> "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Second pass calculation -> "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Third pass calc -> "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Fourth pass calc -> "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Fifth pass calc -> "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Sixth pass calc -> "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Seventh pass calc -> "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Eighth pass calc -> "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Ninth pass calc -> "<<guess<<endl;
    r=number/guess;
    guess=(guess+r)/2;
    cout<<"Tenth pass calc -> "<<guess<<endl;
    //final guess
    cout<<"By our best estimation, the square root of "<<number<<" is "<<guess<<".";
    return 0;
}

