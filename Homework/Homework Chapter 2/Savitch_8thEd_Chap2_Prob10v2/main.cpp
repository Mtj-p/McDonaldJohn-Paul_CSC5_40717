/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 15, 2015, 11:04 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declaration of independents
    int sum=0,sumNeg=0,sumPos=0,sumEven=0,sumOdd=0;
    int input;
    //prompt for a vlue and sum it
    for(int count=1;count<=10;count++){
        cout<<endl<<"Input an interger value."<<endl;
        cin>>input;
        sum+=input;
        if(input>0)sumPos+=input;
        else sumNeg+=input;
        if(input%2)sumOdd+=input;
        else sumEven+=input;
    }    
    //output the result
    cout<<"Sum = "<<sum<<endl;
    cout<<"Sum of the positives = "<<sumPos<<endl;
    cout<<"Sum of the negatives = "<<sumNeg<<endl;
    cout<<"Sum of the odds = "<<sumOdd<<endl;
    cout<<"Sum of the evens = "<<sumEven<<endl;
    return 0;
}

