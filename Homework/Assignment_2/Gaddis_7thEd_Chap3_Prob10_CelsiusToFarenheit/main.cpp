/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on September 27, 2016, 9:41 AM
   Purpose:  Convert Celsius temperatures to Fahrenheit temperatures
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format Library
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float ct,ft; //Celsius temperatures, Fahrenheit temperatures 
    
    //Input values
    cout<<"Enter temperature in Celsius"<<endl;
    cin>>ct;
    
    //Process values -> Map inputs to Outputs
    ft=((9*ct)/5)+32;
    
    //Display Output
    cout<<fixed<<setprecision(1)<<endl;
    cout<<ct<<" "<<"degrees Celsius is equal to"<<" "<<ft<<" "<<"degrees Fahrenheit"<<endl;
    
    //Exit Program
    return 0;
}

