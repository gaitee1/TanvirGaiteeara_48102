/* 
 * File:   main.cpp
 * Author: Gaitee Ara Tanvir
 *
 * Created on September 16, 2016, 11:34 AM
 * Purpose: Compute total sales tax on $52 purchase
 */

//Include system level libraries 
#include <iostream>  //Input/Output Libraries 
using namespace std; //Libraries compiled under standard name-space

//User Libraries

//Global Constants
const char PERCENT=100; //Conversion to percentage 

//Functional Prototypes

//Program execution begins here!
int main(int argc, char** argv) {
//Declare and initialize variables
    short purchas=52;  //Price of purchase in $'s
    float  statST=4;   //State Sales Tax percentage
    float  counST=2;  //County Sales Tax percentage
    float totalTx,tStat,tCount; // Total tax, Total state tax, Total county tax in $'s
    
    //Process values -> Map inputs to Outputs 
    tStat=purchas*statST/PERCENT;
    tCount=purchas*counST/PERCENT;
    totalTx=tStat+tCount;
    
    
    //Output the results
    cout<<"Total State and County tax on purchase "<<endl;
    cout<<"Purchase                    =$"<<purchas<<endl;
    cout<<"State Sales Tax             ="<<static_cast<int>(statST)<<"%"<<endl;
    cout<<"County Sales Tax            ="<<static_cast<int>(counST)<<"%"<<endl;
    cout<<"Total State Tax in Dollars  = $"<<tStat<<endl;
    cout<<"Total County Tax in Dollars = $"<<tCount<<endl;
    cout<<"Total tax                   = $"<<totalTx<<endl;
       
    
    return 0;
}



