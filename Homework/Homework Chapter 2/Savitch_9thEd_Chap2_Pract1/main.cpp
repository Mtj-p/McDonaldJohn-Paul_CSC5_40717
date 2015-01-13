/* 
 * File:   Savitch_9thEd_Chap2_Pract1
 * Author: McDonald, John-Paul
 *
 * Created on January 12, 2015, 9:53 AM
 */

#include <iostream>

using namespace std;

const float METRICTON=35273.92; //converts metric tons to ounces  

int main(int argc, char** argv) {
    unsigned short ounce; 
    float crelton;
    float boxes;
    cout<<"How many ounces is your package of breakfast cereal?\n";
    cin>>ounce;
    crelton=ounce/METRICTON;
    cout<<"You've got "<<crelton<<" Metric tons of cereal.\n";
    boxes=METRICTON/ounce;
    cout<<"And you need "<<boxes<<" boxes to have a total metric ton of cereal.\n";
    return 0;
}

