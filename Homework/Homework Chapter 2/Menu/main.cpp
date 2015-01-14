/* 
 * File:   Total Homework
 * Author: McDonald, John-Paul
 * Purpose: Utilize knowledge of switches to create a homework menu
 *
 * Created on January 14, 2015, 8:39 AM
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cmath>
#include <fstream>
using namespace std;

//global constants
const float LBSTOGRAMS=453.59237;//lbs to grams conversion
const int CNVHRMN=60;//Conversion from Hrs to Mins
const int CNVMNSC=60;//Conversion from Min to Secs
const float METRICTON=35273.92; //converts metric tons to ounces
const float PIDIV4 = atan(1);  //Pi/4 arctangent of 1
const float CNVDGRD =PIDIV4/45;//conversion
const float PI=3.1415;//pie

int main(int argc, char** argv) {
    unsigned short choice;
    cout<<"This is my homework submission in menu format. It will attempt to\n";
    cout<<"utilize a switch so that you may browse any problem from within one\n";
    cout<<"program. I'm submitting 9 homework problems, so please input a\n";
    cout<<"positive integer between 1 and 9 to view a homework problem;\n";
    cout<<"or 0 to view the registry.\n";
    cin>>choice;
    switch (choice){
        case 0:{
                cout<<" 1 -- Savitch_9thEd_Chap2_Prac1\n";
                cout<<" 2 -- Savitch_9thEd_Chap2_Prac2\n";
                cout<<" 3 -- Savitch_9thEd_Chap2_Prac3\n";
                cout<<" 4 -- Savitch_9thEd_Chap2_Prac4\n";
                cout<<" 5 -- Savitch_8thEd_Chap2_Prob2\n";
                cout<<" 6 -- Savitch_9thEd_Chap2_Prob5\n";
                cout<<" 7 -- Gaddis_7thEd_Chap3_Prog11\n";
                cout<<" 8 -- Gaddis_8thEd_Chap3_Prob19\n";
                cout<<" 9 -- Gaddis_8thEd_Chap3_Prob22\n";       
        }
        break;
        case 1:{
                unsigned short ounce; 
                float crelton;
                float boxes;
                cout<<"How many ounces is your package of breakfast cereal?\n";
                cin>>ounce;
                crelton=ounce/METRICTON;
                cout<<"You've got "<<crelton<<" Metric tons of cereal.\n";
                boxes=METRICTON/ounce;
                cout<<"And you need "<<boxes<<" boxes to have a total metric ton of cereal.\n";
                return 0;
        }
        break;
        case 2:{
                float number,guess,r;
                cout<<"Please input a number to estimate it's square root.\n";
                cout<<"The format will be a positive float."<<endl;
                cin>>number;
                guess=number/2;
                r=number/guess;
                guess=(guess+r)/2;
                cout<<"First pass calculation -> "<<guess<<endl;
                r=number/guess;
                guess=(guess+r)/2;
                cout<<"Second pass calculation -> "<<guess<<endl;
                r=number/guess;
                guess=(guess+r)/2;
                cout<<"Third pass calc -> "<<guess<<endl;
                r=number/guess;
                guess=(guess+r)/2;
                cout<<"Fourth pass calc -> "<<guess<<endl;
                r=number/guess;
                guess=(guess+r)/2;
                cout<<"Fifth pass calc -> "<<guess<<endl;
                r=number/guess;
                guess=(guess+r)/2;
                cout<<"Sixth pass calc -> "<<guess<<endl;
                r=number/guess;
                guess=(guess+r)/2;
                cout<<"Seventh pass calc -> "<<guess<<endl;
                r=number/guess;
                guess=(guess+r)/2;
                cout<<"Eighth pass calc -> "<<guess<<endl;
                r=number/guess;
                guess=(guess+r)/2;
                cout<<"Ninth pass calc -> "<<guess<<endl;
                r=number/guess;
                guess=(guess+r)/2;
                cout<<"Tenth pass calc -> "<<guess<<endl;
                //final guess
                cout<<"By our best estimation, the square root of "<<number<<" is "<<guess<<".";
                return 0;
        }
        break;
        case 3:{
                //declare vars
                float mph;//miles per hour - on treadmill
                float hpm;//pace as hours per mile
                float fmpm;//miles per minute as a float
                int impm;//miles per minute as an integer
                float fmspm;//fraction left for seconds per mile
                //prompt for the input
                cout<<"I can convert how many minutes per mile you go if you input how many\n";
                cout<<"miles you've gone in an hour."<<endl;
                cout<<"Please input the number of miles you've gone in an hour: ";
                cin>>mph;
                hpm=1/mph;
                fmpm=hpm*CNVHRMN;
                impm=static_cast<int>(fmpm);
                fmspm=(fmpm-impm)*CNVMNSC;
                //output results
                cout<<mph<<" miles per hour = "<<impm<<" minutes "<<fmspm
                         << " seconds per mile"<<endl;                   
                return 0;
        }          
        break;
        case 4:{
            string instname, yourname, food, number, adject, color, animal;
                cout<<"We're playing a game of Mad Lib. Please input the...\n";
                cout<<"Name of your instructor: ";
                cin.ignore();
                getline(cin, instname);
                cout<<"Your name: ";
                getline(cin, yourname);
                cout<<"A food: ";
                getline(cin, food);
                cout<<"A number between 100 and 120: ";
                getline(cin, number);
                cout<<"An adjective: ";
                getline(cin, adject);
                cout<<"A color: ";
                getline(cin, color);
                cout<<"And an animal: ";
                getline(cin, animal);
                cout<<endl<<endl;
                cout<<"Dear "<<instname<<","<<endl<<endl;
                cout<<"I am sorry that I am unable to turn in"
                      "my homework at this time. First, I ate a rotten "<<food
                      <<",\nwhich made me turn "<<color<<" and extremely ill. I came"
                      " down with a fever of "<<number<<". Next, my "<<adject<<"\npet "
                      <<animal<<" must have smelled the remains of the "<<food<<" on my"
                      " homework, because he ate it. \nI am currently rewriting my homework"
                      " and hope you will accept it late."<<endl<<endl;
                cout<<"Sincerely,\n";
                cout<<yourname;
                
                return 0;
        }
        break;
        case 5:{
                //declaration of independent variables
                const float CONC=1e-3f;//sweetener concentration
                float kperson, wtdperslbs, wtdpersgrams;
                float wtmouse=3.5e1f;//weight of mouse in grams
                float wtcoke =3.5e2f;//weight of coke in grams
                float kmouse=5.0f;//grams to kill mouse
                int ncans;
                //input desired weight of a person
                cout<<"Input your desired weight in pounds"<<endl;
                cout<<"Format the input as a float"<<endl;
                cin>>wtdperslbs;
                //convert lbs to grams
                wtdpersgrams=wtdperslbs*LBSTOGRAMS;
                //calculation
                kperson=kmouse/wtmouse*wtdpersgrams;
                ncans=kperson/wtcoke/CONC;
                //Output the limit of what you can drink
                cout<<"Number of cans of diet coke";
                cout<<" that will kill you = "<<ncans<<endl;
                //exit stage right(!)
                return 0;           
        }
        break;
        case 6:{
                float radius, vm;
                cout<<"Enter radius of a sphere."<<endl;
                cin>>radius;
                vm=(4.0/3.0)*PI*radius*radius*radius;
                cout<<"The volume is: "<<vm<<endl;
                return 0;
        }
        break;
        case 7:{
                //declaring vars
                float bitUusd=232.8;//01/13/15 10:18am United State Dollar
                float bitUyen=27350;//01/13/15 10:18am Japanese Yen
                float bitUeuro=200.3;//01/13/15 10:19am European Euro
                float bitUgbp=153.3;//01/13/15 10:19am Great British Pound
                float bitUcad=277.5;//01/13/15 10:21am Canadian Dollar
                float bitcoin,usd,yen,euro,gbp,cad;
                cout<<"This is a conversion calculator for common world currencies to and from bitcoin.\n";
                cout<<"Are you converting to or from bitcoin? Please state \"to\" or \"from\": ";
                string conv;
                cin.ignore();
                getline(cin, conv);
                cout<<endl;
                if (conv == "to"){
                        cout<<"And which currency would you like to convert bit coin to?\n";
                        cout<<"USD, Yen, Euro, GBP, or CAD?:";
                        string convto;
                        cin.ignore();
                        cin>>convto;
                        if (convto == "SD"){
                                cout<<"How many bitcoins are you converting to USD? ";
                                cin.ignore();
                                cin>>bitcoin;
                                usd=bitcoin*bitUusd;
                                cout<<endl;
                                cout<<"You have $"<<usd<<" United States Dollars in bitcoin.";
                        }if (convto == "en"){ 
                                cout<<"How many bitcoins are you converting to Yen? ";
                                cin.ignore();
                                cin>>bitcoin;
                                yen=bitcoin*bitUyen;
                                cout<<endl;
                                cout<<"You have ¥"<<yen<<" Yen in bitcoin.";            
                        }if (convto == "uro"){
                                cout<<"How many bitcoins are you converting to Euros? ";
                                cin.ignore();
                                cin>>bitcoin;
                                euro=bitcoin*bitUeuro;
                                cout<<endl;
                                cout<<"You have Є"<<euro<<" Euros in bitcoin.";
                        }if (convto == "BP"){
                                cout<<"How many bitcoins are you converting to Great British Pounds? ";
                                cin.ignore();
                                cin>>bitcoin;
                                gbp=bitcoin*bitUgbp;
                                cout<<endl;
                                cout<<"You have £"<<gbp<<" Pounds in bitcoin.";            
                        }if (convto == "AD"){
                                cout<<"How many bitcoins are you converting to Canadian Dollars? ";
                                cin.ignore();
                                cin>>bitcoin;
                                cad=bitcoin*bitUcad;
                                cout<<endl;
                                cout<<"You have "<<cad<<"$ dollars in bitcoin.";
                        }
                }
                if (conv == "To"){
                        cout<<"And which currency would you like to convert bit coin to?\n";
                        cout<<"USD, Yen, Euro, GBP, or CAD?: ";
                        string convto;
                        cin.ignore();
                        getline (cin, convto);
                        if (convto == "SD"){
                                cout<<"How many bitcoins are you converting to USD? ";
                                cin.ignore();
                                cin>>bitcoin;
                                usd=bitcoin*bitUusd;
                                cout<<endl;
                                cout<<"You have $"<<usd<<" United States Dollars in bitcoin.";
                        }if (convto == "en"){ 
                                cout<<"How many bitcoins are you converting to Yen? ";
                                cin.ignore();
                                cin>>bitcoin;
                                yen=bitcoin*bitUyen;
                                cout<<endl;
                                cout<<"You have ¥"<<yen<<" Yen in bitcoin.";            
                        }if (convto == "uro"){
                                cout<<"How many bitcoins are you converting to Euros? ";
                                cin.ignore();
                                cin>>bitcoin;
                                euro=bitcoin*bitUeuro;
                                cout<<endl;
                                cout<<"You have Є"<<euro<<" Euros in bitcoin.";
                        }if (convto == "BP"){
                                cout<<"How many bitcoins are you converting to Great British Pounds? ";
                                cin.ignore();
                                cin>>bitcoin;
                                gbp=bitcoin*bitUgbp;
                                cout<<endl;
                                cout<<"You have £"<<gbp<<" Pounds in bitcoin.";            
                        }if (convto == "AD"){
                                cout<<"How many bitcoins are you converting to Canadian Dollars? ";
                                cin.ignore();
                                cin>>bitcoin;
                                cad=bitcoin*bitUcad;
                                cout<<endl;
                                cout<<"You have "<<cad<<"$ dollars in bitcoin.";
                        }
                }
                if (conv == "from"){
                        cout<<"What currency are you looking to convert to bitcoin?\n";
                        cout<<"USD, Yen, Euro, GBP, or CAD?: ";
                        string convfrom;
                        cin.ignore();
                        getline(cin, convfrom);
                        if(convfrom == "SD"){
                                cout<<"How many USD are you converting?: ";
                                cin.ignore();
                                cin>>usd;
                                bitcoin=usd/bitUusd;
                                cout<<endl<<"You've got "<<bitcoin<<" BTC.";
                        }
                        if(convfrom == "en"){
                                cout<<"How much Yen are you converting?: ";
                                cin.ignore();
                                cin>>yen;
                                bitcoin=yen/bitUyen;
                                cout<<endl<<"You've got "<<bitcoin<<" BTC.";
                        }
                        if(convfrom == "uro"){
                                cout<<"How many Euros are you converting?: ";
                                cin.ignore();
                                cin>>euro;
                                bitcoin=euro/bitUeuro;
                                cout<<endl<<"You've got "<<bitcoin<<" BTC.";
                        }
                        if(convfrom == "BP"){
                                cout<<"How many GBP are you converting?: ";
                                cin.ignore();
                                cin>>gbp;
                                bitcoin=gbp/bitUgbp;
                                cout<<endl<<"You've got "<<bitcoin<<" BTC.";
                        }
                        if(convfrom == "AD"){
                                cout<<"How many CAD are you converting?: ";
                                cin.ignore();
                                cin>>cad;
                                bitcoin=cad/bitUcad;
                                cout<<endl<<"You've got "<<bitcoin<<" BTC.";
                        }
                
                }
                if (conv == "From"){
                        cout<<"What currency are you looking to convert to bitcoin?\n";
                        cout<<"USD, Yen, Euro, GBP, or CAD?: ";
                        string convfrom;
                        cin.ignore();
                        getline(cin, convfrom);
                        if(convfrom == "SD"){
                                cout<<"How many USD are you converting?: ";
                                cin.ignore();
                                cin>>usd;
                                bitcoin=usd/bitUusd;
                                cout<<endl<<"You've got "<<bitcoin<<" BTC.";
                        }
                        if(convfrom == "en"){
                                cout<<"How much Yen are you converting?: ";
                                cin.ignore();
                                cin>>yen;
                                bitcoin=yen/bitUyen;
                                cout<<endl<<"You've got "<<bitcoin<<" BTC.";
                        }
                        if(convfrom == "uro"){
                                cout<<"How many Euros are you converting?: ";
                                cin.ignore();
                                cin>>euro;
                                bitcoin=euro/bitUeuro;
                                cout<<endl<<"You've got "<<bitcoin<<" BTC.";
                        }
                        if(convfrom == "BP"){
                                cout<<"How many GBP are you converting?: ";
                                cin.ignore();
                                cin>>gbp;
                                bitcoin=gbp/bitUgbp;
                                cout<<endl<<"You've got "<<bitcoin<<" BTC.";
                        }
                        if(convfrom == "AD"){
                                cout<<"How many CAD are you converting?: ";
                                cin.ignore();
                                cin>>cad;
                                bitcoin=cad/bitUcad;
                                cout<<endl<<"You've got "<<bitcoin<<" BTC.";
                        }

                } 
                cout<<endl<<endl;
                return 0;
        }
        break;
        case 8:{
                //declare variables
                float intRate=0.0319f;;
                float msrplus=4e4f;
                char nPaymnt=60;
                //Calculate the monthly payments
                float temp=pow((1+intRate/12),nPaymnt);
                float mPay=intRate*temp*msrplus/(temp-1)/12;
                //Output the inputs
                cout<<"Interest per year = "<<intRate*100<<endl;
                cout<<"Number of payments = "<<static_cast<int>(nPaymnt)<<endl;
                cout<<"Loan Amount = $"<<msrplus<<endl;
                cout<<"Temp = "<<temp<<endl;
                //Output our car payment
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"My Avenir will cost $"<<mPay<<endl;
                return 0;
        }
        break;
        case 9:{
                 //set seed
                 srand(static_cast<unsigned int>(time(0)));
                 //declare file obj
                 ofstream output;
                 output.open("SinCosTan.dat");
                 //declare vars
                 int angDeg=rand()%361-180;
                 float angRad=angDeg*CNVDGRD;
                 //output angle (console)
                 cout<<"Angle in degrees => "<<angDeg<<endl;
                 cout<<"Angle in radians => "<<angRad<<endl;
                 cout<<fixed<<setprecision(4)<<showpoint;
                 //output conversions (console)
                 cout<<"sin( "<<angDeg<<") = "<<setw(8)<<sin(angRad)<<endl;
                 cout<<"cos( "<<angDeg<<") = "<<setw(8)<<cos(angRad)<<endl;
                 cout<<"tan( "<<angDeg<<") = "<<setw(8)<<tan(angRad)<<endl;
                 //output angle (txt file)
                 output<<"Angle in degrees => "<<angDeg<<endl;
                 output<<"Angle in radians => "<<angRad<<endl;
                 output<<fixed<<setprecision(4)<<showpoint;
                 //output conversions (txt file)
                 output<<"sin( "<<angDeg<<") = "<<setw(8)<<sin(angRad)<<endl;
                 output<<"cos( "<<angDeg<<") = "<<setw(8)<<cos(angRad)<<endl;
                 output<<"tan( "<<angDeg<<") = "<<setw(8)<<tan(angRad)<<endl;
                 output.close();
                 return 0;
        }
        break;
        default:{
            cout<<"error 404: page not found";
        }
                     
    return 0;
    }
}


