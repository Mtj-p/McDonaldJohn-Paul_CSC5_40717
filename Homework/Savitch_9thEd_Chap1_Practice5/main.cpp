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
    unsigned int width, height, tlength; //three variable lengths
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the width of the fence.(in feet):\n"; //prompting for input
    cin>>width; //input
    cout<<"Enter the height of the fence.(in feet):\n";//prompting for input
    cin>>height;//input
    tlength=width*height;//actual multiplication of w*j
   
    /*I separated the next few commands into a serious of if/else statements
     * to account for any possible grammar errors that might occur with
     * regards to discrepancy between one foot or multiple feet.
     */
   
    if(width==1){ //in the case of a one foot width
        cout<<"If you have a width of one foot\n";
    }
    else if (width>1) { //any other case
        cout<<"If you have a width of ";
        cout<<width;
        cout<<" feet\n";
    }
    if(height==1){//in the case of a one foot height
        cout<<"and a height of one foot, then \n";
    }
    else if(height>1){//any other case
        cout<<"and a height of ";
        cout<<height;
        cout<<" feet, then \n";
    }
    if(tlength==1){//if both the height and width are 1
        
        cout<<"you need a square foot of fencing.";
    }
    else if (tlength>1){//any other case
    cout<<"you need ";
    cout<<tlength;
    cout<<" feet of fencing.\n";
    }
    return 0;
}