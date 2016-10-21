/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 13, 2016, 6:45 PM
   Purpose:  Display the projected rates for the next six years
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float cFee=2500,iFee=0.04;   //Current fees, Increase in rate of Fees
    unsigned short yr;          //Year
       
    //Display Output
    for (yr = 2016;yr <= 2022; yr++)
    {
        cFee += (cFee * iFee);
        cout<<fixed<<showpoint<<setprecision(1);
        cout<<"The membership fees increase every year after 6 years is $"<<cFee<<endl;
    }
        
    //Exit Program
    return 0;
}