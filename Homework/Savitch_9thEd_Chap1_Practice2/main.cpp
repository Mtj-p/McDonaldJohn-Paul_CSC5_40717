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
    int numpods, peaspod, totpeas;
    cout<<"Hello.\n";
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the number of pods:\n";
    cin>>numpods;
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peaspod;
    totpeas=numpods*peaspod;
    cout<<"If you have ";
    cout<<numpods;
    cout<<" pea pods\n";
    cout<<"and ";
    cout<<peaspod;
    cout<<" peas in each pod, then\n";
    cout<<"you have ";
    cout<<totpeas;
    cout<<" peas in all the pods.\n";
    cout<<"Good-bye.\n";
    return 0;
}