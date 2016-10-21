/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 04, 2016, 9:41 AM
   Purpose:  Calculate the number of book points earned
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
    unsigned short bks; //Books
    
    //Input values
    cout<<"Enter the number of books you have purchased this month"<<endl;
    cin>>bks;
    
    //Process values -> Map inputs to Outputs then display 
    if      (bks==0) cout<<"You have earned 0 points "<<endl;
    else if (bks==1) cout<<"You have earned 5 points "<<endl;
    else if (bks==2) cout<<"You have earned 15 points"<<endl;
    else if (bks==3) cout<<"You have earned 30 points"<<endl;    
    else             cout<<"You have earned 60 points"<<endl;
          
    //Exit Program
    return 0;
}