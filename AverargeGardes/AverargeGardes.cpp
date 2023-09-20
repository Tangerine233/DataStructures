// Name: Kainuo He
// Class: CS 3305/Section#02
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 5

//FILE: AverargeGardes.cpp



#include <string> //provide string
#include <iostream> //provide getline, cout, cin
#include <sstream> //provide istringstream

using namespace std; // Allows all Standard Library items to be used


//method to find average grade
double findAverage(int arr[], int size, int position =0, double average=0){
    //if array is empty return 0
    if (size==0) return 0;
    
    //return the last value
    if (size-position==1)return (double)arr[position];
    
    //recursion while not reached the last value to get the average
    return (findAverage(arr, size, position+1, average)*(size-position-1)+arr[position])/(size-position);
}



//method to print menu
void menu(){
    cout<<"1. Read class size"<<endl;
    cout<<"2. Read class grades"<<endl;
    cout<<"3. Compute class average"<<endl;
    cout<<"4. Quit program"<<endl<<endl;
    cout<<"Enter option number:"<<endl;
}



//main method
main(){
    cout<<"****************"<<endl;
    string* temp1 = new string("123");
    string* temp2 = new string("345");
    cout<<*temp1+*temp2<<endl;
    cout<<"****************"<<endl;
    
    
    //declare values and assign default value
    int userOpt = 0;
    int NumOfStudents = 0;
    string gradeString = "";
    int gradeTemp = 0;
    int *grade;
    double average =0;
    
    
    
    //loop for the functions
    while (userOpt!=4){
        
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
            
            //read class size
            case 1: {
                //read userinput
                cout<<"Enter class size: ";
                while (!(cin>>NumOfStudents)){
                    cin.clear();
                    cin.ignore();
                    cout<<"\n**********invalid input************\n"<<endl;
                    break;
                }
                //create new array base on the new size
                grade = new int[(NumOfStudents)];
                cout<<endl<<endl;
                break;
            }
            
            
            //read class grade
            case 2:{
                //read line of string
                cout<<"Enter grades: ";
                gradeString = "";
                cin.ignore();
                getline(cin, gradeString);
                //store values in the string to the grade array
                istringstream iss(gradeString);
                for (int i =0; i<NumOfStudents; i++){
                    if (iss>>gradeTemp){
                        grade[i] = gradeTemp;
                    }
                }
                cout<<endl<<endl;
                break;
            }
            
            
            //compute class average
            case 3:{
                //print size and grade
                cout<<"You entered class size:  "<<NumOfStudents<<endl;
                cout<<"You entered grades:      ";
                for (int i =0; i < NumOfStudents; i++){
                    cout<<grade[i]<<" ";
                }
                cout<<endl;
                //call findAverage method to get the average grade
                average = findAverage(grade, NumOfStudents);
                //rounding average to 2 decimal place
                if ( (int)(average*1000)%10 >=5){
                    average = (int)(average*100+1)/100.0;
                }
                else {
                    average = (int)(average*100)/100.0;
                }
                //print average
                cout<<"Class average:           "<<average<<endl;
                cout<<endl<<endl;
                break;
            }
            
            
            //exit
            case 4:
                break;
            
            
            //invalid input
            default:
                cout<<"\n**********invalid input************\n"<<endl;
        }
    }
}//end of program