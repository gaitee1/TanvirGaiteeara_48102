/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on September 20, 2016, 12:31 PM
   Purpose:  Calculate the tan,sine and cosine of an angle
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    
#include <cmath>      

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float angl; //Angle in Radians
    
    //Input values
    cout<<"Enter an angle in radians"<<endl;
    cin>>angl;
           
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"Sine of the angle   ="<<sin(angl)<<endl;
    cout<<"Cosine of the angle ="<<cos(angl)<<endl;
    cout<<"Tanget of the angle ="<<tan(angl)<<endl;
    
    //Exit Program
    return 0;
}

