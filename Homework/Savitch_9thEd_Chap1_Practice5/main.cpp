/* 
 * File:   Savitch_9thEd_Chap1_Practice Problem 2
 * Author: McDonald, John-Paul
 *
 * 
 * 
 * Created on January 8, 2015, 10:15 AM
 */

#include <iostream>

using namespace std;

int main( ){
    unsigned int width, height, tlength;
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the width of the fence.(in feet):\n";
    cin>>width;
    cout<<"Enter the height of the fence.(in feet):\n";
    cin>>height;
    tlength=width*height;
    if(width==1){
        cout<<"If you have a width of one foot\n";
    }
    else if (width>1) {
        cout<<"If you have a width of ";
        cout<<width;
        cout<<" feet\n";
    }
    if(height==1){        
        cout<<"and a height of one foot, then \n";
    }
    else if(height>1){
        cout<<"and a height of ";
        cout<<height;
        cout<<" feet, then \n";
    }
    if(tlength==1){
        
        cout<<"you need a square foot of fencing.";
    }
    else if (tlength>1){
    cout<<"you need ";
    cout<<tlength;
    cout<<" feet of fencing.\n";
    }
    return 0;
}