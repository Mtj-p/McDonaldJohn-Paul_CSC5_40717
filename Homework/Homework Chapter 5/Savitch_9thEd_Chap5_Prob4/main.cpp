/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on January 26, 2015, 9:29 PM
 */

#include <iostream>
using namespace std;

void getinpt1(float& feet, float& inches, float& meters, float& centimeters);
        
float convert1(float& feet, float& inches, float& meters , float& centimeters);

void givotpt1(float feet, float inches, float meters, float centimeters);

void getinpt(float& meters, float& centimeters, float& feet, float& inches);
        
float convert(float& meters, float& centimeters, float& feet, float& inches);

void givotpt(float meters, float centimeters, float feet, float inches);

int main (){
    float meters, centimeters, feet, inches;
    char check;
    do{
        int choice = 0;
        cout<<"Select a conversion method please: \n"
                "1. Feet/inches to Meters/centimeters\n"
                "2. Meters/centimeters to Feet/inches\n";
        cin>>choice;
        if (choice==1){
            getinpt1(feet, inches, meters, centimeters);
            convert1(feet, inches, meters, centimeters);
            givotpt1(feet, inches, meters, centimeters);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;
        }else{
            getinpt(meters, centimeters, feet, inches);
            convert(meters, centimeters, feet, inches);
            givotpt(meters, centimeters, feet, inches);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;            
        }
                       
    }while(check == 'Y' || check == 'y'); 
}
void getinpt1(float& feet, float& inches, float& meters, float& centimeters){ 
    cout<<"Enter feet to convert it to meters: ";
    cin>>feet;
    cout<<endl<<"Enter inches to convert it to centimeters: ";
    cin>>inches;
}

float convert1(float& feet, float& inches, float& meters, float& centimeters){
    meters = feet * 0.3048;
    centimeters = inches * 2.54;
    return meters, centimeters;
}

void givotpt1(float feet, float inches, float meters, float centimeters){
    cout<<feet<<" feet " <<inches<<" inches is equivalent to "<<meters
            <<" meters "<<centimeters<<" centimeters"<<endl;
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