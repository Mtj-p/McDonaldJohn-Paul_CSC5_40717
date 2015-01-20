/* 
 * File:   Savitch_9thEd_Chap3_Prob2
 * Author: jaymc_000
 * Purpose: interest due
 * Created on January 19, 2015, 8:44 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


int main(int argc, char** argv) {
    cout<<"Would you like to compute the total interest you owe on your account balance?\n"
            "\"Yes\" or \"No\"? ";
    string startfunc;
    cin>>startfunc;
    while(startfunc!="No"){
        cout<<"Start by inputting your total account balance please."<<endl;
        cout<<"$";
        float accbalan;//account balance
        float totalint;//total interest due
        float totalowe;
        float payment;
        cin>>accbalan;
        if(accbalan<=1000){
            totalint=accbalan*.015;
            totalowe=totalint+accbalan;
            if(totalowe<=100){
                cout<<"The total interest you're paying is $"<<totalint<<" and you're\n"
                        "expected to pay $10 monthly.\n";
                cout<<"Would you like to input another account balance? \"Yes\" or \"No\" ";
                cin>>startfunc;
            }if(totalowe>100){
                payment=totalowe/10;
                cout<<"The total interest you're paying is $"<<totalint<<" and you're\n"
                        "expected to pay $"<<payment<<" monthly.\n";
                cout<<"Would you like to input another account balance? \"Yes\" or \"No\" ";
                cin>>startfunc;                      
                
            }
        }if(accbalan>1000){
            totalint=(accbalan-1000)*.01+15;
            totalowe=totalint+accbalan;
            if(totalowe<=100){
                cout<<"The total interest you're paying is $"<<totalint<<" and you're\n"
                        "expected to pay $10 monthly.\n";
                cout<<"Would you like to input another account balance? \"Yes\" or \"No\" ";
                cin>>startfunc;
            }if(totalowe>100){
                payment=totalowe/10;
                cout<<"The total interest you're paying is $"<<totalint<<" and you're\n"
                        "expected to pay $"<<payment<<" monthly.\n";
                cout<<"Would you like to input another account balance? \"Yes\" or \"No\" ";
                cin>>startfunc;       
            }        
        }
    }
    cout<<"Have a nice day!";
    return 0;
}

