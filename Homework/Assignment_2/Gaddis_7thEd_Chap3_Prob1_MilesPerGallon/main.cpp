/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on September 24, 2016, 9:41 AM
   Purpose:  Calculate miles per gallon of gas
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>   //Format Library
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float gall,miles,mpg; //Gallons of gas, Miles, Miles Per Gallon
    
    //Input values
    cout<<"Enter the number of gallons of gas the car holds           =";
    cin>>gall;
    cout<<"Enter the number of miles the car can drive on a full tank =";
    cin>>miles;
    
    //Process values -> Map inputs to Outputs
    mpg=miles/gall;
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The number of miles the car can drive per gallon           ="<<mpg<<endl;
   
    //Exit Program
    
    return 0;
}

