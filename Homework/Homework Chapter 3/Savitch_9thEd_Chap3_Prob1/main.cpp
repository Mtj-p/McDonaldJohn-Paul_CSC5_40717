/* 
 * File:   Savitch_9thEd_Chap3_Prob1
 * Author: jaymc_000
 * Purpose: Rock Papers Scissors between two users 
 * Created on January 19, 2015, 7:58 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string choice1;
    string choice2;
    string choice3;
    cout<<"Would you like to play a game? \"Yes\" or \"No\": ";
    cin>>choice3;
    while (choice3!="No"){ 
        cout<<"This is a two user game of Rock Paper Scissors. User 1 may input\n their choice "
                "first. Please choose \"R\" \"P\" or \"S\""<<endl;
        cout<<"User 1: ";
        cin>>choice1;
        cout<<"User 2: ";
        cin>>choice2;
        if(choice1=="R"&choice2=="P"){
        cout<<"Paper beats rock! User 2 wins!"<<endl;
        cout<<"Would you like to play again? ";
        cin>>choice3;
        }if(choice1=="R"&choice2=="S"){
            cout<<"Rock beats scissors! User 1 wins!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="R"&choice2=="R"){
            cout<<"Tie! No winner!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="P"&choice2=="R"){
            cout<<"Paper beats rock! User 1 wins!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="P"&choice2=="P"){
            cout<<"Tie! No winner!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="P"&choice2=="S"){
            cout<<"Scissors beats paper! User 2 wins!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="S"&choice2=="R"){
            cout<<"Rock beats scissors! User 2 wins!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="S"&choice2=="P"){
            cout<<"Scissors beats paper! User 1 wins!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="S"&choice2=="S"){
            cout<<"Tie! No winner!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="r"&choice2=="p"){
            cout<<"Paper beats rock! User 2 wins!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="r"&choice2=="s"){
            cout<<"Rock beats scissors! User 1 wins!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="r"&choice2=="r"){
            cout<<"Tie! No winner!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="p"&choice2=="r"){
            cout<<"Paper beats rock! User 1 wins!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="p"&choice2=="p"){
            cout<<"Tie! No winner!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="p"&choice2=="s"){
            cout<<"Scissors beats paper! User 2 wins!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="s"&choice2=="r"){
            cout<<"Rock beats scissors! User 2 wins!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="s"&choice2=="p"){
            cout<<"Scissors beats paper! User 1 wins!"<<endl;
            cout<<"Would you like to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }if(choice1=="s"&choice2=="s"){
            cout<<"Tie! No winner!"<<endl;
            cout<<"Do you want to play again? \"Yes\" or \"No\":  ";
            cin>>choice3;
        }
    }
    cout<<"Have a nice day!";
             
    return 0;
}

