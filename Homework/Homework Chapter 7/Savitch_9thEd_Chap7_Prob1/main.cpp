/* 
 * File:   Chap 7 Savitch
 * Author: jaymc_000
 *
 * Created on February 8, 2015, 3:40 PM
 */

#include <iostream>

using namespace std;

bool firstLast2 (int [],int);

int main(int argc, char** argv) {
    //Declare Variables
    bool isit2;
    int count=1;
    int count2=0;
    int arySize=0;
    int usrAray[10000];
    cout<<"I can find if your 2 is at the beginning or end.\n";
    cout<<"I will soon have you input an array of integers, and then\n"
            "find if the 2 is at the beginning or the end.\n"
            "Please tell me how many total integers you're inputting: ";
    cin>>arySize;
    cout<<"Now please input your array's integers.\n";
    for(int i=arySize;i>0;i--){
        cout<<"Integer "<<count<<": ";
        cin>>usrAray[count2];
        count++;
        count2++;
    }
    isit2=firstLast2(usrAray,arySize);
    if(isit2==true){
        cout<<"Either the first or last digit is 2.\n";
    }
    else if(isit2==false){
        cout<<"Neither the first nor last digit are 2.\n";
    }
    return 0;
}

bool firstLast2 (int a[],int b){
    if(a[0]==2){
        return true;
    }
    if(a[b-1]==2){
        return true;
    }
    else if(a[0]!=2||a[b-1]!=2){
        return false;
    }
}