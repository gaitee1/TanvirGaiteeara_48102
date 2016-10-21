
/* 
 * File:   main.cpp
 * Author: Gaitee ara Tanvir
 * Created on September 10, 2016, 4:36 PM
 * Purpose: To create a triangle pattern
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
    char a,b;
    
    //Input Values
    a='*';
    b=' ';
    
    //Display Output
    cout <<b<<b<<b<<a<<b<<b<<b<< endl;
    cout <<b<<b<<a<<a<<a<<b<<b<< endl;
    cout <<b<<a<<a<<a<<a<<a<<b<< endl;
    cout <<a<<a<<a<<a<<a<<a<<a<< endl;
    
    
    //Exit Program
    return 0;
}

