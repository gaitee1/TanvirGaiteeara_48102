/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on September 22, 2016, 9:41 AM
   Purpose:  Calculate total calories consumed from cookies
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
    unsigned short bag=40,      //Number of cookies a bag holds
               serv=10,      //Servings per bag 
               calServ=300; //Calories per serving
    float          ncook, calcook, //Number of cookies eaten, Number of calories per cookie
               total;    // Total calories consumed

    //Input values
    cout<<"Enter number of cookies eaten"<<endl;    
    cin>>ncook;

    //Process values -> Map inputs to Outputs
    calcook=calServ/serv;
    total=ncook*calcook;

    //Display Output
    cout<<"Number of cookies per bag            ="<<bag<<endl;
    cout<<"Servings per bag                     ="<<serv<<endl;
    cout<<"Calories per serving                 ="<<calServ<<endl;
    cout<<"Calories per cookie                  ="<<calcook<<endl;
    cout<<"Total calories consumed from cookies ="<<total<<endl;
    
    //Exit Program
    return 0;
}