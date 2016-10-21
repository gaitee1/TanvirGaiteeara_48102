/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on September 19, 2016, 9:41 AM
   Purpose:  Calculate the price of a circuit board
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const char PERCENT=100; //Conversion to percentage 
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float profit=40,    //Profit percentage
          costpr=12.67, //Cost price of Circuit board
          prof_D,sellpr; //Profit in $'s,Selling price of circuit board
    
    //Process values -> Map inputs to Outputs
    prof_D=costpr*profit/PERCENT ;
    sellpr=costpr+prof_D;
    
    //Display Output
    cout<<"The selling price of a circuit board"<<endl;
    cout<<"A circuit board costs                  =$"<<costpr<<endl;
    cout<<"The profit percentage company sells at ="<<profit<<"%"<<endl;
    cout<<"Amount of profit added                 =$"<<prof_D<<endl;
    cout<<"The selling price of a circuit board   =$"<<sellpr<<endl;
    //Exit Program
    return 0;
}