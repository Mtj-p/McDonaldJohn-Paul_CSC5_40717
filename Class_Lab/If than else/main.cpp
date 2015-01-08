/* 
 * If than else
 * McDonald, John-Paul
 * Purpose: Practicing If/Than/Else statements
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    short age; //declare variable
    cout<<"Please input your age: "; //asking for age
    cin>>age;                        //command age
    cin.ignore();                    //throw away blank answers
    if ( age < 100 ) {               //if age is less than 100
        cout<<"You are pretty young!\n";
    }
    else if (age == 100) {
        cout<<"You are old!\n";
    }
    else {
        cout<<"You are really old!!\n";
    }
    cin.get();              
}
