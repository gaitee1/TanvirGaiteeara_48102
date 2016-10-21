/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 4, 2016, 11:11 AM
   Purpose:  Display the Roman version of a number
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
    int num; //Number entered
    
    //Input values
    cout<<"This program displays the Roman numeral version of a number"<<endl;
    cout<<"Enter a number between 1 and 10"<<endl;
    cin>>num;
      
    //Process values -> Map inputs to Outputs then display
    switch (num){
    
       case 1: cout<<"The Roman numeral version is I   "<<endl;break;
       case 2: cout<<"The Roman numeral version is II  "<<endl;break;        
       case 3: cout<<"The Roman numeral version is III "<<endl;break;     
       case 4: cout<<"The Roman numeral version is IV  "<<endl;break;     
       case 5: cout<<"The Roman numeral version is V   "<<endl;break;     
       case 6: cout<<"The Roman numeral version is VI  "<<endl;break;      
       case 7: cout<<"The Roman numeral version is VII "<<endl;break;
       case 8: cout<<"The Roman numeral version is VIII"<<endl;break;
       case 9: cout<<"The Roman numeral version is IX  "<<endl;break;
       case 10:cout<<"The Roman numeral version is  X  "<<endl;break;
        default:cout<<"Please enter a number between 1 and 10"<<endl;
        
    }
    
    //Exit Program
    return 0;
    }