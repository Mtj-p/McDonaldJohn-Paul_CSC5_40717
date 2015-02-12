/* 
 * File:   Bulls and Cleots
 * Author: jaymc_000
 * Purpose: Similar to Mastermind; Bulls and Cleots is a number guessing game.
 * I choose this as it was a simple text based game with a lot of meat to the code
 * I really had to search around for different ways of implementing functions,
 * as this project was not as easy as I originally thought.
 * 
 */

//System Libraries
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void cowsandcleots();
bool contdups(string);
void loghighscore(int &);
void marksort(int [],int n);
void clearhs ();
void adddefhs ();

//Start of Execution
int main(){
    //Declaration of Arrays and Variables
    vector<int> highscore;
    vector<int> prevhighscore;
    int arraycomp[100][2];
    string dowhile;
    string line;
    int count1=0;
    int count2=0;
    //Open File
    ifstream myfile;
    myfile.open("highscore.txt");
    while (getline(myfile,line)){
        //Declare Variable
        int numline1 = atoi(line.c_str());
        //Push Variable to Vector
        prevhighscore.push_back(numline1);
        //Count number of pushes for array conversion sort
        count1++;
    }
    //Close File
    myfile.close();
    //Point array at vector
    int* prevhigharray=&prevhighscore[0];
    //Sort array
    marksort(prevhigharray,count1);
    //Put sorted vector in 2d array
    for(int i=0;i<count1;i++){
        arraycomp[i][1]<<prevhigharray[i];
    }
    //Intro cout
    cout << "Welcome to bulls and cows! A text based game similar "
            "to mastermind.\nThe goal is to input various "
            "combinations of 4 digits until you get\nfour bulls. "
            "You get a bull whenever you have the right number\nin the"
            " right place."
            "You get a cow whenever you have the right number but "
            "the wrong\nplace. The game won't end until you guess"
            " the right number, or if you\ntake more than 9 guesses.\n"
            "\n \n"
            "*HINT* The numbers will not be repeated; each "
            "number is unique.\n"
            "\n \n"
            "Do you want to play? (Y/N) ";
    //Confirm wants to play
    string answer;
    getline(cin,answer);
    //if they don't want to
    if (answer=="n"||answer=="N"){
        cout << "Ok. Goodbye.\n";
        return EXIT_SUCCESS;
    }
    //if they don't not want to
    else{
        //enter game function
        do{
           cowsandcleots();
           cout << "Another game? (Y/N) ";
           getline(cin,dowhile);
        }while(dowhile!="N"); //leave when ready
        //open file
        myfile.open("highscore.txt");
        while (getline(myfile,line)){
            //Declare variable
            int numline = atoi(line.c_str());
            //Push int into vector
            highscore.push_back(numline);
            //Count number of ints pushed into vector
            count2++;
        }
        //close file
        myfile.close();
        //point array at vector
        int* higharray=&highscore[0];
        //sort array
        marksort(higharray,count2);
        //push sorted array into 2nd column of 2d vector
        for(int i=0;i<count1;i++){
            arraycomp[i][2]<<higharray[i];
        }
        //let user know current high scores
        cout<<"The Top 5 High Scores for this game are currently:\n";
        cout<<"Top Score:                   "<<highscore[0]<<endl;
        cout<<"Second Highest Score:        "<<highscore[1]<<endl;
        cout<<"Third Highest Score:         "<<highscore[2]<<endl;
        cout<<"Fourth Highest Score:        "<<highscore[3]<<endl;
        cout<<"Fifth Highest Score:         "<<highscore[4]<<endl;
        //initiate switch variable
        int swvtcharray=0;
        //if highscore is new
        if(arraycomp[0][2]>arraycomp[0][1]||
                arraycomp[1][2]>arraycomp[1][1]||
                arraycomp[2][2]>arraycomp[2][1]||
                arraycomp[3][2]>arraycomp[3][1]||
                arraycomp[4][2]>arraycomp[4][1]){
            //set switch to 1
            swvtcharray=1;
        }
        switch(swvtcharray){
            //if switch case 1 cout congratz
            case 1:cout<<"Congratulations on your new high score!"
                    <<endl;break;
                    //otherwise break
             default: break;
        }
        //ask if high scores to be cleared
        cout<<"Would you like to clear the high score "
                "list before you go? (Y/N)"<<endl;
        cin>>answer;
        //if affirmative then clear high scores
        if (answer=="y"||answer=="Y"){
            //delete all high scores
            clearhs();
            //append the rest
            adddefhs();
            adddefhs();
            adddefhs();
            adddefhs();
        }
    }
}

//Game Function Begins
void cowsandcleots(){
    //Declare Variables
    int count=0;
    typedef string::size_type index;
    //Load String with Symbols
    string symbols="0123456789";
    //Select first Four Symbols
    unsigned int const selection_length=4;
    //Random Shuffle Symbols
    random_shuffle(symbols.begin(), symbols.end());
    //Picks first 4 of shuffled
    string selection = symbols.substr(0, selection_length);
    //Declare input variable
    string guess;
    //ask for guess
    while (cout<<"Your guess? ",getline(cin, guess)){
        //if guess is too big or has multiples of a number output
            //not a valid guess
        if (guess.length()!=selection_length||guess.find_first_not_of(symbols)
                !=string::npos||contdups(guess)){
          cout<<guess<<" is not a valid guess!";
          continue;
        }
        //Declare Variables
        unsigned int bulls = 0;
        unsigned int cows = 0;
        //Loop until selection length is met
        for (index i = 0; i != selection_length; ++i){
                index pos = selection.find(guess[i]);
                if (pos == i)
                    //if the correct number and location give a bull
                      ++bulls;
                else if (pos != string::npos)
                    //if just the correct number give a cow
                      ++cows;
        }
        //Cout bulls and cows
        cout << bulls << " bulls, " << cows << " cows.\n";
        //add count for guess
        count++;
        //Cout number of guesses
        cout<<"Number of guesses: "<<count<<endl;
        //if they get it number right -> cout congratz
        if (bulls == selection_length){
                cout << "Congratulations! You have won!\n";
                loghighscore(count);
          return;
        }
        //if 9 or more guesses end game
        if (count>=9){
            cout<<"Game over! You've run out of guesses!"<<endl;
            return;
        }
    }
}

//Begin contdups function
bool contdups(string duplis){
    //sort string
    sort(duplis.begin(), duplis.end());
    //if repeats return true
    return adjacent_find(duplis.begin(),duplis.end())!=duplis.end();
}


//Begin loghighscore function
void loghighscore(int &count){
    //Open file
    ofstream myfile;
    myfile.open("highscore.txt",ios_base::app);//appends file
    //input count
    myfile << count;
    //input endl
    myfile << "\n";
    //Close File
    myfile.close();
}

//Begin marksort function
void marksort(int a[],int n){
    //Apply swapMin from beginning to end
    for(int i=0;i<n-1;i++){
        //Swap elements at the top of the list
        //with the minimum
        for(int j=i+1;j<n;j++){
            //Swap individual elements with smaller
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
    
//begin clearhs function
void clearhs (){
    //Declare Variable set to 9
    int clearhs=9;
    //Open File
    ofstream myfile;
    myfile.open("highscore.txt",ios::trunc);
    //Replace file with single 9
    myfile<<clearhs;
    myfile << "\n";
    //Close File
    myfile.close();
    //Cout that file has been cleared
    cout << "The high scores have been cleared.";
}

//Begin adddefhs
void adddefhs (){
    //Declare Variable set to 9
    int adddefhs=9;
    //Open File
    ofstream myfile;
    //append 9s to file
    myfile.open("highscore.txt",ios_base::app);
    myfile << "9";
    myfile << "\n";
    //Close File
    myfile.close();
}
