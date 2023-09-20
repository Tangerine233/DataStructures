// Name: Kainuo He
// Class: CS 3305/Section#
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 3


#ifndef NODE1_NEW_H
#define NODE1_NEW_H

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include "node1.h"


namespace main_savitch_5{
    
    
    
    
    //a. Function delete_reps() that deletes all repeated values from the linked list. The function 
    //returns a new linked list without repeated values. The original linked list is preserved as is. 
    //Thus, this function involves copying nodes to the new linked list.
    node* delete_reps(node * header);
    
    
    //Function sort_list() that takes a linked list and sorts it in ascending order (smallest to 
    //largest) using selection sort algorithm (see below). The list may include repeated values. The 
    //function prototype would be void sort_list((node*& head_ptr);
     void sort_list(node*& header);
     
     
    //c. Function split_list() that take a specific value in the list (say split_value) and splits 
    //the list into 2 linked lists. First linked list contains all values before the split_value; and the 
    //second list contains all the values from the first instance of the split_value and beyond. For 
    //example,
    node* split_list(node *header,double n);
     
  
};

#endif // NODE1_NEW_H
