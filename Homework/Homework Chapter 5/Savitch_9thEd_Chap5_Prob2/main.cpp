/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on January 26, 2015, 8:38 PM
 */

#include <iostream>
using namespace std;
void getinpt(float& feet, float& inches, float& meters, float& centimeters);
        
float convert(float& feet, float& inches, float& meters , float& centimeters);

void givotpt(float feet, float inches, float meters, float centimeters);

int main(){
        float feet, inches, meters, centimeters;
        char check;

        do {
            getinpt(feet, inches, meters, centimeters);
            convert(feet, inches, meters, centimeters);
            givotpt(feet, inches, meters, centimeters);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;
        }while(check == 'Y' || check == 'y');
        return 0;
}

void getinpt(float& feet, float& inches, float& meters, float& centimeters){ 
    cout<<"Enter feet to convert it to meters: ";
    cin>>feet;
    cout<<endl<<"Enter inches to convert it to centimeters: ";
    cin>>inches;
}

float convert(float& feet, float& inches, float& meters, float& centimeters){
    meters = feet * 0.3048;
    centimeters = inches * 2.54;
    return meters, centimeters;
}

void givotpt(float feet, float inches, float meters, float centimeters){
    cout<<feet<<" feet " <<inches<<" inches is equivalent to "<<meters
            <<" meters "<<centimeters<<" centimeters"<<endl;
}