/* 
 * File:   main.cpp
 * Author: jaymc_000
 *
 * Created on January 20, 2015, 10:07 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//User Libraries; 

//Global Constants; //Function Prototype; Execution
//prob 6 constant weight of water and the numerical value of pi
const float WTRLBS=62.4;//lbs/ft^3
const float PI=3.1415;//pi to 4 digits
//Function Prototype; 

//Execution Begins;
int main(int argc, char** argv) {
    int menufunc;
    cout<<"Welcome the the Chapter 3 Homework menu. Problems 1-9 can be found\n"
            "by inputting the a numerical value between 1-9. To view a directory,"
            "input a 0."<<endl;
    cin>>menufunc;
    while(menufunc<11){
        switch(menufunc){
            case 0:{
                cout<<"Menu Directory: "<<endl;
                cout<<"1 -- Savitch_9thEd_Chap3_Prob1"<<endl;
                cout<<"2 -- Savitch_9thEd_Chap3_Prob2"<<endl;
                cout<<"3 -- Savitch_9thEd_Chap3_Prob5"<<endl;
                cout<<"4 -- Savitch_9thEd_Chap3_Prob6"<<endl;
                cout<<"5 -- Savitch_9thEd_Chap3_Prob7"<<endl;
                cout<<"6 -- Savitch_9thEd_Chap3_Prog2"<<endl;
                cout<<"7 -- Savitch_9thEd_Chap3_Prog3"<<endl;
                cout<<"8 -- Savitch_9thEd_Chap3_Prog8"<<endl;
                cout<<"9 -- Savitch_9thEd_Chap3_Prog12"<<endl;
                cout<<"10 -- Welcome Sign"<<endl;
                cout<<"11 -- Exit Program"<<endl;
                cout<<"Where would you like to go? ";
                cin>>menufunc;
                break;
            }case 1:{
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
                    cout<<"Would you like to play again? \"Yes\" or \"No\": ";
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
                cout<<endl<<"Too loop back to the beginning, input 10\n"
                        "Too end the program, input 11"<<endl;
                cin.ignore();
                cin>>menufunc;
                break;
                
            }case 2:{
                            cout<<"Would you like to compute the total interest you owe on your account balance?\n"
                        "\"Yes\" or \"No\"? ";
                string startfunc;
                cin>>startfunc;
                while(startfunc!="No"){
                    cout<<"Start by inputting your total account balance please."<<endl;
                    cout<<"$";
                    float accbalan;//account balance
                    float totalint;//total interest due
                    float totalowe;
                    float payment;
                    cin>>accbalan;
                    if(accbalan<=1000){
                        totalint=accbalan*.015;
                        totalowe=totalint+accbalan;
                        if(totalowe<=100){
                            cout<<"The total interest you're paying is $"<<totalint<<" and you're\n"
                                    "expected to pay $10 monthly.\n";
                            cout<<"Would you like to input another account balance? \"Yes\" or \"No\" ";
                            cin>>startfunc;
                        }if(totalowe>100){
                            payment=totalowe/10;
                            cout<<"The total interest you're paying is $"<<totalint<<" and you're\n"
                                    "expected to pay $"<<payment<<" monthly.\n";
                            cout<<"Would you like to input another account balance? \"Yes\" or \"No\" ";
                            cin>>startfunc;                      

                        }
                    }if(accbalan>1000){
                        totalint=(accbalan-1000)*.01+15;
                        totalowe=totalint+accbalan;
                        if(totalowe<=100){
                            cout<<"The total interest you're paying is $"<<totalint<<" and you're\n"
                                    "expected to pay $10 monthly.\n";
                            cout<<"Would you like to input another account balance? \"Yes\" or \"No\" ";
                            cin>>startfunc;
                        }if(totalowe>100){
                            payment=totalowe/10;
                            cout<<"The total interest you're paying is $"<<totalint<<" and you're\n"
                                    "expected to pay $"<<payment<<" monthly.\n";
                            cout<<"Would you like to input another account balance? \"Yes\" or \"No\" ";
                            cin>>startfunc;       
                        }        
                    }
                }
                cout<<endl<<"Too loop back to the beginning, input 10\n"
                        "Too end the program, input 11"<<endl;
                cin.ignore();
                cin>>menufunc;
                break;

            }case 3:{
                
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
                cout<<endl<<"Too loop back to the beginning, input 10\n"
                        "Too end the program, input 11"<<endl;
                cin.ignore();
                cin>>menufunc;
                break;
            }case 4:{
                //declare variables
                float weight;//in pounds
                float radius;//in feet
                float volume;//volume of the sphere
                float buoyancy;//the buoyancy of the sphere
                cout<<"I can find the buoyant force on a sphere.\n";
                cout<<"Please input the weight of your sphere in pounds, and then\n"
                        "the radius of your sphere in feet. I can determine if the sphere\n"
                        "will sink or float in water.\n";
                cout<<"The weight: ";
                cin>>weight;
                cout<<"The radius: ";
                cin>>radius;
                volume=(4/3)*PI*radius*radius*radius;
                buoyancy=volume*WTRLBS;
                if(buoyancy>=weight){
                    cout<<"The sphere will float!\n"<<endl;
                }else if(buoyancy<weight){
                    cout<<"The sphere will sink."<<endl;
                }
                cout<<endl<<"Too loop back to the beginning, input 10\n"
                        "Too end the program, input 11"<<endl;
                cin.ignore();
                cin>>menufunc;
                break;
            }case 5:{
                //find the point at which celsius and fahrenheit are the same
                int celsius=100;
                int fahrenheit;
                do{
                    fahrenheit=(9*celsius)/5+32;
                    celsius--;        
                }while(celsius!=(fahrenheit-1));
                cout<<"Celsius = Fahrenheit at the temperature "<<fahrenheit<<" degrees.";
                cout<<endl<<"Too loop back to the beginning, input 10\n"
                        "Too end the program, input 11"<<endl;
                cin.ignore();
                cin>>menufunc;
                break;
            }case 6:{
                string crootend;
                cout<<"I can create complex roots. Would you like to see? (Y/N) ";
                cin>>crootend;
                while(crootend!="N"){
                    float a;
                    float b;
                    float c;
                    float discrim;
                    float quadform1;
                    float quadform2;
                    cout<<"I can take the values of a, b, and c as input and ouput the roots.\n"
                            "This quadratic is in the form of ax^2+bx+c = 0, and should be entered\n"
                            "accordingly. \n";
                    cout<<"a = ";
                    cin>>a;
                    cout<<"b = ";
                    cin>>b;
                    cout<<"c = ";
                    cin>>c;
                    discrim=(b*b-4*a*c);
                    if(discrim>0){
                        quadform1=(-b + sqrt(discrim))/2*a;
                        quadform2=(-b - sqrt(discrim))/2*a;
                        cout<<"The roots of your function are "<<quadform1<<" and "<<quadform2<<endl;

                    }else if(discrim<0){
                        cout<<"-"<<b<<"+-i(sqrt("<<discrim<<"))/"<<a;

                    }else if(discrim=0){
                        quadform1=(-b + sqrt(discrim))/2*a;
                    }
                    cout<<endl<<endl<<"Would you like to input more values? (Y/N) ";
                    cin.ignore();
                    cin>>crootend;

                }
                cout<<endl<<"Too loop back to the beginning, input 10\n"
                        "Too end the program, input 11"<<endl;
                cin.ignore();
                cin>>menufunc;
                break;
            }case 7:{
                //Declare variables
                unsigned short number;
                //Prompt the user
                cout<<"Input a number between 1000 and 3000"<<endl;
                cin>>number;
                //Determine the number of 1000s
                char thousands=(number-number%1000)/1000;
                //Output the thousands in Roman Numerals
                switch(thousands){
                    case 3: cout<<"M";
                    case 2: cout<<"M";
                    default:cout<<"M";              
                }
                //determine the number of 100s
                number-=thousands*1000;
                char hundreds=(number-number%100)/100;
                switch(hundreds){
                    case 9: cout<<"CM";break;
                    case 8: cout<<"DCCC";break;
                    case 7: cout<<"DCC";break;
                    case 6: cout<<"DC";break;
                    case 5: cout<<"D";break;
                    case 4: cout<<"CD";break;
                    case 3: cout<<"CCC";break;
                    case 2: cout<<"CC";break;
                    case 1: cout<<"C";break;
                    case 0: break;
                }
                number-=hundreds*100;
                char tens=(number-number%10)/10;
                switch(tens){
                    case 9: cout<<"XC";break;
                    case 8: cout<<"LXXX";break;
                    case 7: cout<<"LXX";break;
                    case 6: cout<<"LX";break;
                    case 5: cout<<"X";break;
                    case 4: cout<<"XL";break;
                    case 3: cout<<"XXX";break;
                    case 2: cout<<"XX";break;
                    case 1: cout<<"X";break;
                    case 0: break;
                }
                number-=tens*100;
                char ones=number;
                switch(ones){
                    case 9: cout<<"IX";break;
                    case 8: cout<<"VIII";break;
                    case 7: cout<<"VII";break;
                    case 6: cout<<"VI";break;
                    case 5: cout<<"V";break;
                    case 4: cout<<"IV";break;
                    case 3: cout<<"III";break;
                    case 2: cout<<"II";break;
                    case 1: cout<<"I";break;
                    case 0: break;
                }
                cout<<endl<<"Too loop back to the beginning, input 10\n"
                        "Too end the program, input 11"<<endl;
                cin.ignore();
                cin>>menufunc;
                break;
            }case 8:{
                //would consider using a double to push the values farther
                string pieend;
                float pie;
                float term;
                float ration=0;
                cout<<"Would you like to approximate the value of pi? *hint* more numbers\n"
                        "create a higher chance of success. (Y/N) ";
                cin>>pieend;
                while(pieend!="N"){
                    cout<<"Please input the number of terms you'd like pie to be approximated to: ";
                    cin>>term;
                    while(term>=0){
                        ration+=((pow(-1,term))/(2*term+1));
                        cout<<ration<<endl<<term<<endl;
                        term--;
                    }
                    pie=ration*4.0f;
                    cout<<endl<<pie<<endl;
                    cout<<"Would you like to approximate again? (Y/N) ";
                    cin>>pieend;
                }
                cout<<endl<<"Too loop back to the beginning, input 10\n"
                        "Too end the program, input 11"<<endl;
                cin.ignore();
                cin>>menufunc;
                break;
            }case 9:{
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
                cout<<endl<<"Too loop back to the beginning, input 10\n"
                        "Too end the program, input 11"<<endl;
                cin.ignore();
                cin>>menufunc;
                break;
            }case 10:{
                cout<<"Welcome the the Chapter 3 Homework menu. Problems 1-9 can be found\n"
                        "by inputting the a numerical value between 1-9. To view a directory,"
                        "input a 0."<<endl;
                cin>>menufunc;
                break;
            }
        
            
        }
    }
    cout<<"Thank you. Have a nice day.";
    return 0;
}
