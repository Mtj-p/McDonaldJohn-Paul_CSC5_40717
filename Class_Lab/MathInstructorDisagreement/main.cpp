/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 * Purpose: Computers making mistakes (?)
 * Created on January 7, 2015, 11:17 AM
 */

#include <iostream> //standard library

using namespace std; //standard namespace within the iostream library

//No Globals or personal user libraries
//No function prototypes

int main(int argc, char** argv) {
    short a,b,c; //Variable Declaration
    cout<<"Give me an A and a B!"<<endl;
    cin >>a >> b;
    c=a+b; //summed values
    cout<<c<<" = "<<a<<"+"<<b<<endl;

    return 0;
}

