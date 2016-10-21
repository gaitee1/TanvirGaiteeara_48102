/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on September 27, 2016, 9:41 AM
   Purpose:  Calculate number of widgets on a pallet
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format Library
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float  nwidgt,      //Number of widgets per pallet
           w_widg,      //Weight of widgets on pallet
           pall,pall_w, //Pallet weight by itself, Pallet weight with widgets
           weigh=9.2;  //weight of a single widget in pounds
   
    //Input values
    cout<<"Enter the pallet weight (by itself)"<<endl;
    cin>>pall;
    cout<<"Enter the pallet weight with widgets"<<endl;
    cin>>pall_w;
    
    //Process values -> Map inputs to Outputs
    w_widg=pall_w-pall;
    nwidgt=w_widg/weigh;
    
    //Display Output
    cout<<fixed<<setprecision(1)<<endl;
    cout<<"Number of widgets stacked on the pallet ="<<nwidgt<<endl;
    
    //Exit Program
    return 0;
}