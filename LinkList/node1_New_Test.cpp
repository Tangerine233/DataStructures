// Name: Kainuo He
// Class: CS 3305/Section#
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 3


//Write an interactive test program (Save it in file node1_Test.cpp) to test class node1.

#include "node1.h"
#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include "node1_New.h"

using namespace main_savitch_5;
using namespace std;



main(){
    
    int userSelect = 0;
    double userValue =0;
    size_t userPosition = 0;
    
    bool end =false;
    
    node *header;
    header = NULL;
    
    node *header2;
    header2 = NULL;
    
    node *header_copy;
    node *tail_copy;
    header_copy = NULL;
    tail_copy = NULL;
    
    while (!end){
        //promt user to select in menu
        printf("------------- MAIN MENU ------------------\n1. Test function std::size_list_length\n2. Test function void list_head_insert\n3. Test function void list_insert\n4. Test function node *list_search\n5. Test function const node *list_search\n6. Test function node *list_locate\n7. Test function const node *list_locate\n8. Test function void list_head_remove\n9. Test function void list_remove\n10. Test function void list_clear\n11. Test function void list_copy\n12. Display List\n13. Test function delet_reps\n14. Test function sort_list\n15. Test function split_list\n\nEnter option number: ");
        cin>>userSelect;
        
        switch(userSelect){
            case 1:
                cout<<"List length is: "<<list_length(header)<<endl;
                break;
            
            case 2:
                cout<<"Enter a double number for new header: "<<endl;
                cin>>userValue;
                if (header != NULL){
                    list_head_insert(header, userValue);
                }
                else {
                    list_head_insert(header, userValue);
                }
                
                break;
            
            case 3:
                cout<<"Enter a double number to insert to the end of the : "<<endl;
                cin>>userValue;
                list_insert(tail(header), userValue);
                break;
            
            case 4:
                cout<<"Enter a double number that you want to search: "<<endl;
                cin>>userValue;
                if(list_search(header, userValue)!=NULL){
                    cout<<userValue<<" founded."<<endl;
                }
                else cout<<userValue<<" is not in the linked-list."<<endl;
                break;
            
            case 5:
                cout<<"Enter a double number that you want to search: "<<endl;
                cin>>userValue;
                const node *temp_5;
                temp_5 = header;
                if(list_search(temp_5, userValue)!=NULL){
                    cout<<userValue<<" founded."<<endl;
                }
                else cout<<userValue<<" is not in the linked-list."<<endl;
                delete temp_5;
                break;
            
            case 6:
                cout<<"Enter node location: "<<endl;
                cin>>userPosition;
                if(userPosition<0){
                    cout<<"*********invalid input*********"<<endl;
                    break;
                }
                cout<<"Value in node location "<<userPosition<<" is: "<<list_locate(header, userPosition+1)->data()<<endl;
                break;
            
            case 7:
                cout<<"Enter node location: "<<endl;
                cin>>userPosition;
                if(userPosition<0){
                    cout<<"*********invalid input*********"<<endl;
                    break;
                }
                const node *temp_7;
                temp_7 = header;
                cout<<"Value in node location "<<userPosition<<" is: "<<list_locate(temp_7, userPosition+1)->data()<<endl;
                delete temp_7;
                break;
            
            case 8:
                list_head_remove(header);
                cout<<"Header Pointer deleted.\n"<<endl;
                break;
            
            case 9:
                list_remove(pre(header));
                cout<<"Tail Pointer deleted.\n"<<endl;
                break;
                
            case 10:
                list_clear(header);
                cout<<"Linked-list cleared.\n"<<endl;
                break;
            
            case 11:
                list_copy(header, header_copy, tail_copy);
                cout<<"Linked-list is copied.\n"<<endl;
                break;
            
            case 12:
                node *temp_12;
                temp_12 = header;
                while (temp_12!=NULL){
                    cout<<temp_12->data()<<" ";
                    temp_12 = temp_12->link();
                }
                cout<<"\n"<<endl;
                delete temp_12;
                break;
            
            case 13:
                cout<<"The linked-list without repeated values is:"<<endl;
                node *temp_13;
                temp_13 = delete_reps(header);
                while (temp_13!=NULL){
                    cout<<temp_13->data()<<" ";
                    temp_13 = temp_13->link();
                }
                cout<<"\n"<<endl;
                delete temp_13;
                break;
                
            case 14:
                sort_list(header);
                cout<<"The linked-list is sorted."<<endl;
                break;
                
            case 15:
                cout<<"Enter the value that you want to split by:"<<endl;
                cin>>userValue;
                
                header2 = split_list(header, userValue);
                cout<<"The linked-list is Splited."<<endl;
                cout<<"List 1:"<<endl;
                node *temp_15;
                temp_15 = header;
                while (temp_15!=NULL){
                    cout<<temp_15->data()<<" ";
                    temp_15 = temp_15->link();
                }
                cout<<endl;
                
                cout<<"List 2:"<<endl;
                temp_15 = header2;
                while (temp_15!=NULL){
                    cout<<temp_15->data()<<" ";
                    temp_15 = temp_15->link();
                }
                cout<<"\n"<<endl;
                break;
                
            case 16:
                end =true;
                break;
            
            default:
                printf("\n\n*********invalid input**********\n\n");
        }
        
        
    }
}