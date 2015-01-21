/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 21, 2015, 8:53 AM
 */
//System Libraries
#include <iostream>

using namespace std;

//User Libs

//Function Proto

//Execution
int main(int argc, char** argv) {
    //Declare variables
    int nFactrl=1,n;
    //Prompt user for factorial
    cout<<"What N would you like to use to"<<endl;
    cout<<"calculate N! (max 13)"<<endl;
    cin>>n;
    //do ze calc
    for(int i=1;i<=n;i++){
        nFactrl*=i;
    }
    cout<<n<<"! = "<<nFactrl<<endl;

    return 0;
}

