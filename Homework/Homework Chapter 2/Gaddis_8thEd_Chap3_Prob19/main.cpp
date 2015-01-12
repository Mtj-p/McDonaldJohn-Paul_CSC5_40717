/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 12, 2015, 11:26 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(int argc, char** argv) {
    //declare variables
    float intRate=0.0319f;;
    float msrplus=4e4f;
    char nPaymnt=60;
    //Calculate the monthly payments
    float temp=pow((1+intRate/12),nPaymnt);
    float mPay=intRate*temp*msrplus/(temp-1)/12;
    //Output the inputs
    cout<<"Interest per year = "<<intRate*100<<endl;
    cout<<"Number of payments = "<<static_cast<int>(nPaymnt)<<endl;
    cout<<"Loan Amount = $"<<msrplus<<endl;
    cout<<"Temp = "<<temp<<endl;
    //Output our car payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My Avenir will cost $"<<mPay<<endl;
    return 0;
}

