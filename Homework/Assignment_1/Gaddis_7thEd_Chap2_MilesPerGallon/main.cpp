/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on August 29, 2016, 9:41 AM
   Purpose: Calculate the number of miles per gallon the car gets 
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
    float   miles= 350, //Miles Driven
            gall=12,   //Gallons of Gas Used
            mpg;       //Number of Miles Per Gallon the car used 
     
    //Process values -> Map inputs to Outputs
    mpg=miles/gall;
    
    //Display Output
    cout<<"Number of Gallons the car holds"<<" = "<<gall<<endl;
    cout<<"Number of Miles the car can travel before refueling"<<" = "<<miles<<endl;
    cout<<"Number of Miles Per Gallon"<<endl;
    cout<<miles<<" / "<<gall<<" = "<<mpg<<endl;
    
    //Exit Program
    return 0;
}