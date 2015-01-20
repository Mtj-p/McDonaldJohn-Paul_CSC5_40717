/* 
 * File:   Savitch_9thEd_Chap3_Prob34
 * Author: jaymc_000
 * Purpose: Astrology Chart
 * Created on January 19, 2015, 9:22 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char** argv) {
    cout<<"This program can find any prime number between 3 and 100.\n";
    int n=3;
    bool prime;
    while (n<=100){
        prime = true;
        for (int i=2; i<n; i++){
            if(n%i == 0){
                prime = false;
                break;
            }
        }
        if (prime == true){
            cout<< n << endl;
        }
        n++;
    }
    return 0;
}
