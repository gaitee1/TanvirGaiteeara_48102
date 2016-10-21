/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on October 16, 2016, 6:00 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short yr, count,count_t;        //Number of years, counter, counter
    float rainfal=0, avgfall, rnfal;         //rainfall inches, average rainfall, rainfall
    
    //Input values
    cout<<"Input number of years you want to test :"<<endl;
    cin>>yr;
    for (count = 1; count<=yr; count++){
        for (count_t=1; count_t<= 12; count_t++){
            cout<<"Rainfall of month " <<count_t<< " in inches is : "<<endl;
            cin>>rnfal;
            rainfal = rainfal + rnfal;
        }
    }
    avgfall = rainfal/(yr*12);
    cout<<"-------------------------------------------------------"<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"The average rain fall of this interval was "<<avgfall<< " inches" <<endl;
    //Process values -> Map inputs to Outputs
    
    //Display Output

    //Exit Program
    return 0;
}