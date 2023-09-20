// Name: Kainuo He
// Class: CS 3305/Section#2
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1


#include "Rectangle.h"

main(){
    
    double userWidth;
    double userHeight;
    
    
    //myRectangle is a default object. (i.e., uses default width and height).
    Rectangle myRectangle;
    
    
    //yourRectangle has width and height values specified by the user.
    cout<<"Enter your width: "<<endl;
    cin>>userWidth;
    cout<<"Enter your height: "<<endl;
    cin>>userHeight;
    Rectangle yourRectangle(userWidth,userHeight);
    
    
    //Using proper class functions, display the width, height, area, and perimeter for each object as follows
    cout<<"\nmyRectangle:\n------------"<<endl;
    cout<<"Width:      "<<myRectangle.getWidth()<<endl;
    cout<<"Height:     "<<myRectangle.getHeight()<<endl;
    cout<<"Area:       "<<myRectangle.getArea()<<endl;
    cout<<"Perimetter: "<<myRectangle.getPerimeter()<<endl;
    cout<<endl;
    myRectangle.printRectangle("myRectangle");
    
    cout<<"\nyouRectangle:\n------------"<<endl;
    cout<<"Width:      "<<yourRectangle.getWidth()<<endl;
    cout<<"Height:     "<<yourRectangle.getHeight()<<endl;
    cout<<"Area:       "<<yourRectangle.getArea()<<endl;
    cout<<"Perimetter: "<<yourRectangle.getPerimeter()<<endl;
    cout<<endl;
    yourRectangle.printRectangle("yourRectangle");
    
    
}