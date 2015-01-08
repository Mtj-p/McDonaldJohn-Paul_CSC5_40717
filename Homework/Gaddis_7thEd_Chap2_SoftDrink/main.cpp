/* 
 * File:   Gaddis_7thED_Chapt2_SoftDrink
 * Author: McDonald, John-Paul
 * Purpose: Write a program that displays number of customers
 * surveyed, number of customers who prefer citrus flavor, 
 * 
 * Created on January 8, 2015, 7:50 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //using unsigned shorts to conserve data space
    unsigned short custSrv; //customers surveyed
    unsigned short perEdrk; //number of customers surveyed that drank energy drinks
    unsigned short perEcit; //number of those customers who prefer fruity drinks
    custSrv=12467;
    cout<<"The total number of Consumers Surveyed was "<<custSrv<<".\n"; //displays default number of customers surveyed
    perEdrk=custSrv*.14; //multiples that number by 14% (percentage of c)
    cout<<"The number of Consumers Surveyed who drink energy drinks was "<<perEdrk<<".\n"; //displays that multiplication
    perEcit=perEdrk*.64; //multiples consumers who like energy drinks by 64%
    cout<<"And the number of people who prefer citrus flavors are "<<perEcit<<".\n"; //displays the 64% of the consumers surveyed 
    
    return 0;
}

