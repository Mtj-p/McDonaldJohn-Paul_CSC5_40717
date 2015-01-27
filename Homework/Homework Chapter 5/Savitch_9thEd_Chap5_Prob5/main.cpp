/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on January 26, 2015, 9:55 PM
 */

#include <iostream>
using namespace std;
void getinpt2(float& pounds, float& ounces, float& kilograms, float& grams);
        
float convert2(float& pounds, float& ounces, float& kilograms, float& grams);

void givotpt2(float pounds, float ounces, float kilograms, float grams);

int main(){
        float pounds,ounces,kilograms,grams;
        char check;

        do {
            getinpt2(pounds,ounces,kilograms,grams);
            convert2(pounds,ounces,kilograms,grams);
            givotpt2(pounds,ounces,kilograms,grams);
            cout<<"Repeat calculation? (Y/N)"<<endl;
            cin>>check;
        }while(check == 'Y' || check == 'y');
        return 0;
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
