/* 
 * File:   Arab to Roman Numerals
 * Author: McDonald, John-Paul
 * Purpose: converts conventional numbers to roman numerals
 * Created on January 20, 2015, 11:34 AM
 */

#include <iostream>


using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    unsigned short number;
    //Prompt the user
    cout<<"Input a number between 1000 and 3000"<<endl;
    cin>>number;
    //Determine the number of 1000s
    char thousands=(number-number%1000)/1000;
    //Output the thousands in Roman Numerals
    switch(thousands){
        case 3: cout<<"M";
        case 2: cout<<"M";
        default:cout<<"M";              
    }
    //determine the number of 100s
    number-=thousands*1000;
    char hundreds=(number-number%100)/100;
    switch(hundreds){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"CCC";break;
        case 2: cout<<"CC";break;
        case 1: cout<<"C";break;
        case 0: break;
    }
    number-=hundreds*100;
    char tens=(number-number%10)/10;
    switch(tens){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"X";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"XXX";break;
        case 2: cout<<"XX";break;
        case 1: cout<<"X";break;
        case 0: break;
    }
    number-=tens*100;
    char ones=number;
    switch(ones){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"III";break;
        case 2: cout<<"II";break;
        case 1: cout<<"I";break;
        case 0: break;
    }
    return 0;
}

