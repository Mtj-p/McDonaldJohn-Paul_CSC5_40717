/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on February 8, 2015, 4:55 PM
 */

#include <iostream>
using namespace std;

void swapFrontBack (int [],int);
void swap(int &,int &);


int main(int argc, char** argv) {
    int count5=1;
    int count6=0;
    int arySize;
    int namearray[10000];
    cout<<"I can swap the first and last numbers of an array. Try inputting\n"
            "integers into an array. Start by telling me how many integers\n"
            "you would like to input.\n";
    cout<<"Number of total integers: ";
    cin>>arySize;
    if(arySize>1){
        count6=arySize-1;
        for(int i=arySize-1;i>=0;i--){
            cout<<"Integer "<<count5<<": ";
            cin>>namearray[count6];
            count5++;
            count6--;
        }
    }if(arySize<=1){
        cout<<"Your array is not going to be big enough to swap.";
    }
    swapFrontBack(namearray,arySize);
    return 0;
}

void swapFrontBack (int a[],int b){
    swap(a[b-1],a[0]);
    for (int i = b - 1; i >= 0; i--) 
    cout << a[i] <<" ";
}

void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

