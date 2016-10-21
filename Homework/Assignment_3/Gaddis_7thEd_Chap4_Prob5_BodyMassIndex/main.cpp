/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 02, 2016, 9:00 PM
   Purpose:  Calculate a person's BMI
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
    float wght, hght, bmi; //weight in pounds, Height in inches, Body Mass Index
    
    //Input values
    cout<<"Enter your weight in pounds"<<endl;
    cin>>wght;
    cout<<"Enter your height in inches"<<endl;
    cin>>hght;
        
    //Process values -> Map inputs to Outputs
    bmi=(wght*703)/(hght*hght);
    
    //Display Output
    if (bmi<18.5)
        cout<<"The person is underweight"<<endl;
    else if ((bmi>=18.5)&&(bmi<=25))
        cout<<"This person has an optimal weight"<<endl;
    else
        cout<<"This person is overweight"<<endl;
   
    //Exit Program
    return 0;
}

