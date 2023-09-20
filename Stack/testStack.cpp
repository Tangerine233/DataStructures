// Name: Kainuo He
// Class: CS 3305/Section#02
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 4

#include <stack>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>


using namespace std;


//1. Function topToButtom(…) takes a stack object of type integer and displays the stack content 
//from the top of the stack to the bottom of the stack. That is, the top value is printed first; while the 
//bottom value is printed last. This function does not change the stack content. See example 
//output below.
void topToButtom(stack<int> s) {
    while (!s.empty()){
        cout << s.top() <<" ";
        s.pop();
    }
}

void topToButtom(stack<string> s){
    while (!s.empty()){
        cout << s.top() <<" ";
        s.pop();
    }
}


//2. Function buttonToTop(…) takes a stack object of type double and displays the stack content 
//from the bottom of the stack to the top of the stack. That is, the bottom value is printed first; while 
//the top value is printed last. This function does not change the stack content. See example 
//output format below,
void buttomToTop(stack<double> s){
    stack<double> x;
    
    while (!s.empty()){
        x.push(s.top());
        s.pop();
    }
    
    while (!x.empty()){
        cout << x.top() <<" ";
        
        x.pop();
    }
}



//3. Function flipStack(…) takes a stack object of type string and returns the same stack object
//with its content being flipped (re-arranged). That is, the stack content is changed by this function. 
//For example, if stack Names has the values (top to bottom): Ed, Tom, Bob, Amy before 
//calling this function, the stack will have the values (top to bottom): Amy, Bob, Tom, Ed after 
//the function is executed. See example output format below.
stack<string> flipStack(stack<string> s){
    stack<string> x;
    
    while (!s.empty()){
        x.push(s.top());
        s.pop();
    }
    
    return x;
}



//4. Function searchStack(…) takes 2 parameters: a stack object of type integer and an integer 
//target value. It returns true if the target value is on the stack at any place; otherwise it returns 
//false. This function does not change the stack content. See example output format below.
bool searchStack(stack<int> s, int target){
    
    while (!s.empty()){
        if (s.top() == target) return true;
        s.pop();
    }
    
    return false;
}




//clear stack after each call
void clear(stack<int> & s){
    while (!s.empty()){
        s.pop();
    }
}
void clear(stack<double> & s){
    while (!s.empty()){
        s.pop();
    }
}
void clear(stack<string> & s){
    while (!s.empty()){
        s.pop();
    }
}


//print menu
void menu(){
    cout<<"-----MAIN MENU-----"<<endl;
    cout<<"1. Test function topToButtom with integer stack"<<endl;
    cout<<"2. Test function buttonToTop with double stack"<<endl;
    cout<<"3. Test function flipStack with string stack"<<endl;
    cout<<"4. Test function searchStack with integer stack"<<endl;
    cout<<"5. Exit program"<<endl;
    cout<<"\nEnter option number: ";
}





//main function
main(){
    //declare values
    stack<int> int_s;
    stack<int> int_s_temp;
    stack<double> double_s;
    stack<double> double_s_temp;
    stack<string> string_s;
    stack<string> string_s_temp;
    stack<string> string_s_fliped;
    
    int intTemp;
    double doubleTemp;
    string stringTemp;
    int target;
    
    int userOption = 0;
    string userInput;
    
    
    
    //loop for user option
    while (userOption != 5){
        menu();
        cin>>userOption;
        switch (userOption){
            
            

            case 1: {
                cout<<"Test function topToButtom with integer stack"<<endl;
                cin.ignore();
                cout<<"Stack content:   ";
                getline(cin,userInput);
                istringstream iss(userInput);
                while (iss >> intTemp){
                    int_s_temp.push(intTemp);
                }
                while (!int_s_temp.empty()){
                    int_s.push(int_s_temp.top());
                    int_s_temp.pop();
                }
                
                cout<<"Function output:   ";
                topToButtom(int_s);
                
                clear(int_s_temp);
                clear(int_s);
                
                cout<<endl<<endl;
                break;
            }
            
            
            
            case 2: {
                cout<<"Test function buttonToTop with double stack"<<endl;
                cin.ignore();
                cout<<"Stack content:   ";
                getline(cin,userInput);
                istringstream iss(userInput);
                while (iss >> doubleTemp){
                    double_s_temp.push(doubleTemp);
                }
                while (!double_s_temp.empty()){
                    double_s.push(double_s_temp.top());
                    double_s_temp.pop();
                }
                
                cout<<"Function output:   ";
                buttomToTop(double_s);
                
                clear(double_s_temp);
                clear(double_s);
                
                cout<<endl<<endl;
                break;
            }
            
            
            
            case 3: {
                cout<<"Test function flipStack with string stack"<<endl;
                cin.ignore();
                cout<<"Stack content:   ";
                getline(cin,userInput);
                istringstream iss(userInput);
                while (iss >> stringTemp){
                    string_s_temp.push(stringTemp);
                }
                while (!string_s_temp.empty()){
                    string_s.push(string_s_temp.top());
                    string_s_temp.pop();
                }
                
                cout<<"Function output:   ";
                string_s_fliped = flipStack(string_s);
                topToButtom(string_s_fliped);
                
                
                clear(string_s_temp);
                clear(string_s);
                clear(string_s_fliped);
                
                cout<<endl<<endl;
                break;
            }
            
            
            
            case 4: {
                cout<<"Test function searchStack with integer stack"<<endl;
                cin.ignore();
                cout<<"Stack content:   ";
                getline(cin,userInput);
                istringstream iss(userInput);
                while (iss >> intTemp){
                    int_s_temp.push(intTemp);
                }
                while (!int_s_temp.empty()){
                    int_s.push(int_s_temp.top());
                    int_s_temp.pop();
                }
                
                cout<<"Target value:   ";
                cin>>target;
                
                cout<<"Function output: ";
                if (searchStack(int_s, target)) cout<<"true";
                else cout<< "false";
                
                clear(int_s_temp);
                clear(int_s);
                
                cout<<endl<<endl;
                break;
            }
            
            
            
            
            case 5: {
                cout<<"Exit program"<<endl;
                break;
            }
            default:
                cout<<"********invalid input********\n"<<endl;
        }
    }
    
    
}
