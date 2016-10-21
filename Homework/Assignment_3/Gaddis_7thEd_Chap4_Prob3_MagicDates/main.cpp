/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 01, 2016, 9:41 AM
   Purpose:  To determine whether month times day is equal to the year.
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int day, mon, year, mag; //Day, Month, Year, Magic
    
    //Input values
    cout<<"Enter the month in numeric form"<<endl;
    cin>>mon;
    cout<<"Enter the day in numeric form  "<<endl;
    cin>>day;
    cout<<"Enter the year in two digits   "<<endl;
    cin>>year;
    
    //Process values -> Map inputs to Outputs then Display
    mag=mon*day;
        
    if (mag==year)
        cout<<"The date is magic"<<endl;
    else
        cout<<"The date is not magic"<<endl;
      
    //Exit Program
    return 0;
}