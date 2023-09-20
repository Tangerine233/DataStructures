// Name: Kainuo He
// Class: CS 3305/Section#2
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1


#include "DailyTemps.h"

main(){
    int userDay = -1;
    
    //declare object w1
    DailyTemps w1;
    
    //display temps
    w1.printTemps();
    
    
    //change temp for one day
    while (userDay!=0){
        cout<<"\n\nEnter the day you want to change temperature: "<<endl;
        cout<<"1 (Monday)"<<endl;
        cout<<"2 (Tuesday)"<<endl;
        cout<<"3 (Tuesday)"<<endl;
        cout<<"4 (Thursday)"<<endl;
        cout<<"5 (Friday)"<<endl;
        cout<<"6 (Saturday)"<<endl;
        cout<<"7 (Sunday)"<<endl;
        cout<<"If you don't need to change, enter 0"<<endl;
        
        cin>>userDay;
        
        if (userDay==0) break;
        else if (userDay>=1 && userDay<=7){
            cout<<"Enter the new temperature for "<<w1.weekday[userDay]<<": ";
            cin>>w1.temp[userDay];
        }
        else cout<<"Invalid input\n"<<endl;
    }
    
    
    //display new temps
    w1.printTemps();
    
    cout<<endl;
    //print coolest day
    cout<<"Number of freezing days is "<<w1.Freezing()<<endl;
    //print warmest day
    cout<<"The warmest day of the week is "<<w1.weekday[w1.Warmest()]<<endl;
}

