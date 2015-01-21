/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 21, 2015, 10:31 AM
 */
//system libraries
#include <iostream>
#include <cmath>
using namespace std;

//user libraries

//function prototypes
//FV=Future Value $'s
//PV=Present Value $'s
// i=Interest Rate per year
// n=Number of compounding periods in year
// FV          PV     i      n
float save1 (float, float, int);
float save1 (float, float, float=12);//Defaulted Parameter for #compound periods
float save2 (float, float, int);
float save3 (float, float, int);
float save4 (float, float, int);
float save4 (float, float, float);

int main(int argc, char** argv) {
    //Declare and initialize values
    float prsVal=100.0f;//$100
    float intRate=6;//% Interest Rate per year
    int nCompnd=72/intRate;//by the rule of 72 to double
    float fCompnd=nCompnd;
    //Convert interest to a fraction
    intRate/=100;
    //Output the inputs
    cout << "Present Value = $" << prsVal << endl;
    cout << "Interest Rate = " << intRate*100 << "%" << endl;
    cout << "Number of compounding periods = " << nCompnd << "(years)" << endl;
    //Output the Future value
    cout << "Our Savings 1 = $" << save1(prsVal,intRate,nCompnd) << endl;
    cout << "Our Savings 2 = $" << save2(prsVal,intRate,nCompnd) << endl;
    cout << "Our Savings 3 = $" << save3(prsVal,intRate,nCompnd) << endl;
    cout << "Our Savings 4 = $" << save4(prsVal,intRate,nCompnd) << endl;
    cout << "Our Savings 4 = $" << save4(prsVal,intRate,fCompnd) << endl;
    cout << "Our Savings 1 = $" << save1(prsVal,intRate,fCompnd) << endl;
    cout << "Our Savings 1 = $" << save1(prsVal,intRate) << endl;
    
    cout << "lol" << endl;
        
    //Exit Stage Right!
    return 0;
}

//Inputs
//p->Principal in $'s meaning present value
//i->Interest rate per year
//n->Number of compounding periods
//Output
//Savings->Future value in $'s
float save1 (float p, float i, int n){
    return p*pow(1+i,n);
}

float save1 (float p, float i, float n){
    return p*pow(1+i,n);
}

float save2 (float p, float i, int n){
    return p*exp(n*log(1+i));
}

float save3 (float p, float i, int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

float save4 (float p, float i, int n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}

float save4 (float p, float i, float n){
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}