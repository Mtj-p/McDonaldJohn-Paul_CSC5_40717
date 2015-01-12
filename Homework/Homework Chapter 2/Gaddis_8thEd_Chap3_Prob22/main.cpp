/* 
 * File:   Gaddis_8thEd_Chap3_Prob22
 * Author: McDonald, John-Paul
 * Purpose: Utilize cmath functions sin,cos,& tan
 * Created on January 12, 2015, 10:54 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>
#include <cmath>
#include <iomanip>

using namespace std;
const float PIDIV4 = atan(1);  //Pi
const float CNVDGRD =PIDIV4/45;//conversion

int main(int argc, char** argv) {
    //set seed
    srand(static_cast<unsigned int>(time(0)));
    //declare file obj
    ofstream output;
    output.open("SinCosTan.dat");
    //declare vars
    int angDeg=rand()%361-180;
    float angRad=angDeg*CNVDGRD;
    //output angle (console)
    cout<<"Angle in degrees => "<<angDeg<<endl;
    cout<<"Angle in radians => "<<angRad<<endl;
    cout<<fixed<<setprecision(4)<<showpoint;
    //output conversions (console)
    cout<<"sin( "<<angDeg<<") = "<<setw(8)<<sin(angRad)<<endl;
    cout<<"cos( "<<angDeg<<") = "<<setw(8)<<cos(angRad)<<endl;
    cout<<"tan( "<<angDeg<<") = "<<setw(8)<<tan(angRad)<<endl;
    //output angle (txt file)
    output<<"Angle in degrees => "<<angDeg<<endl;
    output<<"Angle in radians => "<<angRad<<endl;
    output<<fixed<<setprecision(4)<<showpoint;
    //output conversions (txt file)
    output<<"sin( "<<angDeg<<") = "<<setw(8)<<sin(angRad)<<endl;
    output<<"cos( "<<angDeg<<") = "<<setw(8)<<cos(angRad)<<endl;
    output<<"tan( "<<angDeg<<") = "<<setw(8)<<tan(angRad)<<endl;
    output.close();
    return 0;
}

