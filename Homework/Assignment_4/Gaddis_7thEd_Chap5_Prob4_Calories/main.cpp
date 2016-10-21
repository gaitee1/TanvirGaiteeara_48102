/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 15, 2016, 5:01 PM
   Purpose:  To display the number of calories burned
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
    float calBurn=3.9f, //Calories Burned
          totBurn;     //Total Calories Burned
    int   min;        //Minutes
                   
    //Process values -> Map inputs to Outputs
    for (min = 10;min <= 30;min += 5)
    {
        totBurn=calBurn*min;
        cout<<"Calories burned every 5 minutes after 10 minutes = "<<totBurn<<" "<<endl;
  
    }
     
    //Exit Program
    return 0;
}