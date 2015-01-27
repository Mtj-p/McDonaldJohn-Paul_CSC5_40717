/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on January 26, 2015, 10:07 PM
 */

#include <iostream>
using namespace std;
void getinpt3(float& kilograms, float& grams, float& pounds, float& ounces);
        
float convert3(float& kilograms, float& grams, float& pounds, float& ounces);

void givotpt3(float& kilograms, float& grams, float& pounds, float& ounces);

int main(){
        float kilograms,grams,pounds,ounces;
        char check;

        do {
            getinpt3(kilograms,grams,pounds,ounces);
            convert3(kilograms,grams,pounds,ounces);
            givotpt3(kilograms,grams,pounds,ounces);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;
        }while(check == 'Y' || check == 'y');
        return 0;
}

void getinpt3(float& kilograms, float& grams, float& pounds, float& ounces){ 
    cout<<"Enter kilograms to convert it to pounds: ";
    cin>>kilograms;
    cout<<endl<<"Enter grams to convert it to ounces: ";
    cin>>grams;
}

float convert3(float& kilograms, float& grams, float& pounds, float& ounces){
    pounds = kilograms * 2.2046;
    ounces = grams*.035274;
    return pounds,ounces;
}

void givotpt3(float& kilograms, float& grams, float& pounds, float& ounces){
    cout<<kilograms<<" kilograms and "<<grams<<" grams is equivalent to "
            <<pounds<<" pounds and "<<ounces<<" ounces"<<endl;
}
