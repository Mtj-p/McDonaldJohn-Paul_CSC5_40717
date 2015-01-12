/* 
 * File:   Name please
 * Author: McDonald, John-Paul
 *
 * Created on January 12, 2015, 7:57 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int myname;
    int mymid;
    int mylast;
    int mythird;
    int myout;
    cout<<"What is your full name?\n";
    cin>>myname>>mymid>>mylast>>mythird;
    cout<<"Welcome, "<<myname<<" "<<mymid<<" "<<mylast<<".\n";
    myout=myname+mymid*mylast-mythird;
    cout<<myout;
               
 
    return 0;
}

