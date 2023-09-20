// Name: Kainuo HeclTabCtrl
// Class: CS 3305/Section#2
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1



#include "Rectangle.h"


//3. Non-argument (default) constructor function that creates a default rectangle (with default valuesabove).
Rectangle::Rectangle(){
    width = 1.00; 
    height = 1.00;
}
        
//4. Constructor function that creates a rectangle with specified width and height values from the user.
Rectangle::Rectangle(double w, double h){
    width = w;
    height = h;
}
        
Rectangle::~Rectangle(){
}
        
        
//5. Get functions for the data fields width and height to read their values (i.e., const functions).
double Rectangle::getWidth() const{
    return width;
}
double Rectangle::getHeight() const{
    return height;
}
        
//6. Function named getArea() that returns the area of the rectangle.
double Rectangle::getArea(){
    return width*height;
}



//7. Function named getPerimeter() that returns the perimeter of the rectangle.
double Rectangle::getPerimeter(){
    return 2*(width+height);
}


//8. Function printRectangle(String objectName)to printout a meaningful description of a rectangle object.
void Rectangle::printRectangle(string objectName){
    cout<<"Assuming rectangle "<<objectName<<" is "<<width<<" units wide and "<<height<<" units high."<<endl;
}


