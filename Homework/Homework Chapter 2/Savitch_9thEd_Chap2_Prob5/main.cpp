/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 * Purpose:Fixing volume computation
 *
 * Created on January 14, 2015, 11:40 AM
 */

#include <iostream>
using namespace std;

const float PI=3.1415;//pie
int main(){
    float radius, vm;
    cout<<"Enter radius of a sphere."<<endl;
    cin>>radius;
    vm=(4.0/3.0)*PI*radius*radius*radius;
    cout<<"The volume is: "<<vm<<endl;
    return 0;
}