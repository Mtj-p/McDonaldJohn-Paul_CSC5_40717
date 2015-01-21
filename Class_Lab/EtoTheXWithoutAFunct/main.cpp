/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 21, 2015, 9:06 AM
 */
//System Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Libs

//Function Proto

//Execution
int main(int argc, char** argv) {
    //Declare variables
    float approxEx=1,exactEx,x;
    //Prompt the user for the power of e^x
    cout<<"What x in e^x would you like to use?"<<endl;
    cin>>x;
    //calculate e^x
    for(int n=1;n<=13;n++){
        int nFactrl=1;
        //do ze calc
        for(int i=1;i<=n;i++){
            nFactrl*=i;
        }
        approxEx+=(pow(x,n)/nFactrl);
    }
    exactEx=exp (x);
    cout << "Approx e^x  = " << approxEx << endl;
    cout << "Exact  e^x  = " << exactEx << endl;
    return 0;
}