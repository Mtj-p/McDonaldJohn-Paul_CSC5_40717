/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 *
 * Created on January 14, 2015, 7:49 AM
 */

#include <iostream>

using namespace std;

//global constants
const int CNVHRMN=60;//Conversion from Hrs to Mins
const int CNVMNSC=60;//Conversion from Min to Secs

int main(int argc, char** argv) {
    //declare vars
    float mph;//miles per hour - on treadmill
    float hpm;//pace as hours per mile
    float fmpm;//miles per minute as a float
    int impm;//miles per minute as an integer
    float fmspm;//fraction left for seconds per mile
    //prompt for the input
    cout<<"I can convert how many minutes per mile you go if you input how many\n";
    cout<<"miles you've gone in an hour."<<endl;
    cout<<"Please input the number of miles you've gone in an hour: ";
    cin>>mph;
    hpm=1/mph;
    fmpm=hpm*CNVHRMN;
    impm=static_cast<int>(fmpm);
    fmspm=(fmpm-impm)*CNVMNSC;
    //output results
    cout<<mph<<" miles per hour = "<<impm<<" minutes "<<fmspm
            << " seconds per mile"<<endl;                   
    return 0;
}

