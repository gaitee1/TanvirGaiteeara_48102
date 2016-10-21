/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on September 27, 2016, 9:41 AM
   Purpose:  Calculate income generated from ticket sales
 */

//System Libraries
#include <iostream>  //Input/Output objects
#include <iomanip>  //Format Library
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short cost_a=15, cost_b=12, cost_c=9, //Cost of tickets in $'s
                   aSold,bSold,cSold;             //Number of tickets sold
    float          sale_a,sale_b,sale_c;          //Income generated from ticket sales
            
    //Input values
    cout<<"How many tickets were sold for Class A seats?"<<endl;
    cin>>aSold;
    cout<<"How many tickets were sold for CLass B seats?"<<endl;
    cin>>bSold;
    cout<<"How many tickets were sold for Class C seats?"<<endl;
    cin>>cSold;
    
    //Process values -> Map inputs to Outputs
    sale_a=cost_a*aSold;
    sale_b=cost_b*bSold;
    sale_c=cost_c*cSold;
    
    //Display Output
    cout<<fixed<<setprecision(2);
    cout<<"Income generated from sales of Class A seats =$"<<sale_a<<endl;
    cout<<"Income generated from sales of Class B seats =$"<<sale_b<<endl;
    cout<<"Income generated from sales of Class C seats =$"<<sale_c<<endl;  
 
    //Exit Program
    
    return 0;
}