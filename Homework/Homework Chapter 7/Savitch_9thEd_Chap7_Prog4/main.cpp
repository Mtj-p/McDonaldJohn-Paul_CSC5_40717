/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on February 8, 2015, 7:58 PM
 */

#include <iostream>
#include <cmath>

using namespace std;

float stdDevi(float [],int);

int main(int argc, char** argv) {
    float x[100];
    float mean,stddevia;
    int i,n;
    cout<<"Enter n value:";
    cin>>n;
    cout<<"Enter values separated by spaces:"<<endl;
    for(i=0;i<n;i++){
        cin>>x[i];
    }
    stddevia=stdDevi(x,n);
    cout<<"The Standard Deviation is: "<<stddevia<<endl;
    return 0;
}

float stdDevi(float x[],int n){
    float std=0;
    float mean=0;
    for(int i=0;i<n;i++){
        mean=mean+x[i];
        mean=mean/n;
    }
    for(int i=0;i<n;i++){
        std=std+pow((x[i]-mean),2);
        std=std/n;
        std=sqrt(std);
        return std;
    }
}