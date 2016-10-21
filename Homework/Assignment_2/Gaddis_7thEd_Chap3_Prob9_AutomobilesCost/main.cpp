/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on September 26, 2016, 9:41 AM
   Purpose:  Calculate the monthly and annual cost of operating an automobile
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
    float loan,  //Loan payment per month in $'s
          insur, //Insurance payment per month in $'s
          gas,   //Cost of gas per month in $'s
          oil,   //Oil cost per month in $'s
          tires, //Tire cost per month in $'s
          maint, //Maintenance cost per month in $'s
          mnthly, //Total monthly cost in $'s
          annual; //Total annual cost in $'s
    
    //Input values
    cout<<"Monthly costs for the following expenses in $'s"<<endl;
    cout<<"Enter loan payment"<<endl;
    cin>>loan;
    cout<<"Enter insurance payment"<<endl;
    cin>>insur;
    cout<<"Enter cost of gas"<<endl;
    cin>>gas;
    cout<<"Enter cost of oil"<<endl;
    cin>>oil;
    cout<<"Enter cost of tires"<<endl;
    cin>>tires;
    cout<<"Enter maintenance costs"<<endl;
    cin>>maint;
    
    //Process values -> Map inputs to Outputs
    mnthly=loan+insur+gas+oil+tires+maint;
    annual=mnthly*12;
            
    //Display Output
    cout<<"The total monthly cost of these expenses =$"<<mnthly<<endl;
    cout<<"The total annal cost of these expenses   =$"<<annual<<endl;
    
    //Exit Program
    return 0;
}
