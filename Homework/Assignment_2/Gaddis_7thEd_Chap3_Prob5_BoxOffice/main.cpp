/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on September 20, 2016, 9:41 AM
   Purpose:  Calculate a theater's gross and net profit for a night
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format Library
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned short PERCENT=100; //Conversion to percentage

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string mName;    
    unsigned short a_tkts=6,   //Cost of adult tickets in $'s
                   c_tkts=3,     //Cost of child tickets in $'s
                   per=20,       //Percentage theater keeps of gross profit
                   adult,        //Number of adult tickets sold
                   chld;       //Number of child tickets sold
    float          gross,      //Gross profit in $'s
                   netpr,      //Net profit in $'s
                   dispr,      //Distributor's profit in $'s,
                   chsale,     //Revenue earned from child ticket sales
                   adsale;    //Revenue earned from adult ticket sales 

    //Input values
    cout<<"Enter movie name"<<endl;
    getline(cin,mName);
    cout<<"Enter number of Adult tickets sold"<<endl;
    cin>>adult;
    cout<<"Enter number of Child tickets sold"<<endl;
    cin>>chld;

    //Process values -> Map inputs to Outputs
    chsale=c_tkts*chld;
    adsale=a_tkts*adult;
    gross=chsale+adsale;    
    netpr=gross*per/PERCENT;
    dispr=gross-netpr;

    //Display Output
    cout<<"Movie name                          "<<mName<<endl;
    cout<<"Adult tickets sold                  "<<adult<<endl;
    cout<<"Child tickets sold                  "<<chld<<endl;
    cout<<"Revenue earned from child tickets =$"<<chsale<<endl;
    cout<<"Revenue earned from adult tickets =$"<<adsale<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Gross box office profit           =$"<<gross<<endl;
    cout<<"Net box office profit             =$"<<netpr<<endl;
    cout<<"Amount paid to distributor        =$"<<dispr<<endl;

    //Exit Program
    return 0;
}

