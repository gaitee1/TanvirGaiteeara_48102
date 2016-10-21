/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 15, 2016, 9:41 AM
   Purpose:  Calculate sum of a positive integer to number entered
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
    int num,sum; //Number, Sum of numbers
    
    //Input values
    cout<<" This program calculates sum of numbers"<<endl;
       
    //Process values -> Map inputs to Outputs
    do {
    cout << "Enter the number that you want to calculate the sum of" << endl;
    cin >> num;
    } while (num < 0); 
    
      for (int count=1; count<=num; count++)
    {
           sum += count;
    }
            
    //Display Output
    cout<<"Sum of all number from 1 to "<<num<<" is "<<sum<<endl;

    //Exit Program
    return 0;
}