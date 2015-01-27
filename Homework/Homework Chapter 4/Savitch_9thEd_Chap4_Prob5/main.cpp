/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on January 26, 2015, 7:12 PM
 */

#include <iostream>
#include <string>

using namespace std;

float infRate(float,float);

int main(int argc, char** argv) {
    string infconv;
    do{
        float olditem;
        float newitem;
        float rateinf;
        float oneyear;
        float inftwo;
        float twoyear;
        cout<<"I can find the current inflation rate.\n";
        cout<<"I take two items a new one, and an old one,\n"
                "and I can tell you the rate of inflation.\n";
        cout<<"Price of the item now: ";
        cin>>newitem;
        cout<<"And the price of the item a year ago: ";
        cin>>olditem;
        rateinf=infRate(newitem,olditem);
        cout<<"The current inflation rate is "<<rateinf<<"%";
        cout<<endl;
        cout<<"The estimated price of the item next year is: $";
        oneyear=rateinf*newitem/100;
        cout<<oneyear<<endl;
        cout<<"And the estimated price of the item in two years is: $";
        inftwo=infRate(oneyear,newitem);
        twoyear=inftwo*oneyear/100;
        cout<<twoyear<<endl;
        cout<<"Would you like to double check another item? (Y/N) ";
        cin>>infconv;
                
    }while(infconv!="N");            

    return 0;
}

float infRate(float x, float y){
    return (x/y)*100;
}