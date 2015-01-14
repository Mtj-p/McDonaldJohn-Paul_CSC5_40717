/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 *
 * Created on January 14, 2015, 10:35 AM
 */
//system libraries
#include <iostream>
using namespace std;
//user libraries
//global constants
const float LBSTOGRAMS=453.59237;//lbs to grams conversion
//function prototypes
//execution begins
int main(int argc, char** argv) {
    //declaration of independent variables
    const float CONC=1e-3f;//sweetener concentration
    float kperson, wtdperslbs, wtdpersgrams;
    float wtmouse=3.5e1f;//weight of mouse in grams
    float wtcoke =3.5e2f;//weight of coke in grams
    float kmouse=5.0f;//grams to kill mouse
    int ncans;
    //input desired weight of a person
    cout<<"Input your desired weight in pounds"<<endl;
    cout<<"Format the input as a float"<<endl;
    cin>>wtdperslbs;
    //convert lbs to grams
    wtdpersgrams=wtdperslbs*LBSTOGRAMS;
    //calculation
    kperson=kmouse/wtmouse*wtdpersgrams;
    ncans=kperson/wtcoke/CONC;
    //Output the limit of what you can drink
    cout<<"Number of cans of diet coke";
    cout<<" that will kill you = "<<ncans<<endl;
    //exit stage right(!)
    return 0;
}

