/* 
 * File:   main.cpp
 * Author: jaymc_000
 * Purpose: Find Buoyancy
 * Created on January 20, 2015, 5:28 PM
 */

#include <iostream>

using namespace std;

const float WTRLBS=62.4;//lbs/ft^3
const float PI=3.1415;//pi to 4 digits

int main(int argc, char** argv) {
    //declare variables
    float weight;//in pounds
    float radius;//in feet
    float volume;//volume of the sphere
    float buoyancy;//the buoyancy of the sphere
    cout<<"I can find the buoyant force on a sphere.\n";
    cout<<"Please input the weight of your sphere in pounds, and then\n"
            "the radius of your sphere in feet. I can determine if the sphere\n"
            "will sink or float in water.\n";
    cout<<"The weight: ";
    cin>>weight;
    cout<<"The radius: ";
    cin>>radius;
    volume=(4/3)*PI*radius*radius*radius;
    buoyancy=volume*WTRLBS;
    if(buoyancy>=weight){
        cout<<"The sphere will float!\n"<<endl;
    }else if(buoyancy<weight){
        cout<<"The sphere will sink."<<endl;
    }
    cout<<"Have a nice day.";

    return 0;
}

