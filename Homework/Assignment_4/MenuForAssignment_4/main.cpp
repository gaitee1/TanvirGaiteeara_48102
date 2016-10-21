/* 
   File:   main
   Author: Gaitee ara Tanvir
   Created on October 17th, 10:30 PM
   Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format Library
#include <cmath>      //Log
#include <cstdlib>
#include <ctime>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem Gaddis 7thEd Chap5 Prob1-Sum of Numbers"<<endl;
        cout<<"2.  Type 2  for Problem Gaddis 7thEd Chap5 Prob2-Ascii Codes"<<endl;
        cout<<"3.  Type 3  for Problem Gaddis 7thEd Chap5 Prob3-Ocean Levels"<<endl;
        cout<<"4.  Type 4  for Problem Gaddis 7thEd Chap5 Prob4-Calories"<<endl;
        cout<<"5.  Type 5  for Problem Gaddis 7thEd Chap 5 Prob4-Calories"<<endl;
        cout<<"6.  Type 6  for Problem Gaddis 7thEd Chap5 Prob5-MembershipFeesIncrease"<<endl;
        cout<<"7.  Type 7  for Problem Gaddis 7thEd Chap5 Prob6-Distance Travelled"<<endl;
        cout<<"8.  Type 8  for Problem Gaddis 7thEd Chap5 Prob7-Pennies for Pay"<<endl;
        cout<<"9.  Type 9  for Problem Gaddis 7thEd Chap5 Prob9-Hotel Occupancy"<<endl;
        cout<<"10. Type 10 for Problem Gaddis 7thEd Chap5 Prob10-Average Rainfall"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Inside Problem Gaddis 7thEd Chap5 Prob1-Sum of Numbers"<<endl;
                 //Declaration of Variables
                int num,sum; //Number, Sum of numbers

                //Input values
                cout<<" This program calculates sum of numbers"<<endl;

                //Process values -> Map inputs to Outputs
                do {
                cout << "Enter the number that you want to calculate the sum of" << endl;
                cin >> num;
                } while (num < 0); 

                  for (int count=1; count<=num; count++)
                {
                       sum += count;
                }

                //Display Output
                cout<<"Sum of all number from 1 to "<<num<<" is "<<sum<<endl;
                cout<<endl;
                break;
            }
            case 2:{
                cout<<"Inside Problem Gaddis 7thEd Chap5 Prob2-Ascii Codes"<<endl;
                 //Declaration of Variables
                char asc;  
                int count;
                
                //Input values
                cout<<"This program displays the characters for the ASCII codes 0 through 127"<<endl;

                //Process values -> Map inputs to Outputs
                asc=0;
                for (count=0; count<=127; count++)
                {
                    cout<<asc<<endl;
                    asc++;
                }
                cout<<endl;
                break;
            }
            case 3:{
                cout<<"Inside Problem Gaddis 7thEd Chap5 Prob3-Ocean Levels"<<endl;
                //Declaration of Variables
                float ris=1.5f,    //Rising ocean level
                      level=0;    //ocean level

                //Input values
                cout<<"This program displays a table showing the number of millimeters that the ocean"
                        " will have risen each year for the next 25 years"<<endl;
                                              
                //Process values -> Map inputs to Outputs then display
                 for(int count=1; count<=25; count++)
                {
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"The ocean's level rose "<<level<<" Millimeters"<<endl;
                    level += ris;
                }
                cout<<endl;
                break;
            }
            case 4:{
                cout<<"Inside Problem Gaddis 7thEd Chap 5 Prob4-Calories"<<endl;
                cout<<"This program displays the number of calories burned after 10, 15, 20, 25, and 30 minutes"<<endl;
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
                cout<<endl;
                break;
            }
            case 5:{
                cout<<"Inside Problem Gaddis 7thEd Chap5 Prob20-Guessing Games"<<endl;
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declaration of Variables
                int range,nGuess;
                int number,answer;

                //Input values
                cout<<"This is the guessing game"<<endl;
                cout<<"Choose a range for the number to guess"<<endl;
                cin>>range;

                //Process values -> Map inputs to Outputs
                nGuess=log(range)/log(2)+1;
                cout<<"You have "<<nGuess<<" guesses to find the random number"<<endl;
                number=rand()%(range+1); //[0,range]

                //Display Results of each Guess
                for(int guess=1;guess<=nGuess;guess++){
                    cout<<"Input your guess"<<endl;
                    cin>>answer;
                    if(answer>number)cout<<"Guess to High"<<endl;
                    else if(answer<number)cout<<"Guess to Low"<<endl;
                    else{
                        cout<<"You guessed the number"<<endl;
                        exit(0);
                    }
                }
                cout<<"Sorry, too many guesses"<<endl;
                cout<<endl;
                break;
            }
            case 6:{
                cout<<"Inside Problem Gaddis 7thEd Chap5 Prob5-MembershipFeesIncrease"<<endl;
                cout<<"This program displays the projected membership rates for the next six years"<<endl;
                
                //Declaration of Variables
                float cFee=2500,iFee=0.04;   //Current fees, Increase in rate of Fees
                unsigned short yr;          //Year

                //Display Output
                for (yr = 2016;yr <= 2022; yr++)
                {
                    cFee += (cFee * iFee);
                    cout<<fixed<<showpoint<<setprecision(1);
                    cout<<"The membership fees increase every year after 6 years is $"<<cFee<<endl;
                }
                cout<<endl;
                break;
            }
            case 7:{
                cout<<"Inside Problem Gaddis 7thEd Chap5 Prob6-Distance Travelled"<<endl;
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
                cout<<endl;
                break;
            }
            case 8:{
                cout<<"Inside Problem Gaddis 7thEd Chap5 Prob7-Pennies for Pay"<<endl;
                cout<<"This program displays a table showing how much the salary was for each day"<<endl;
                
                //Declaration of Variables
                float  penny=0.01;
                unsigned int days;

                //Input values
                cout<<"Enter the number of days worked"<<endl;
                cin>>days;
                while (days<1)
                {
                    cout<<"The number of days worked should be greater than 1"<<endl;
                    cin>>days;
                }

                //Process -> map inputs to output and then Display 
                cout<<"Table of salary"<<endl;
                cout<<"---------------"<<endl;
                cout<<fixed<<showpoint<<setprecision(2);
                for(int count=1; count<=days; count++)
                    {
                    cout<<count<<"          $"<<penny<<endl;
                    penny*=2;
                    }
                cout<<endl;
                break;
            }
            case 9:{
                cout<<"Inside Problem Gaddis 7thEd Chap5 Prob9-Hotel Occupancy"<<endl;
                cout<<"This program calculates the occupancy rate for a hotel"<<endl;
                
                //Declaration of Variables
                unsigned int rooms,     //Number of Rooms on each floor
                             floors,    //Number of Floors
                             occ,       //Number of occupied rooms   
                             totalOcc,  //Total number of occupied rooms
                             totRoom;   //Total number of rooms
              
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
                        cout << "Input number of rooms (more than 10)"<<endl;
                        cin >> rooms;
                        }
                        while (rooms < 10); 
                        cout << "Input number of rooms occupied"<< endl;
                        cin >> occ;
                        totalOcc += occ;
                        totRoom += rooms;      
                    }
                }
                 
                //Display Output
                cout << "Total number of rooms            "<<totRoom<<endl;
                cout << "Total number of occupied rooms   "<<totalOcc<<endl;
                cout << "Total number of unoccupied rooms "<<(totRoom - totalOcc)<<endl;
                cout<<endl;
                break;
            }
            case 10:{
                cout<<"Inside Problem Gaddis 7thEd Chap5 Prob10-Avg Rainfall"<<endl;
                cout<<"calculate the average rainfall over a period of years"<<endl;
                
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
                cout<<endl;
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}