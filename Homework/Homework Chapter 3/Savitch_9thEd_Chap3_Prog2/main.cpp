/*
 * File:   main.cpp
 * Author: jaymc_000
 * Purpose: output complex roots
 * Created on January 20, 2015, 8:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    string crootend;
    cout<<"I can create complex roots. Would you like to see? (Y/N) ";
    cin>>crootend;
    while(crootend!="N"){
        float a;
        float b;
        float c;
        float discrim;
        float quadform1;
        float quadform2;
        cout<<"I can take the values of a, b, and c as input and ouput the roots.\n"
                "This quadratic is in the form of ax^2+bx+c = 0, and should be entered\n"
                "accordingly. \n";
        cout<<"a = ";
        cin>>a;
        cout<<"b = ";
        cin>>b;
        cout<<"c = ";
        cin>>c;
        discrim=(b*b-4*a*c);
        if(discrim>0){
            quadform1=(-b + sqrt(discrim))/2*a;
            quadform2=(-b - sqrt(discrim))/2*a;
            cout<<"The roots of your function are "<<quadform1<<" and "<<quadform2<<endl;
            
        }else if(discrim<0){
            cout<<"-"<<b<<"+-i(sqrt("<<discrim<<"))/"<<a;
                                
        }else if(discrim=0){
            quadform1=(-b + sqrt(discrim))/2*a;
        }
        cout<<endl<<endl<<"Would you like to input more values? (Y/N) ";
        cin.ignore();
        cin>>crootend;
                
    }
    cout<<"Have a nice day.";
    
    return 0;
}

