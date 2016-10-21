/* 
 * File:   main.cpp
 * Author: Gaitee ara Tanvir
 * Created on September 18, 2016, 10:14 AM
 * Purpose: Calculate the subtotal of the sale, the amount of sales tax, and the total. 
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
float prItem1=12.95, //Price of item 1 in $'s
      prItem2=24.95, //Price of item 2 in $'s
      prItem3=6.95,  //Price of item 3 in $'s
      prItem4=14.95, //Price of item 4 in $'s
      prItem5=3.95;  //Price of item 5 in $'s
float sal_tax=6;     //sales tax percentage
float stSal,salTax,total; //Subtotal of sale, amount of Sales Tax, Total in $'s
    
    //Process values -> Map inputs to Outputs
stSal=prItem1+prItem2+prItem3+prItem4+prItem5;
salTax=stSal*sal_tax/PERCENT;
total=stSal+salTax;

    //Display Output
cout<<"Price of item 1                            =$"<<prItem1<<endl;
cout<<"Price of item 2                            =$"<<prItem2<<endl;
cout<<"Price of item 3                            =$"<<prItem3<<endl;
cout<<"Price of item 4                            =$"<<prItem4<<endl;
cout<<"Price of item 5                            =$"<<prItem5<<endl;
cout<<"The subtotal of Sale                       =$"<<stSal<<endl;
cout<<"The sales tax                              ="<<static_cast<int>(sal_tax)<<"%"<<endl;
cout<<"The amount of sales tax on items purchased =$"<<salTax<<endl;
cout<<"Total                                      =$"<<total<<endl;


    //Exit Program
    return 0;
}