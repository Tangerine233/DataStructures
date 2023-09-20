// Name: Kainuo He
// Class: CS 3305/Section#2
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1

#ifndef DAILYTEMPS_H
#define DAILYTEMPS_H

#include <string>
#include <iostream>

using namespace std;

class DailyTemps
{
    
    
public:

    //concept of daily temperatures for a week
    double temp[8];
    
    //name of the weekdays
    string weekday[8];
    

    //Constructor function that reads user input for daily temperature values for the week.
    //Use proper prompts for reading the user inputs.
    DailyTemps();
    ~DailyTemps();
    
    //Function setTemp(…) that allows re-setting the temperature for one day. The day is specified by 
    //its name (or by the array index of its position in the array). Use proper prompts for reading the 
    //inputs (day and temperature) from the user
    void setTemp(int weekDay, double temp);
    
    //Function Freezing() that returns the number of days with temperature below freezing (under 
    //32F) for the week.
    int Freezing();
    
    //Function Warmest() that returns the warmest day name in the week. If more than one day are 
    //warmest, return first warmest day name
    int  Warmest();
    
    //Function printTemps() to print out the temperatures for the week
    void printTemps();
    
};

#endif // DAILYTEMPS_H
