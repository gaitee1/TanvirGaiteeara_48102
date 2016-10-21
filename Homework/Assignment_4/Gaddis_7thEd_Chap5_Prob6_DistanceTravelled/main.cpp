/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 13, 2016, 4:00 PM
   Purpose:  To calculate the distance travelled
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
    float dist, speed;  //Distance, Speed
    int time;
    
    //Input values
    do
    {
        cout<<"How many hours has the car traveled"<<endl;
        cin>>time;
    } while(time < 1);
    do
    {
      cout<<"What is the speed of the vehicle in mph?"<<endl;
      cin>>speed;
    } while(speed < 0);
        
    cout<<"Hour      Distance Traveled"<<endl;
    cout<<"---------------------------"<<endl;    
        
        
    //Process values -> Map inputs to Outputs then Display
    for(int count=1; count <= time; count++)
        {
            dist=speed*count;
            cout<<count<<"           "<<dist<<endl;
        }
    
    //Exit Program
    return 0;
}