/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on January 26, 2015, 10:11 PM
 */
#include <iostream>
using namespace std;
void getinpt3(float& kilograms, float& grams, float& pounds, float& ounces);
        
float convert3(float& kilograms, float& grams, float& pounds, float& ounces);

void givotpt3(float& kilograms, float& grams, float& pounds, float& ounces);

void getinpt2(float& pounds, float& ounces, float& kilograms, float& grams);
        
float convert2(float& pounds, float& ounces, float& kilograms, float& grams);

void givotpt2(float pounds, float ounces, float kilograms, float grams);

int main(){
        float kilograms,grams,pounds,ounces;
        char check;
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