/* 
 * File:   main.cpp
 * Author: Gaitee ara Tanvir
 * Created on September 20,2016 11:26 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream> //Input/Output objects
#include <iomanip>  //Format Library
#include <cstdlib>  //Randon number seed
#include <cmath>    //Square Root Function
#include <ctime>    //Time to set random number seed
using namespace std; //Name-space used in the System Library

//User Libraries Here

//Global Constants
const float MAXRAND=pow(2,31)-1; //Max signed positive value for int

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declaration of Variables 
    float n, guess,r;
    float scale=90,shift=10;
    short counter=0;
    
    //Input values - float random number (10,100) vs. 
    //               integer random number rand()%scale+shift [10,100]
    n-rand()/MAXRAND*scale+shift;
    guess=n/2;
    
    //Display the initialization 
    cout<<"The number to find the square root of = "<<n<<endl;
    cout<<"The initial guess = "<<guess<<endl;
    
    //First Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass"<<counter<<" [r,guess] = ["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    
    //Second Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass"<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
            
   //Third Pass
     r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass"<<counter<<" [r,guess] = ["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Fourth pass
     r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass"<<counter<<" [r,guess] = ["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Fifth Pass
     r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass"<<counter<<" [r,guess] = ["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Sixth Pass
     r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass"<<counter<<" [r,guess] = ["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //Seventh Pass
     r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"Pass"<<counter<<" [r,guess] = ["<<setw(7)<<r
            <<","<<setw(7)<<guess<<"]"<<endl;
    
    //The answer or solution is
    cout<<"The sqrt ["<<n<<"]"<<sqrt(n)<<endl;
    
    //Exit
    return 0;
}

