/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on January 26, 2015, 6:54 PM
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
        cout<<"Would you like to double check? (Y/N) ";
        cin>>infconv;
                
    }while(infconv!="N");            

    return 0;
}

float infRate(float x, float y){
    return (x/y)*100;
}