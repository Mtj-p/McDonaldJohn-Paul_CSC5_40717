/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 *
 * Created on January 21, 2015, 11:37 AM
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants
const float G=6.673e-8f;//Weak Force attraction constant cm^3/g/sec^2

//Function Prototype
//F             m1    m2    d
float atrForce(float,float,float);

int main (int argc, char** argv){
    //declare variables, values found off google
    float mEarth = 5.972e24f;//Mass of Earth in Grams
    float wtMark = 188.0f;//Mark in lbs
    float rEarth = 6.371e3;//Centimeters
    mEarth*=1e3f;
    float mMark=wtMark*453.59;
    rEarth*=(1e3f*1e2f);
    float dynes=atrForce(mEarth,mMark,rEarth);
    float lbs=dynes*1/4.44822e5f;
    
    cout << "Mark's weight in dynes : " << dynes << endl;
    cout << "Mark's weight in lbs   : " << lbs << endl;
    
    return 0;
}

float atrForce(float m1,float m2,float d){
    return G*m1*m2/d/d;
}

