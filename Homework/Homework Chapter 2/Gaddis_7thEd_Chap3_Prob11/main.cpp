/* 
 * File:   main.cpp
 * Author: McDonald, John-Paul
 * Created on January 13, 2015, 10:16 AM
 * Purpose: bitcoin conversion
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    //declaring vars
    float bitUusd=232.8;//01/13/15 10:18am United State Dollar
    float bitUyen=27350;//01/13/15 10:18am Japanese Yen
    float bitUeuro=200.3;//01/13/15 10:19am European Euro
    float bitUgbp=153.3;//01/13/15 10:19am Great British Pound
    float bitUcad=277.5;//01/13/15 10:21am Canadian Dollar
    float bitcoin,usd,yen,euro,gbp,cad;
    string conv;
    cout<<"This is a conversion calculator for common currency to and from bitcoin.\n";
    cout<<"Are you converting to or from bitcoin? Please state \"to\" or \"from\": ";
    getline (cin, conv);
    cout<<endl;
    if (conv == "to"){
        cout<<"And which currency would you like to convert bit coin to?\n";
        cout<<"USD, Yen, Euro, GBP, or CAD?: ";
        string convto;
        getline (cin, convto);
        if (convto == "USD"){
            cout<<"How many bitcoins are you converting to USD? ";
            cin>>bitcoin;
            usd=bitcoin*bitUusd;
            cout<<endl;
            cout<<"You have $"<<usd<<" United States Dollars in bitcoin.";
        }if (convto == "Yen"){ 
            cout<<"How many bitcoins are you converting to Yen? ";
            cin>>bitcoin;
            yen=bitcoin*bitUyen;
            cout<<endl;
            cout<<"You have ¥"<<yen<<" Yen in bitcoin.";            
        }if (convto == "Euro"){
            cout<<"How many bitcoins are you converting to Euros? ";
            cin>>bitcoin;
            euro=bitcoin*bitUeuro;
            cout<<endl;
            cout<<"You have Є"<<euro<<" Euros in bitcoin.";
        }if (convto == "GBP"){
            cout<<"How many bitcoins are you converting to Great British Pounds? ";
            cin>>bitcoin;
            gbp=bitcoin*bitUgbp;
            cout<<endl;
            cout<<"You have £"<<gbp<<" Pounds in bitcoin.";            
        }if (convto == "CAD"){
            cout<<"How many bitcoins are you converting to Canadian Dollars? ";
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
        getline (cin, convto);
        if (convto == "USD"){
            cout<<"How many bitcoins are you converting to USD? ";
            cin>>bitcoin;
            usd=bitcoin*bitUusd;
            cout<<endl;
            cout<<"You have $"<<usd<<" United States Dollars in bitcoin.";
        }if (convto == "Yen"){ 
            cout<<"How many bitcoins are you converting to Yen? ";
            cin>>bitcoin;
            yen=bitcoin*bitUyen;
            cout<<endl;
            cout<<"You have ¥"<<yen<<" Yen in bitcoin.";            
        }if (convto == "Euro"){
            cout<<"How many bitcoins are you converting to Euros? ";
            cin>>bitcoin;
            euro=bitcoin*bitUeuro;
            cout<<endl;
            cout<<"You have Є"<<euro<<" Euros in bitcoin.";
        }if (convto == "GBP"){
            cout<<"How many bitcoins are you converting to Great British Pounds? ";
            cin>>bitcoin;
            gbp=bitcoin*bitUgbp;
            cout<<endl;
            cout<<"You have £"<<gbp<<" Pounds in bitcoin.";            
        }if (convto == "CAD"){
            cout<<"How many bitcoins are you converting to Canadian Dollars? ";
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
        getline(cin, convfrom);
        if(convfrom == "USD"){
            cout<<"How many USD are you converting?: ";
            cin>>usd;
            bitcoin=usd/bitUusd;
            cout<<endl<<"You've got "<<bitcoin<<" BTC.";
        }
        if(convfrom == "Yen"){
            cout<<"How much Yen are you converting?: ";
            cin>>yen;
            bitcoin=yen/bitUyen;
            cout<<endl<<"You've got "<<bitcoin<<" BTC.";
        }
        if(convfrom == "Euro"){
            cout<<"How many Euros are you converting?: ";
            cin>>euro;
            bitcoin=euro/bitUeuro;
            cout<<endl<<"You've got "<<bitcoin<<" BTC.";
        }
        if(convfrom == "GBP"){
            cout<<"How many GBP are you converting?: ";
            cin>>gbp;
            bitcoin=gbp/bitUgbp;
            cout<<endl<<"You've got "<<bitcoin<<" BTC.";
        }
        if(convfrom == "CAD"){
            cout<<"How many CAD are you converting?: ";
            cin>>cad;
            bitcoin=cad/bitUcad;
            cout<<endl<<"You've got "<<bitcoin<<" BTC.";
        }
                
    }
    if (conv == "From"){
        cout<<"What currency are you looking to convert to bitcoin?\n";
        cout<<"USD, Yen, Euro, GBP, or CAD?: ";
        string convfrom;
        getline(cin, convfrom);
        if(convfrom == "USD"){
            cout<<"How many USD are you converting?: ";
            cin>>usd;
            bitcoin=usd/bitUusd;
            cout<<endl<<"You've got "<<bitcoin<<" BTC.";
        }
        if(convfrom == "Yen"){
            cout<<"How much Yen are you converting?: ";
            cin>>yen;
            bitcoin=yen/bitUyen;
            cout<<endl<<"You've got "<<bitcoin<<" BTC.";
        }
        if(convfrom == "Euro"){
            cout<<"How many Euros are you converting?: ";
            cin>>euro;
            bitcoin=euro/bitUeuro;
            cout<<endl<<"You've got "<<bitcoin<<" BTC.";
        }
        if(convfrom == "GBP"){
            cout<<"How many GBP are you converting?: ";
            cin>>gbp;
            bitcoin=gbp/bitUgbp;
            cout<<endl<<"You've got "<<bitcoin<<" BTC.";
        }
        if(convfrom == "CAD"){
            cout<<"How many CAD are you converting?: ";
            cin>>cad;
            bitcoin=cad/bitUcad;
            cout<<endl<<"You've got "<<bitcoin<<" BTC.";
        }
                
    }
    cout<<endl<<endl<<"I wish I could loop this up, but I can't yet. Good day.";
    return 0;
}

