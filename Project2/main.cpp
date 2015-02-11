/* 
 * File:   Bulls and Cleots
 * Author: jaymc_000
 * Purpose: Similar to Mastermind; Bulls and Cleots is a number guessing game.
 * I choose this as it was a simple text based game with a lot of meat to the code
 * I really had to search around for different ways of implementing functions,
 * as this project was not as easy as I originally thought.
 * 
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;

void cowsandcleots();
bool contdups(string);
void loghighscore(int);
void heapsort(int [],int);
void downHeap(int [],int,int);

int main(){
    vector<int> highscore;
    vector<int> prevhighscore;
    string dowhile;
    string line;
    int count1=0;
    int count2=0;
    ifstream myfile;
    myfile.open("highscore.txt");
    while (getline(myfile,line)){
        int numline1 = atoi(line.c_str());
        prevhighscore.push_back(numline1);
        count1++;
    }
    myfile.close();
    int* prevhigharray=&prevhighscore[0];
    cout << "Welcome to bulls and cows! A text based game similar to mastermind.\n"
            "The goal is to write input various combinations of 4 digits until you get\n"
            "four bulls. You get a cow whenever you have the right number but the wrong\n"
            "order. The game won't end until you guess the right number, or if you\n"
            "take more than 9 guesses.\n"
            "*HINT* The numbers will not be repeated; each number is unique.\n"
            "Do you want to play? (Y/N) ";
    string answer;
    getline(cin,answer);
    if (answer=="n"||answer=="N"){
        cout << "Ok. Goodbye.\n";
        return EXIT_SUCCESS;
        }
    do{
       cowsandcleots();
       cout << "Another game? (Y/N) ";
       getline(cin,dowhile);
    }while(dowhile!="N");
    myfile.open("highscore.txt");
    while (getline(myfile,line)){
        int numline = atoi(line.c_str());
        highscore.push_back(numline);
        count2++;
    }
    myfile.close();
    int* higharray=&highscore[0];
    heapsort(higharray,count2);
    cout<<"The Top 5 High Scores for this game are currently:\n";
    cout<<"Top Score:                   "<<higharray[0]<<endl;
    cout<<"Second Highest Score:        "<<higharray[1]<<endl;
    cout<<"Third Highest Score:         "<<higharray[2]<<endl;
    cout<<"Fourth Highest Score:        "<<higharray[3]<<endl;
    cout<<"Fifth Highest Score:         "<<higharray[4]<<endl;
}



void cowsandcleots(){
    int count=0;
    typedef string::size_type index;
    string symbols="0123456789";
    unsigned int const selection_length=4;
    random_shuffle(symbols.begin(), symbols.end());
    string selection = symbols.substr(0, selection_length);
    string guess;
    while (cout<<"Your guess? ",getline(cin, guess)){
        if (guess.length()!=selection_length||guess.find_first_not_of(symbols)!=string::npos||contdups(guess)){
          cout<<guess<<" is not a valid guess!";
          continue;
        }
        unsigned int bulls = 0;
        unsigned int cows = 0;
        for (index i = 0; i != selection_length; ++i){
          index pos = selection.find(guess[i]);
          if (pos == i)
            ++bulls;
          else if (pos != string::npos)
            ++cows;
        }
        cout << bulls << " bulls, " << cows << " cows.\n";
        count++;
        cout<<"Number of guesses: "<<count<<endl;
        if (bulls == selection_length){
          cout << "Congratulations! You have won!\n";
          loghighscore(count);
          return;
        }
        if (count>=9){
            cout<<"Game over! You've run out of guesses!"<<endl;
            return;
        }
    }
}

bool contdups(string duplis){
  sort(duplis.begin(), duplis.end());
  return adjacent_find(duplis.begin(),duplis.end())!=duplis.end();
}

void loghighscore(int count){
    ofstream myfile;
    myfile.open("highscore.txt",ios_base::app);
    myfile << count;
    myfile.close();
}

void heapsort(int a[], int as){
     int i;
     for (i = (as/2 -1); i >= 0; --i){
          downHeap(a, i, as-1);
     }

     for (i = as-1; i >= 0; --i){
          int temp;
          temp = a[i];
          a[i] = a[0];
          a[0] = temp;
          downHeap(a, 0, i-1);
     }
}

void downHeap(int a[], int root, int bottom){
     int maxchild, temp, child;
     while (root*2 < bottom){
          child = root * 2 + 1;
          if (child == bottom){
               maxchild = child;
          }
          else{
               if (a[child] > a[child + 1])
                    maxchild = child;
               else
                    maxchild = child + 1;
          }
          if (a[root] < a[maxchild]){
               temp = a[root];
               a[root] = a[maxchild];
               a[maxchild] = temp;
          }
          else return;
          root = maxchild;
     }
}

/*
 * Goals: Add a function that will combine the two arrays together
 * Take the array from that new function, and return it to main
 * create a function that will compare the new array created with "higharray"
 * If new array != higharray; output a thing about congratz on the new highscores
 * should add another 100 lines of codes *fingers crossed*
 */
