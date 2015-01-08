/* 
 * File:   Savitch_9thEd_Proj1_Chap1_AdditionandMultiplication
 * Author: McDonald, John-Paul
 * Purpose: Add and Multiple two user inputed values
 *
 * Created on January 8, 2015, 8:40 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float alpha;
    float beta;
    float charlie;
    float delta;
    cout<<"Input two variables. I will add and multiply them for you.\n";
    cin>>alpha>>beta;
    cin.ignore();
    charlie=alpha+beta;
    delta=alpha*beta;
    cout<<alpha<<"+"<<beta<<"="<<charlie<<endl;
    cout<<alpha<<"x"<<beta<<"="<<delta<<endl;
    cout<<"You're welcome.\n";
            

    return 0;
}
