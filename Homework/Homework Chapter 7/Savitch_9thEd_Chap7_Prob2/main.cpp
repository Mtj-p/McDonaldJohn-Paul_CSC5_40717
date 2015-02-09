/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on February 8, 2015, 4:21 PM
 */

#include <iostream>

using namespace std;

int countNum2s(int [],int); 

int main(int argc, char** argv) {
    int totarray;
    int namearray[10000];
    int count3=0;
    int count4=1;
    int num2s;
    cout<<"I can determine the number of 2s in an array of inputs.\n"
            "Please input how many entires you'll input followed by an array"
            "of integers and I can find how many '2's you've inputed.\n";
    cout<<"Total integer entries: ";
    cin>>totarray;
    for(int i=totarray-1;i>=0;i--){
        cout<<"Integer "<<count4<<": ";
        cin>>namearray[count3];
        count4++;
        count3++;
    }
    num2s=countNum2s(namearray,totarray);
    cout<<"The total number of 2s in your array is/are: "<<num2s<<".";
    return 0;
}

int countNum2s(int c[],int d){
    int countnum=0;
    for(int i=d-1;i>=0;i--){
        if (c[i]==2){
            countnum++;
        }
    }
    return countnum;
}