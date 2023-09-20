// Name: Kainuo He
// Class: CS 3305/Section#2
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1


#include "DailyTemps.h"




//Constructor function that reads user input for daily temperature values for the week.
//Use proper prompts for reading the user inputs.
DailyTemps::DailyTemps() {
    for (int i = 1; i <= 7;i++){
        
        //give the string name of the day
        switch (i){
            case 1:
                weekday[i] = "Monday    ";break;
            case 2:
                weekday[i] = "Tuesday   ";break;
            case 3:
                weekday[i] = "Wednesday ";break;
            case 4:
                weekday[i] = "Thursday  ";break;
            case 5:
                weekday[i] = "Friday    ";break;
            case 6:
                weekday[i] = "Saturday  ";break;
            case 7:
                weekday[i] = "Sunday    ";break;
            default:
                weekday[i] = "UnknownWeekDay";
        }
        
        //input temp for the day
        cout<<"Enter temperature(F) for "<<weekday[i]<<" : ";
        cin>>temp[i];
        
    }
}
DailyTemps::~DailyTemps() {
}



//Function setTemp(…) that allows re-setting the temperature for one day. The day is specified by 
//its name (or by the array index of its position in the array). Use proper prompts for reading the 
//inputs (day and temperature) from the user
void DailyTemps::setTemp(int day, double t){
    temp[day] = t;
}

//Function Freezing() that returns the number of days with temperature below freezing (under 
//32F) for the week.
int DailyTemps::Freezing(){
    int counter = 0;
    
    for (int i = 1; i <= 7;i++){
        if (temp[i]<32) counter++;
    }
    
    return counter;
}

//Function Warmest() that returns the warmest day name in the week. If more than one day are 
//warmest, return first warmest day name
int  DailyTemps::Warmest(){
    int highestDay = 1;
    
    for (int i = 1; i <= 7;i++){
        if (temp[i]>temp[highestDay]) highestDay = i;
    }
    
    return highestDay;
}


//Function printTemps() to print out the temperatures for the week
void DailyTemps::printTemps(){
    cout<<endl;
    for (int i = 1; i <= 7;i++){
        cout<<weekday[i]<<"          "<<temp[i]<<endl;
        
    }
}
    
