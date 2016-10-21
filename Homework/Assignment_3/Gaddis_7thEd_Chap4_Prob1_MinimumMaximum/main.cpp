/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on October 4, 2016, 11:11 AM
   Purpose:  Determine which number is smaller or larger
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
    int n1,n2; //Number1, Number2
    
    //Input values
    cout<<"Enter the first number"<<endl;
    cin>>n1;
    cout<<"Enter the second number"<<endl;
    cin>>n2;
    
    
    //Process values -> Map inputs to Outputs then display
    if(n1>n2)
        cout<<n1<<" is greater than "<<n2<<endl; 
    else 
        cout<<n2<<" is greater than "<<n1<<endl;
        

    //Exit Program
    return 0;
}