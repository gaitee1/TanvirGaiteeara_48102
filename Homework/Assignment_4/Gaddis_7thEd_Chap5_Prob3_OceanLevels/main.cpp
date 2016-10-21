/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 14, 2016, 9:00 PM
   Purpose:  Calculate rising ocean level
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
    float ris=1.5f,    //Rising ocean level
          level=0;    //ocean level
    
    //Input values
    
    //Process values -> Map inputs to Outputs then display
     for(int count=1; count<=25; count++)
    {
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"The ocean's level rose "<<level<<" Millimeters"<<endl;
        level += ris;
    }
    
 

    //Exit Program
    return 0;
}