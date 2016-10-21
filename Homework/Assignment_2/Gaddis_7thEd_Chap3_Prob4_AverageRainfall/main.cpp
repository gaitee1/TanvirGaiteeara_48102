/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on September 20, 2016, 9:41 AM
   Purpose:  Calculate the average rainfall for 3 months
 */

//System Libraries
#include <iostream>    //Input/Output objects
#include <iomanip>    //Format Library
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string mnth1,mnth2,mnth3;        //Name of months
    float rain1, rain2, rain3, avg; //Amount of rainfall, Average of rainfall in inches
 
    //Input name of months
    cout<<"Enter name of month 1"<<endl;   
    cin>>mnth1;
    cout<<"Enter name of month 2"<<endl;
    cin>>mnth2;
    cout<<"Enter name of month 3"<<endl;
    cin>>mnth3;
 
    //Input amount of rainfall in inches
    cout<<"Enter amount of rainfall for month 1"<<endl;
    cin>>rain1;
    cout<<"Enter amount of rainfall for month 2"<<endl;
    cin>>rain2;
    cout<<"Enter amount of rainfall for month 3"<<endl;
    cin>>rain3;
         
    //Process values -> Map inputs to Outputs
    avg=(rain1+rain2+rain3)/3; 
         
    //Display Output
    cout<<fixed<<showpoint<<setprecision(2);
    cout << "The average rainfall for " << mnth1 << ", " << mnth2 << ", and "
            << mnth3 << " is " <<avg<<" inches"<< endl;
 

    //Exit Program
    return 0;
}