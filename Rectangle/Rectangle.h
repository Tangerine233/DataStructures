// Name: Kainuo He
// Class: CS 3305/Section#2
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 1

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <iostream>

using namespace std;


class Rectangle {
    public:
        //3. Non-argument (default) constructor function that creates a default rectangle (with default valuesabove).
        Rectangle();
        
        //4. Constructor function that creates a rectangle with specified width and height values from the user.
        Rectangle(double w, double h);
        
        ~Rectangle();
        
        
        //5. Get functions for the data fields width and height to read their values (i.e., const functions).
        double getWidth() const;
        double getHeight() const;
        
        
        //6. Function named getArea() that returns the area of the rectangle.
        double getArea();
        
        double getPerimeter();
        void printRectangle(string objectName);
        
        
    private:
        //1. Private double data field named width to store the rectangle width (default value is 1.00).
        //2. Private double data field named height to store the rectangle height (default value is 1.00)
        double width;
        double height;
        
        
        
    
};        


#endif // RECTANGLE_H