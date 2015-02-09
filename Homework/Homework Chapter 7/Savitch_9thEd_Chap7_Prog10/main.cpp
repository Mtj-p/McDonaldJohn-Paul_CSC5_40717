/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on February 8, 2015, 6:38 PM
 */

#include <iostream>
#include <string>
using namespace std;

void prntAry(const int [],int,int);

int main(int argc, char** argv) {
    cout<<"This game requires two players: Player X and Player O.\n"
            "Player X and Player O take turns replacing numbers on a\n"
            "3x3 board with their respective letter until one of the players\n"
            "achieves 3 in a row. This game will not score itself, so it is\n"
            "up to the players to end the game when they wish. by inputting a\n"
            "number larger than 9.\n";
    int replacement;
    int count=1;
    int player1;
    int player2;
    int array[9]={1,2,3,4,5,6,7,8,9};
    prntAry(array,9,3);
    do{
        cout<<"Player X where would you like to place an X? ";
        cin>>player1;
        array[player1-1]='X';
        prntAry(array,9,3);
        cout<<"Player 0 where would you like to place an 0? ";
        cin>>player2;
        array[player2-1]='0';
        prntAry(array,9,3);
    }while(player2<10&&player1<10);
    cout<<"Thanks for playing!"<<endl;
    return 0;
}

void prntAry(const int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        if(a[i]==88){ 
            
            cout<<"X"<<" ";
        }
        if(a[i]==48){ 
            cout<<"O"<<" ";
        }
        else if(a[i]!=88){ 
            cout<<a[i]<<" ";
        }
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
