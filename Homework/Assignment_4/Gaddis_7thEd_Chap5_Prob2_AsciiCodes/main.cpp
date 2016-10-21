/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 15, 2016, 12:41 AM
   Purpose:  display the characters for the ASCII codes 0 through 127
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
    char asc;  
    int count;
    
    //Process values -> Map inputs to Outputs
    asc=0;
    for (count=0; count<=127; count++)
    {
        cout<<asc<<endl;
        asc++;
    }
    
    //Display Output

    //Exit Program
    return 0;
}
