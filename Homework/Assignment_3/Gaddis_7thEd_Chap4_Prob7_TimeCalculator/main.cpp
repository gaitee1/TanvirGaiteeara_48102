/* 
   File:   main
   Author: Gaitee Ara Tanvir
   Created on August 29, 2016, 9:41 AM
   Purpose:  
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
    float sec, days, min, hrs; //Seconds, Days, Minutes, Hours
    
    //Input values
    cout<<"Enter the number of seconds"<<endl;
    cin>>sec;
    
    //Process values -> Map inputs to Outputs
    min=sec/60;
    hrs=sec/3600;
    days=sec/86400;
    
    //Display Output
     if (sec>=86400)
         cout<<sec<<" seconds equal "<<days<<" days "<<endl;
     else if (sec>=3600)
         cout<<sec<<" seconds equal "<<hrs<<" hours "<<endl;
     else if (sec>=60)
         cout<<sec<<" seconds equal "<<min<<" minutes "<<endl;
     else  
         cout<<sec<<" seconds equal "<<sec<<" seconds "<<endl;
    
    //Exit Program
    return 0;
}
