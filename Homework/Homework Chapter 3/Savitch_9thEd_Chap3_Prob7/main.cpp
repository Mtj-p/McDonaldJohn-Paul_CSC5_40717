/* 
 * File:   Savitch Chap3 Prog7
 * Author: jaymc_000
 *
 * Created on January 19, 2015, 10:26 PM
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void input(string& x, int& y, int& z);

int main()
{
    int denom = 3;
    int terms=0;
    int steps=0;

    double newPi = 4.0;

    bool condition = true;

    string prompt= "Enter the number of terms to use: ";

    input( prompt, terms, steps );

    cout << "Results:";
    cout << endl << endl;


    for ( int i = 1; i <= terms; i++ )
    {
        if (condition) 
        {
            newPi -= ( 4.0 / denom );
        } 
        else 
        {
            newPi += ( 4.0 / denom );
        }
        condition = !condition;
        denom += 2;

        if ((i % steps) ==0)
        {
            cout << fixed << showpoint << setprecision(9);
            cout << newPi << endl;
        }
    }

    cout << endl << endl;
    return 0;
}

void input(string& x, int& y, int& z)
{
    do 
    {

        //string x = "Enter the number of terms to use: ";

        cout << x;
        cin >> y;
        cout << endl;

        if ( y <= 0 )

        cout << "Error -- invalid input" << endl << endl;

    } while ( y <= 0 );

    do 
    {
        cout << "Display Pi after every how many steps? ";
        cin >> z;
        cout << endl;

        if ( z <= 0 )

        cout << "Error -- invalid input" << endl << endl;

    }while ( z <= 0);
}
Edit & Run


