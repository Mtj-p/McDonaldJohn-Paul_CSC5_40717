/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on January 26, 2015, 10:19 PM
 */

#include <iostream>
using namespace std;

void getinpt(float& meters, float& centimeters, float& feet, float& inches);
float convert(float& meters, float& centimeters, float& feet, float& inches);
void givotpt(float meters, float centimeters, float feet, float inches);
void getinpt1(float& feet, float& inches, float& meters, float& centimeters);
float convert1(float& feet, float& inches, float& meters , float& centimeters);
void givotpt1(float feet, float inches, float meters, float centimeters);
void getinpt2(float& pounds, float& ounces, float& kilograms, float& grams);
float convert2(float& pounds, float& ounces, float& kilograms, float& grams);
void givotpt2(float pounds, float ounces, float kilograms, float grams);
void getinpt3(float& kilograms, float& grams, float& pounds, float& ounces);
float convert3(float& kilograms, float& grams, float& pounds, float& ounces);
void givotpt3(float& kilograms, float& grams, float& pounds, float& ounces);

int main (){
    float kilograms,grams,pounds,ounces;
    float meters, centimeters, feet, inches;
    char check;
    int svitch;
    cout<<"Would you like to convert lengths or weights?\n"
            "0. Repeat Menu\n"
            "1. Lengths\n"
            "2. Weights\n"
            ">2 Exit Function\n";
    cin>>svitch;
    while(svitch<=2){
        switch (svitch){
            case 0:{
                cout<<"Would you like to convert lengths or weights?\n"
                "0. Repeat Menu\n"
                "1. Lengths\n"
                "2. Weights\n"
                ">2 Exit Function\n";
                cin.ignore();
                cin>>svitch;
                break;
            }case 1:{
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
                cout<<"In regards to the menu, where would you like to go? ";
                cin>>svitch;
                break;
            }case 2:{
                do{
                    int choice = 0;
                    cout<<"Select a conversion method please: \n"
                            "1. Pounds/Ounces to Kilograms/grams\n"
                            "2. Kilograms/grams to Pounds/Ounces\n";
                    cin>>choice;
                    if (choice==1){
                        getinpt2(pounds,ounces,kilograms,grams);
                        convert2(pounds,ounces,kilograms,grams);
                        givotpt2(pounds,ounces,kilograms,grams);
                        cout<<"Repeat calculation? (Y/N)"<<endl;
                        cin>>check;
                    }else{
                        getinpt3(kilograms,grams,pounds,ounces);
                        convert3(kilograms,grams,pounds,ounces);
                        givotpt3(kilograms,grams,pounds,ounces);
                        cout<<"Repeat calculation? (Y/N)"<<endl;
                        cin>>check;        
                    }

                }while(check == 'Y' || check == 'y');
                cout<<"In regards to the menu, where would you like to go? ";
                cin>>svitch;
                break;
            }
        }
    } cout<<"Have a nice day. :)";
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

void getinpt2(float& pounds, float& ounces, float& kilograms, float& grams){ 
    cout<<"Enter pounds to convert it to kilograms: ";
    cin>>pounds;
    cout<<endl<<"Enter ounces to convert it to grams: ";
    cin>>ounces;
}

float convert2(float& pounds, float& ounces, float& kilograms, float& grams){
    kilograms = pounds / 2.2046;
    grams = ounces/.035274;
    return kilograms, grams;
}

void givotpt2(float pounds, float ounces, float kilograms, float grams){
    cout<<pounds<<" pounds "<<ounces<<" ounces is equivalent to "
            <<kilograms<<" kilograms and "<<grams<<" grams"<<endl;
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