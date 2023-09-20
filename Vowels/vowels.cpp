// Name: Kainuo He
// Class: CS 3305/Section#02
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 5

//FILE: vowels.cpp


#include <string> //provide string
#include <iostream> //provide getline, cout, cin

using namespace std; // Allows all Standard Library items to be used


//method to check is Vowel char of a,e,i,o,u
bool isVowel(char c){
    switch (c){
        case 'a':return true;
        case 'e':return true;
        case 'i':return true;
        case 'o':return true;
        case 'u':return true;
    }
    return false;
}


//method to print menu
void menu(){
    cout<<"-----MAIN MENU-----"<<endl;
    cout<<"1. Read input string"<<endl;
    cout<<"2. Compute number of vowels"<<endl;
    cout<<"3. Exit program"<<endl<<endl;
    cout<<"Enter option number:";
}



//main method
main(){
    
    //declare values
    string userString = "";
    int userOpt = 0;
    int counter = 0;
    
    
    //loop for menu options while not exiting program
    while (userOpt!=3){
        //print menu
        menu();
        
        //read userOpt
        while (!(cin>>userOpt)){
            cin.clear();
            cin.ignore();
            break;
        }
        
        //functions depend on the userOpt
        switch (userOpt){
            
            //read a line of input string
            case 1:
                cout<<"Enter String: ";
                cin.ignore();
                getline(cin,userString);
                cout<<endl<<endl;
                break;
                
            //compute number of vowels
            case 2:
                for (size_t i = 0; i<userString.size(); i++){
                    if (isVowel(userString[i])) counter++;
                }
                cout<<"You entered string:  "<<userString<<endl;
                cout<<"Number of vowels:    "<<counter<<endl;
                counter = 0;
                cout<<endl<<endl;
                break;
                
            //exit loop
            case 3:
                break;
                
            //show invalid input
            default:
                cout<<"\n*************invalid input***************\n"<<endl;
            
        }
        
    }
}//end of program