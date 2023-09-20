// Name: Kainuo He
// Class: CS 3305/Section#02
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 4


#include <cassert> // Provides assert
#include <cctype> // Provides isalpha, toupper
#include <cstdlib> // Provides EXIT_SUCCESS
#include <iostream> // Provides cout, cin, peek
#include <queue> // Provides the queue template class
#include <stack> // Provides the stack template class
#include <string>


using namespace std;



//checkAlpha() to check all char in a string
bool checkAlpha(const string &str){
    for(size_t i = 0; i < str.size(); i++){
        if( !isalpha(str[i]) || !isspace(str[i])) return true;
    }
    return false;
}
//overload toupper() for string
string toupper(const string &str){
    string s;
    for(size_t i = 0; i < str.size(); i++){
        if (isalpha(str[i])) s += toupper(str[i]);
    }
    return s;
}





//option 1
// A program to test whether an input line is a palindrome. The program ignores spaces,
// punctuation, and the difference between upper- and lowercase letters.
void option_1(){
    queue<char> q;
    stack<char> s;
    char letter;
    queue<char>::size_type mismatches = 0; // Mismatches between queue and stack
    
    cout << "You selected:  Option 1" <<endl;
    cout << "You entered:   ";
    cin.ignore();
    while (cin.peek( ) != '\n'){
        cin >> letter;
        if (isalpha(letter)){
            q.push(toupper(letter));
            s.push(toupper(letter));
        }
    }
    
    while ((!q.empty( )) && (!s.empty( ))){
        if (q.front( ) != s.top( ))
        ++mismatches;
        q.pop( );
        s.pop( );
    }
    
    cout << "judgment:      ";
    if (mismatches == 0) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    
}




//option 2
void option_2(){
    queue<string> q;
    stack<string> s;
    string letter;
    queue<string>::size_type mismatches = 0; // Mismatches between queue and stack
    cin.ignore();
    cout << "You selected:  Option 2" <<endl;
    cout << "You entered:   ";
    while (cin.peek( ) != '\n'){
        cin >> letter;
        if (checkAlpha(letter)){
            q.push(toupper(letter));
            s.push(toupper(letter));
        }
    }
    
    while ((!q.empty( )) && (!s.empty( ))){
        if (q.front() != s.top()){
            ++mismatches;
        }
        q.pop( );
        s.pop( );
    }
    
    cout << "judgment:      ";
    if (mismatches == 0) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;

}





//print menu
void menu(){
    cout<<"-----MAIN MENU-----"<<endl;
    cout<<"1. Test character-by-character palindrome"<<endl;
    cout<<"2. Test word-by-word palindrome"<<endl;
    cout<<"3. Exit program"<<endl;
    cout<<"\nEnter option number: ";
}









//main function
main(){
    int userOption = 0;
    
    while (userOption != 3){
        //print menu
        menu();
        //read user option
        cin>>userOption;
        
        switch (userOption){
            case 1:
                option_1();
                cout<<endl<<endl;
                break;
            case 2:
                option_2();
                cout<<endl<<endl;
                break;
            case 3:
                cout<<"Exit Program";
                break;
            default:
                cout<<"\n***********invalid input***********\n"<<endl;
        }
        
        
        
    }
    
    
}