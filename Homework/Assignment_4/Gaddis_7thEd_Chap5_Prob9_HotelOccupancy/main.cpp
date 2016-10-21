/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 16, 2016, 9:41 AM
   Purpose:  Calculate the occupancy rate for a hotel
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
    unsigned int rooms=0,     //Number of Rooms on each floor
                 floors=0,    //Number of Floors
                 occ=0,       //Number of occupied rooms   
                 totalOcc=0,  //Total number of occupied rooms
                 totRoom=0,  //Total number of rooms
                 count=0;    //counter (loop)
    float        occPer;    //Percentage of occupied rooms
    
    //Input values
    do
    {               
        cout << "Input the number of floors"<<endl;
        cin >> floors;
    } while (floors < 1);
     for (int count = 1; count <= floors; count++)
    {
        if (count != 13) 
        {
            cout << "Floor " << floors << ":" << endl;
                
            do
            {
            cout << "Input number of rooms"<<endl;
            cin >> rooms;
            }
            while (rooms < 10); 
            cout << "Input number of rooms occupied"<< endl;
            cin >> occ;
            totalOcc += occ;
            totRoom += rooms;      
        }
    }
     occPer = static_cast<float> (totalOcc)/totRoom * 100;
    
    //Display Output
    cout << "Total number of rooms           "<<totRoom<<endl;
    cout << "Total number of occupied rooms  "<<totalOcc<<endl;
    cout << "Total number of unoccupied rooms"<<(totRoom - totalOcc)<<endl;
    cout << "The percentage of rooms occupied"<<occPer<< "%" <<endl;
    //Exit Program
    return 0;
}