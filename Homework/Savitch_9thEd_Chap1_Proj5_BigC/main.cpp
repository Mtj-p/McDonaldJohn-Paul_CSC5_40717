/* 
 * File:   Savitch_9thEd_Chap1_Proj5_BigC
 * Author: McDonald, John-Paul
 * Purpose: Big C w/ variables
 *
 *
 * Created on January 8, 2015, 9:27 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    char c; //character input
    //prompt for input
    cout<<"This program will output a large block letter C\n";
    cout<<"Based on the character you input.\n";
    cin>>c;
    cout<<endl;
    cout<<endl;
    cout<<"      "<<c<<c<<c<<c<<c<<"    "<<endl;
    cout<<"  "<<c<<c<<c<<"       "<<c<<c<<c<<endl;
    cout<<" "<<c<<c<<"           "<<c<<c<<endl;
    cout<<" "<<c<<"             "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<"             "<<c<<endl;
    cout<<" "<<c<<c<<"           "<<c<<c<<endl;
    cout<<"  "<<c<<c<<c<<"       "<<c<<c<<c<<endl;
    cout<<"      "<<c<<c<<c<<c<<c<<"    "<<endl;
    return 0;
}

