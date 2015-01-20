/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul 
 * 
 * Created on January 20, 2015, 10:27 AM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries; Global Constants; Function Prototype; Execution

int main(int argc, char** argv) {
    //Declare Variables
    char thPick=23;
    bool computer=false;
    short nPckRmv;
    
    //Playing the game
    do{
        //Designate the player
        computer=false;
        //Ask player how many tooth picks to remove
        do{
            //Ask player how many tooth picks to remove
            cout<<"There are "<<static_cast<int>(thPick)<<" toothpicks remaining.\n";
            cout<<"How many tooth picks do you want to remove?"<<endl;
            cout<<"Choose 1, 2, or 3.\n";
            cin>>nPckRmv;
        }while(nPckRmv<=0||nPckRmv>=4||nPckRmv>thPick);
        //Remove the number of toothpicks
        thPick-=nPckRmv;
        //Designate the computer
        computer=true;
        //Utilize logic from the book
        if(thPick>4){
            nPckRmv=4-nPckRmv;
            thPick-=nPckRmv;
            cout<<"The Computer chose to remove: "<<nPckRmv<<" tooth picks."<<endl;                    
        }else if(thPick>=2&&thPick<=4){
            thPick=1;
        }else if(thPick==1){
            thPick=0;
            computer=false;
        }
    }while(thPick>1);
    
    //Output the winner and loser
    if(computer){
        cout<<"Computer wins, you lose."<<endl;
    }else{
        cout<<"Computer loses, we win."<<endl;
    }
    
    
    //Exit the game
    
    
    return 0;
}

