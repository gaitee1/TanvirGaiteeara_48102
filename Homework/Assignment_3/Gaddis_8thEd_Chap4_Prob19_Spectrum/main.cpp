/* 
 * File:   main.cpp
 * Author: Gaitee ara Tanvir
 * Created on September 29, 2016, 12:07 PM
 * Purpose:  Input wave length and determine type of radiation
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants 

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declaration of Variables
    float waveLen;
    
    //Input values
    cout<<"Input wave length of radiation in Meters"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveLen;
    
    //Process values -> Map inputs to Outputs then display
    if     (waveLen>1e-2f) cout<<"Radio Band"<<endl;
    else if(waveLen>1e-3f) cout<<"Micro Wave Band"<<endl;
    else if(waveLen>7e-7f) cout<<"Infra-Red Band"<<endl;
    else if(waveLen>4e-7f) cout<<"Visible Band"<<endl;
    else if(waveLen>1e-8f) cout<<"Ultra-Violet Band"<<endl;
    else if(waveLen>1e-11f)cout<<"X-Ray Band"<<endl;
    else                   cout<<"Gamma-Ray Band"<<endl;

    //Exit Program
    return 0;
}

