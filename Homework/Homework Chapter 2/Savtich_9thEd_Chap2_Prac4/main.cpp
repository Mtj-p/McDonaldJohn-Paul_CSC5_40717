/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 * Purpose: Mad Lib
 * Created on January 14, 2015, 8:11 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    string instname, yourname, food, number, adject, color, animal;
    cout<<"We're playing a game of Mad Lib. Please input the...\n";
    cout<<"Name of your instructor: ";
    getline(cin, instname);
    cout<<"Your name: ";
    getline(cin, yourname);
    cout<<"A food: ";
    getline(cin, food);
    cout<<"A number between 100 and 120: ";
    getline(cin, number);
    cout<<"An adjective: ";
    getline(cin, adject);
    cout<<"A color: ";
    getline(cin, color);
    cout<<"And an animal: ";
    getline(cin, animal);
    cout<<endl<<endl;
    cout<<"Dear "<<instname<<","<<endl<<endl;
    cout<<"I am sorry that I am unable to turn in"
            "my homework at this time. First, I ate a rotten "<<food
            <<",\nwhich made me turn "<<color<<" and extremely ill. I came"
            " down with a fever of "<<number<<". Next, my "<<adject<<"\npet "
            <<animal<<" must have smelled the remains of the "<<food<<" on my"
            " homework, because he ate it. \nI am currently rewriting my homework"
            " and hope you will accept it late."<<endl<<endl;
    cout<<"Sincerely,\n";
    cout<<yourname;
            
    
  
    
    

    return 0;
}

