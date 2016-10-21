/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 02, 2016, 10:41 PM
   Purpose:  To compare areas of two rectangles
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
    int len1, len2, w1, w2, ar1, ar2; //Length1, Length2, Width1, Width2, Area1, Area2 
        
    //Input values
    cout<<"Enter the length of the first rectangle"<<endl;
    cin>>len1;
    cout<<"Enter the width of the first rectangle "<<endl;
    cin>>w1;
    cout<<"Enter the length of the second rectangle"<<endl;
    cin>>len2;
    cout<<"Enter the width of the second rectangle"<<endl;
    cin>>w2;
    
    //Process values -> Map inputs to Outputs
    ar1=len1*w1;
    ar2=len2*w2;
    
    //Display Output
    if (ar1>ar2)
        cout<<"The area of the first rectangle is greater than the area of the second rectangle"<<endl;
    else if (ar2>ar1)
        cout<<"The area of the second rectangle is greater than the area of the first rectangle"<<endl;
    else 
        cout<<"Both rectangles have the same area"<<endl;

    //Exit Program
    return 0;
}