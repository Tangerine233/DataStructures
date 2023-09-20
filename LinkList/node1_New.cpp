// Name: Kainuo He
// Class: CS 3305/Section#02
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 3


#include "node1_New.h"

namespace main_savitch_5{
    //a. Function delete_reps() that deletes all repeated values from the linked list. The function 
    //returns a new linked list without repeated values. The original linked list is preserved as is. 
    //Thus, this function involves copying nodes to the new linked list.
    node* delete_reps(node * header){
        node *header_new;
        header_new = new node(header->data(),NULL);
        
        bool rep = false;
        
        node *temp1;
        node *temp2;
        for (temp1 = header; temp1!=NULL; temp1=temp1->link()){
            rep = false;
            for (temp2 = header_new; temp2!=NULL; temp2=temp2->link()){
                if (temp2->data()==temp1->data()) rep = true;
            }
            if (!rep) list_insert(tail(header_new), temp1->data());
        }
        
        return header_new;
    }
    
    
    
    //Function sort_list() that takes a linked list and sorts it in ascending order (smallest to 
    //largest) using selection sort algorithm (see below). The list may include repeated values. The 
    //function prototype would be void sort_list((node*& head_ptr);
     
     
     /*
     void sort_list(node*& header){
        bool swape =false;
        node *temp1, *temp2, *cur, *pre_cur, *max, *pre_max;
        
        for (temp1 = header; temp1->link() != NULL; temp1=temp1->link()){
            max = temp1;
            pre_max = temp1;
            
            for (temp2 = temp1; temp2->link() != NULL; temp2 = temp2->link()){
                pre_cur = temp2;
                cur = temp2->link();
                if ( cur->data() > max->data() ){
                    max  = cur ;
                    pre_max = pre_cur;
                    swape =true;
                }
            } 
            
            std::cout<<" "<<max->data();
            
            if (swape) {
                pre_max->set_link(max->link());
                max->set_link(header);
                header = max;
                swape =false;
            }
        
        }
     }
     */
     
     
     
    void sort_list(node*& header){
        if (header == NULL || header->link()==NULL) return;
        
        double n_hold = 0;
        bool swape =false;

         
        node *ori_header = header;
        node *start_header = header;
        node *temp1, *temp2, *temp3, *cur, *pre_cur, *max, *pre_max;
        max = header;
        
        temp1 = start_header;
        while (temp1 != NULL){
            max = temp1;
            pre_max = temp1;
            
            for (temp2 = start_header; temp2->link() != NULL; temp2 = temp2->link()){
                if (temp2 == start_header && start_header != ori_header){
                    for (temp3 = ori_header; temp3->link() != NULL; temp3 = temp2->link()){
                        if (temp3->link()==start_header) pre_cur = temp3;
                    }
                    cur = temp2;
                }
                else{
                    pre_cur = temp2;
                    cur = temp2->link();
                }
                if ( cur->data() >= max->data() ){
                    max  = cur ;
                    pre_max = pre_cur;
                    swape =true;
                }
                
            }  
            
            
            if (swape) {
                
                n_hold = max->data();
                
                if (max == start_header){
                    start_header = start_header->link();
                    std::cout<<"Start_Header changed from "<<max->data()<<" to "<<start_header->data()<<std::endl;
                }
                else list_remove(pre_max);
                std::cout<<n_hold<<" is removed."<<std::endl;
                list_head_insert(header,n_hold);
                std::cout<<n_hold<<" is inserted to header."<<std::endl;
                swape = false;
                

            }
            else temp1=temp1->link();
        }
        
        for (temp1 = header; temp1 != NULL; temp1 = temp1->link()){
        if (temp1->link()->link()==NULL) {
             n_hold = temp1->link()->data();
             list_head_insert(header,n_hold);
             list_remove(temp1);
        }
        }
     }
     

     
    

    
     
    //c. Function split_list() that take a specific value in the list (say split_value) and splits 
    //the list into 2 linked lists. First linked list contains all values before the split_value; and the 
    //second list contains all the values from the first instance of the split_value and beyond. For 
    //example,
    node* split_list(node* header,double n){
        
        node *header_new;
        node *tail_new;
        header_new = new node();
        
        node *temp;
        for(temp = header; temp!=NULL; temp=temp->link()){
            if (temp->link()->data() == n){
                list_copy(temp->link(), header_new, tail_new);
                temp->set_link(NULL);
                break;
            }
        }
        
        return header_new;
    }

     
  

}

