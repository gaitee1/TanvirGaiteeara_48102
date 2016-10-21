/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on August 29, 2016, 9:41 AM
   Purpose: To compute the tax and bill on a restaurant bill
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const char PERCENT=100; //Conversion to percentage
//Function prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float mealcst=44.50, //Cost of meal in $'s
          tax_pr=6.75,      //Tax percentage 
          tip=15,        //Tip percentage
          tax,totalTx,totTip,totalBl; //Amount of tax, Total after tax, Total after tip, Total Bill
       
    //Process values -> Map inputs to Outputs
   tax=mealcst*tax_pr/PERCENT; 
   totalTx=mealcst+tax;
   totTip=tip*totalTx/PERCENT;
   totalBl=totalTx+totTip;
   
    //Display Output
   cout<<"Total Amount for restaurant bill"<<endl;
   cout<<"Cost of meal           =$"<<mealcst<<endl;
   cout<<"Tax percentage on meal ="<<tax_pr<<"%"<<endl;
   cout<<"Tip percentage on meal ="<<tip<<"%"<<endl;
   cout<<fixed<<showpoint<<setprecision (2);
   cout<<"Total after tax added  =$"<<totalTx<<endl;
   cout<<"Total after tip added  =$"<<totTip<<endl;
   cout<<"Total Bill             =$"<<totalBl<<endl;
   
    //Exit Program
    return 0;
}