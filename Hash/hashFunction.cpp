// Name: Kainuo He
// Class: CS 3305/Section#02
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 8

#include <string> //provide string
#include <iostream> //provide cout, cin

using namespace std;


//method to prin menu
void menu();

//Hash table 1 dividison method with linear probing
void HF1(int arr[],int size);

//Hash table 2 dividison method with quadratic probing
void HF2(int arr[],int size);

//Hash table 3 dividison method with double hashing
void HF3(int arr[],int size);

//Hash table 4 self designed: dividison method with cubic probing based on HF2
void HF4(int arr[],int size);


//main function
main(){
    
    //declare variables
    int userOpt = 0;
    int keys[] = {1234, 8234, 7867, 1009, 5438, 4312, 3420, 9487, 5418, 5299, 5078, 8239, 1208, 5098, 5195, 5329, 4543, 3344, 7698, 5412, 5567, 5672, 7934, 1254, 6091, 8732, 3095, 1975, 3843, 5589, 5439, 8907, 4097, 3096, 4310, 5298, 9156, 3895, 6673, 7871, 5787, 9289, 4553, 7822, 8755, 3398, 6774, 8289, 7665, 5523};
    int size = sizeof(keys)/sizeof(keys[0]);
    
    
    //loop while user is not exiting
    while(userOpt!=5){
        //print menu
        menu();
        
        //read option
        while (!(cin>>userOpt)){
            cin.clear();
            cin.ignore();
            break;
        }
        
        //call functions base on userOpt
        switch(userOpt){
            case 1: {
                HF1(keys,size);
                break;
            }
            case 2: {
                HF2(keys,size);
                break;
            }
            case 3: {
                HF3(keys,size);
                break;
            }
            case 4: {
                HF4(keys,size);
                break;
            }
            case 5: {
                break;
            }
            default: {
                cout<<endl<<endl<<"**************invalid input************"<<endl<<endl;
            }
        }
    }
    
}







//implement menu method
void menu(){
    cout<<"-----MAIN MENU--------------------------------------"<<endl;
    cout<<"1 - Run HF1 (Division method with Linear Probing)"<<endl;
    cout<<"2 - Run HF2 (Division method with Quadratic Probing)"<<endl;
    cout<<"3 - Run HF3 (Division method with Double Hashing)"<<endl;
    cout<<"4 - Run HF4 (Student Designed HF)"<<endl;
    cout<<"5 - Exit Program"<<endl;
    cout<<endl<<"Enter option number:"<<endl;
}



//****implement HF1 method*********************************************************************
void HF1(int arr[],int size){
    //create empty hash table and prob table
    int *hash = new int[size];
    int *prob = new int[size];
    //declare variables
    int sum =0;
    int position =0;
    
    //populate hash and prob table with 0s
    for (int i=0; i<size; i++){
        hash[i] = 0;
        prob[i] = 0;
    }
    
    //go through the array
    for (int i=0; i<size; i++){
         
         //loop for position
         for (int j=0; j<size; j++){
             
             //hashing method: division with linear probing
             position = (arr[i]%size+j)%size;
             
             //if the position in the hash table is empty put the value there and record prob
             if (hash[position]==0){
                 hash[position]=arr[i];
                 prob[position]=j;
                 break; //end loop
             }
         }
    }
    
    //count sum of probs
    for (int i =0; i<size; i++){
        sum = sum + prob[i];
    }
    
    //print results
    cout<<"Hash table resulted from HF1:"<<endl;
    cout<<"Index     Key     probes"<<endl;
    cout<<"------------------------"<<endl;
    for (int i =0; i<size; i++){
        if(i<10) cout<<"   "<<i<<"     "<<hash[i]<<"        "<<prob[i]<<endl;
        else cout<<"  "<<i<<"     "<<hash[i]<<"        "<<prob[i]<<endl;
    }
    cout<<"------------------------"<<endl;
    cout<<"Sum of probe values = "<<sum<<" probes."<<endl<<endl<<endl;
}






//****implement HF2 method*********************************************************************
void HF2(int arr[],int size){
    //create empty hash table and prob table
    int *hash = new int[size];
    int *prob = new int[size];
    //declare variables
    int sum =0;
    int position =0;
    
    //populate hash and prob table with 0s
    for (int i=0; i<size; i++){
        hash[i] = 0;
        prob[i] = 0;
    }
    
    //go through the array
    for (int i=0; i<size; i++){
         
         //loop for position
         for (int j=0; j<size; j++){
             
             //hashing method: divison with quadratic probing
             position = (arr[i]%size+j*j)%size; 
             
             //if the position in the hash table is empty put the value there and record prob
             if (hash[position]==0){
                 hash[position]=arr[i];
                 prob[position]=j;
                 break; //end loop
             }
         }
    }
    
    //count sum of probs
    for (int i =0; i<size; i++){
        sum = sum + prob[i];
    }
    
    //print results
    cout<<"Hash table resulted from HF2:"<<endl;
    cout<<"Index     Key     probes"<<endl;
    cout<<"------------------------"<<endl;
    for (int i =0; i<size; i++){
        if(i<10) cout<<"   "<<i<<"     "<<hash[i]<<"        "<<prob[i]<<endl;
        else cout<<"  "<<i<<"     "<<hash[i]<<"        "<<prob[i]<<endl;
    }
    cout<<"------------------------"<<endl;
    cout<<"Sum of probe values = "<<sum<<" probes."<<endl<<endl<<endl;
}









//****implement HF3 method*********************************************************************
void HF3(int arr[],int size){
    //create empty hash table and prob table
    int *hash = new int[size];
    int *prob = new int[size];
    //declare variables
    int sum =0;
    int position =0;
    string str = "";
    
    //populate hash and prob table with 0s
    for (int i=0; i<size; i++){
        hash[i] = 0;
        prob[i] = 0;
    }
    
    //go through the array
    for (int i=0; i<size; i++){
         
         //loop for position
         for (int j=0; j<50; j++){
             
             //hashing method: double hashing
             position = ((arr[i]%size)+j*(30-arr[i]%25))%size;
             
             //if the position in the hash table is empty put the value there and record prob
             if (hash[position]==0){
                 hash[position]=arr[i];
                 prob[position]=j;
                 break; //end loop
             }
             
             //if no empty position to hash, record the unable to hash postion
             if(j==49) {
                 str.append("Unable to hash key ");
                 str.append(to_string(arr[i]));
                 str.append(" to the table.\n");
             }
         }
    }
    
    //count sum of probs
    for (int i =0; i<size; i++){
        sum = sum + prob[i];
    }
    
    //print results
    cout<<"Hash table resulted from HF3:"<<endl;
    cout<<"Index     Key     probes"<<endl;
    cout<<"------------------------"<<endl;
    for (int i =0; i<size; i++){
        if(i<10) cout<<"   "<<i<<"     "<<hash[i]<<"        "<<prob[i]<<endl;
        else cout<<"  "<<i<<"     "<<hash[i]<<"        "<<prob[i]<<endl;
    }
    cout<<"------------------------"<<endl;
    cout<<"Sum of probe values = "<<sum<<" probes."<<endl;
    cout<<str<<endl<<endl; //unable to hash records
}








//****implement HF4 method*********************************************************************
void HF4(int arr[],int size){
    //create empty hash table and prob table
    int *hash = new int[size];
    int *prob = new int[size];
    //declare variables
    int sum =0;
    int position =0;
    
    //populate hash and prob table with 0s
    for (int i=0; i<size; i++){
        hash[i] = 0;
        prob[i] = 0;
    }
    
    //go through the array
    for (int i=0; i<size; i++){
         
         //loop for position
         for (int j=0; j<size; j++){
             
             //hashing method: divison with cubic probing
             position = ((arr[i]%size)+j*j*j)%size;
             
             //if the position in the hash table is empty put the value there and record prob
             if (hash[position]==0){
                 hash[position]=arr[i];
                 prob[position]=j;
                 break; //end loop
             }
         }
    }
    
    //count sum of probs
    for (int i =0; i<size; i++){
        sum = sum + prob[i];
    }
    
    //print results
    cout<<"Hash table resulted from HF2:"<<endl;
    cout<<"Index     Key     probes"<<endl;
    cout<<"------------------------"<<endl;
    for (int i =0; i<size; i++){
        if(i<10) cout<<"   "<<i<<"     "<<hash[i]<<"        "<<prob[i]<<endl;
        else cout<<"  "<<i<<"     "<<hash[i]<<"        "<<prob[i]<<endl;
    }
    cout<<"------------------------"<<endl;
    cout<<"Sum of probe values = "<<sum<<" probes."<<endl<<endl<<endl;
}