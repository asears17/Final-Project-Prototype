//
//  main.cpp
//  Final_Project_Protoype
//
//  Created by Drew Sears on 6/21/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
void Introduction();
void gameplan();


int main()
{
    
    /*ifstream input("OTTimes.txt.rtf");
    if (input.fail()) {
        cout << "Files does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }*/

    Introduction();
    gameplan();

    
}


void Introduction()
{
    cout << "Welcome to Momentum Running, What is your name?" << endl;
    string name;
    cout << "Name: ";
    cin >> name;
    cout << "Hi " << name << " What is your current mile time?" << endl;
    
}

void gameplan()
{
    string miletime;
    cout << "Mile Time: ";
    cin >> miletime;
    cout << "You entered: " << miletime << endl;
    cout << "\n\n\n";
    cout << "Here is your OT(Oxygen Threshold) time: " << endl; //OT Ttime
    cout << "Here is your PPM time: " << endl; //PPM
    cout << "How many mile would you like to run a week? " << endl;
    int miles;
    cout << "Miles: ";
    cin >> miles;
    
}