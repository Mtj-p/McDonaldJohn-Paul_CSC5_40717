/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on January 26, 2015, 9:07 PM
 */

#include <iostream>
using namespace std;
void getinpt(float& meters, float& centimeters, float& feet, float& inches);
        
float convert(float& meters, float& centimeters, float& feet, float& inches);

void givotpt(float meters, float centimeters, float feet, float inches);

int main(){
        float meters, centimeters, feet, inches;
        char check;

        do {
            getinpt(meters, centimeters, feet, inches);
            convert(meters, centimeters, feet, inches);
            givotpt(meters, centimeters, feet, inches);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;
        }while(check == 'Y' || check == 'y');
        return 0;
}

void getinpt(float& meters, float& centimeters, float& feet, float& inches){ 
    cout<<"Enter meters to convert it to feet: ";
    cin>>meters;
    cout<<endl<<"Enter centimeters to convert it to inches: ";
    cin>>centimeters;
}

float convert(float& meters, float& centimeters, float& feet, float& inches){
    feet = meters / 0.3048;
    inches = centimeters / 2.54;
    return feet, inches;
}

void givotpt(float meters, float centimeters, float feet, float inches){
    cout<<meters<<" meters "<<centimeters<<" centimeters is equivalent to "
            <<feet<<" feet and " <<inches<<" inches"<<endl;
}