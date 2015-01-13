/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 * Purpose: Creating Truth Tables
 *
 * Created on January 13, 2015, 9:15 AM
 */
//System Libraries
#include <iostream>
using namespace std;

//User libs, Global constants, function prototypes

//begin execution
int main(int argc, char** argv) {
    //declare 2 boolean variables
    bool X,Y;
    //output heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y (X^Y)^X";
    cout<<" !(X||Y) !X&&!Y !(X&&Y) !X||!Y\n";
    //fill in the first row
    X=true;Y=true;
    cout<<(X?'T':'F')<<" "<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  "<<(!Y?'T':'F')<<"    ";
    cout<<(X&&Y?'T':'F')<<"    "<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"       "<<((X^Y)^Y?'T':'F')<<"       ";
    cout<<((X^Y)^X?'T':'F')<<"      "<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      "<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<endl;
    //second row
    Y=false;
    cout<<(X?'T':'F')<<" "<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  "<<(!Y?'T':'F')<<"    ";
    cout<<(X&&Y?'T':'F')<<"    "<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"       "<<((X^Y)^Y?'T':'F')<<"       ";
    cout<<((X^Y)^X?'T':'F')<<"      "<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      "<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<endl;
    //third row
    X=false;Y=true;
    cout<<(X?'T':'F')<<" "<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  "<<(!Y?'T':'F')<<"    ";
    cout<<(X&&Y?'T':'F')<<"    "<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"       "<<((X^Y)^Y?'T':'F')<<"       ";
    cout<<((X^Y)^X?'T':'F')<<"      "<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      "<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<endl;
    //fourth and final row
    X=false;Y=false;
    cout<<(X?'T':'F')<<" "<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  "<<(!Y?'T':'F')<<"    ";
    cout<<(X&&Y?'T':'F')<<"    "<<(X||Y?'T':'F')<<"   ";
    cout<<(X^Y?'T':'F')<<"       "<<((X^Y)^Y?'T':'F')<<"       ";
    cout<<((X^Y)^X?'T':'F')<<"      "<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"      "<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<endl;
    cout<<endl<<endl<<endl;
    //using the temp swap
    int a;
    int b;
    int temp;
    a=2;
    b=3;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"a becomes "<<a<<endl;
    cout<<"b becomes "<<b<<endl;
    //using the exclusivity mod with g/h
    int g;
    int h;
    g=2;
    h=3;
    cout<<"g = "<<g<<" h = "<<h<<endl;
    g=g^h;
    cout<<"itermediate value of g is "<<g<<endl; //checking the intermediate g value
    h=g^h;
    cout<<"h becomes "<<h<<endl; //checking the intermediate h value
    g=g^h;
    cout<<"g becomes "<<g<<endl;
    //using 
          
    
    
    //Exit stage right!
    
    return 0;
}

