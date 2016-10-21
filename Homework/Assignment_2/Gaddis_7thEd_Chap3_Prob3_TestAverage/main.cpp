/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on September 19, 2016, 9:41 AM
   Purpose:  Calculate the average test score
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
    float test1, test2,test3, test4, test5, //Scores of the tests
          tstavg;                          //Test score average
    
    //Input test score values
    cout<<"Test score 1 ="<<endl;
    cin>>test1;
    cout<<"Test score 2 ="<<endl;
    cin>>test2;
    cout<<"Test score 3 ="<<endl;
    cin>>test3;
    cout<<"Test score 4 ="<<endl;
    cin>>test4;
    cout<<"Test score 5 ="<<endl;
    cin>>test5;
    
    //Process values -> Map inputs to Outputs
    tstavg=(test1+test2+test3+test4+test5)/5;
    
    //Display Output
    cout<<fixed<<setprecision(1);
    cout<<"The test score average ="<<tstavg<<endl;
    
    //Exit Program
    return 0;
}