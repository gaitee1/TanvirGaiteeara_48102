/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 15, 2016, 10:30 PM
   Purpose:  Calculate income salary
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
    float  penny=0.01;
    unsigned int days;
    
    //Input values
    cout<<"Enter the number of days worked"<<endl;
    cin>>days;
    while (days<1)
    {
        cout<<"The number of days worked should be greater than 1"<<endl;
        cin>>days;
    }
    
    //Process -> map inputs to output and then Display 
    cout<<"Table of salary"<<endl;
    cout<<"---------------"<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    for(int count=1; count<=days; count++)
        {
        cout<<count<<"          $"<<penny<<endl;
        penny*=2;
        }
    
    
    //Exit Program
    return 0;
}

