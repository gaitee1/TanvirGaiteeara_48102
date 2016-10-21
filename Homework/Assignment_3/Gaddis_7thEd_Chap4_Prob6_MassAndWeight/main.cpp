/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 02, 2016, 9:00 PM
   Purpose:  Calculate an object's weight
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
    float wght, mass; //weight in newtons, Mass in kilograms
    
    //Input values
    cout<<"Enter the object's mass in kilograms"<<endl;
    cin>>mass;
        
    //Process values -> Map inputs to Outputs
    wght=mass*9.8; //Calculate weight in newtons
        
    //Display Output
    if (wght>100)
        cout<<"The object is too heavy"<<endl;
    else if (wght<10)
        cout<<"The object is too light"<<endl;
    else 
        cout<<"The object's weight = "<<wght<<" newtons"<<endl;
   
    //Exit Program
    return 0;
}

