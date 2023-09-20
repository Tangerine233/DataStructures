// Name: Kainuo He
// Class: CS 3305/Section#02
// Term: Fall 2021
// Instructor: Dr. Haddad
// Assignment: 8


#include <string> //provide string
#include <iostream> //provide cout, cin

using namespace std;


//method to print menu
void menu();

//method to print matrix
void printM(int **matrix, int size);

//method to return reachability matrix
int** reachability(int **matrix, int size, int counter);

//method to return number of cycles for the max length
int countLastCycles(int **matrix, int size, int length);

//method to return number of all cycles 
int countAllCycles(int **matrix, int size, int length);

//Depth-First Search for countCycles method
void cycleDFS(int **matrix, int size, bool marked[], int n, int vert, int start, int &count1, int &count2);

//method to return total path of the max nods in a matrix
int countLastPath(int **matrix, int size);

//method to return total path of all nods in a matrix
int countAllPath(int **matrix, int size);

//Depth-First Search for countPath method
void pathDFS(int **matrix, int size, int n, int vert, int &count1, int&count2);



//main method
main(){
    
    //declare values
    int userOpt = 0;
    int size = 5;
    int input =0;
    int **matrix;
    int temp;
    

    

    
    //loop for function
    while (userOpt!=3){
        //print menu
        menu();
        
        //read userOpt
        while (!(cin>>userOpt)){
            cin.clear();
            cin.ignore();
            break;
        }
        
        
        //functions
        switch(userOpt){
            //create new matrix
            case 1:{
                //prompt user for matrix size
                cout<<"Enter number of vertices for the Matrix:   ";
                while (!(cin>>size)){
                    cin.clear();
                    cin.ignore();
                    break;
                }
                
                //declare matrix
                matrix = new int*[size];
                for (int i =0;i<size;i++){
                    matrix[i] = new int[size];
                }
                
                //loop for each matrix spot
                for(int i=0;i<size;i++){
                    for(int j=0;j<size;j++){
                        //promt for each value in the matrix
                        cout<<"Enter A1["<<i<<","<<j<<"]: ";
                        while (!(cin>>input)){
                            cin.clear();
                            cin.ignore();
                            break;
                        }
                        matrix[i][j]=input;
                    }
                }
                cout<<endl<<endl<<endl;
                break;
            }
            
            //display matrix
            case 2:{
                //1. Print out the input matrix
                cout<<"Input Matrix:"<<endl;
                printM(matrix,size);
                cout<<endl;
                
                //2. Compute and print out the graph reachability matrix.
                cout<<"Reachability Matrix:"<<endl;
                printM(reachability(matrix,size,size),size);
                
                
                
                //3. Compute and print out the In-degree of each node of the graph. 
                cout<<endl<<"In-degree:"<<endl;
                for(int i =0;i<size;i++){
                    cout<<"Node "<<i+1<<" out-degree is ";
                    temp = 0;
                    for(int j =0;j<size;j++){
                        temp = temp + matrix[j][i];
                    }
                    cout<<temp<<endl;
                }
                
                
                //4. Compute and print out the Out-degree for each node of the graph.
                cout<<"Out-degree:"<<endl;
                for(int i =0;i<size;i++){
                    cout<<"Node "<<i+1<<" in-degree is ";
                    temp = 0;
                    for(int j =0;j<size;j++){
                        temp = temp + matrix[i][j];
                    }
                    cout<<temp<<endl;
                }
                
                //5. Compute and print out the total number of loops (also known as self-loops) in the graph.
                cout<<endl<<"Total number of self-loops: ";
                temp=0;
                for(int i=0;i<size;i++){
                    temp = temp + matrix[i][i];
                }
                cout<<temp<<endl;
                
                //6. Compute and print out the total number of cycles of length N (N is the number of nodes in the inputted graph).
                cout<<"Total number of cycles of length "<<size<<" edges: "<<countLastCycles(matrix,size,size)<<endl;
                
                //7. Compute and print out the total number of paths of length 1-edge.
                cout<<"Total number of paths of length "<<1<<" edge: "<<countLastCycles(matrix,size,1)<<endl;
                
                //8. Compute and print out the total number of paths of length N edges (N is the number of nodes in the inputted graph).
                cout<<"Total number of paths of length "<<size<<" edges: "<<countLastPath(matrix,size)<<endl;
                
                //9. Compute and print out the total number of paths of length 1 to N edges (N is the number of nodes in the inputted graph).
                cout<<"Total number of paths of length 1 to "<<size<<" edges: "<<countAllPath(matrix,size)<<endl;
                
                //10. Compute and print out the total number of cycles length 1 to N edges (N is the number of nodes in the inputted graph).
                cout<<"Total number of cycles of length 1 to "<<size<<" edges: "<<countAllCycles(matrix,size,size)<<endl;
                
                
                break;
            }
            case 3:{
                //stop while
                break;
            }
            default:{
                cout<<endl<<"*********invalid input********"<<endl<<endl;
            }
        }
        
        
        
    }
    
    
}



void menu(){
    cout<<"---MAIN MENU--------"<<endl;
    cout<<"1 - Enter Graph Data"<<endl;
    cout<<"2 - Print Outputs"<<endl;
    cout<<"3 - Exit Program"<<endl<<endl;
    cout<<"Enter option number:"<<endl;
}


void printM(int **matrix, int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            cout<<matrix[i][j]<<"    ";
        }
        cout<<endl;
    }
}


int** reachability(int **matrix, int size, int counter){
    //return empty matrix if counter is 0
    if (counter == 1) {
        int **temp = new int*[size];
        for (int i =0;i<size;i++){
            temp[i] = new int[size];
        }
        for (int i=0;i<size;i++){
            for (int j=0;j<size;j++){
                temp[i][j] = 0;
            }
        }
        return matrix;
    }
    
    //copy matrix to output
    int **output;
    output = new int*[size];
    for (int i =0;i<size;i++){
        output[i] = new int[size];
    }
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            output[i][j] = matrix[i][j];
        }
    }
    
    
    //populate output matrix
    for (int k=0;k<size;k++){
        for (int i=0;i<size;i++){
            for (int j=0;j<size;j++){
                output[i][j] = (output[i][j] + (matrix[i][k] * reachability(matrix, size, counter-1)[k][j]));
            }
        }
    }
    return output;
}




int countLastCycles(int **matrix, int size, int length){
    //mark all vertex unvisited
    bool marked[size];
    for (int i=0; i<size; i++){
        marked[i]=0;
    }
    
    
    //searching for cycle by using size-length+1 vertices
    int count1 =0;
    int count2 =0;
    for(int i=0; i<size;i++)
    
    for (int i=0; i<size-(length-1);i++){
        cycleDFS(matrix, size, marked, length-1, i, i, count1, count2);
        marked[i]=true;
    }
    return count1;
}


int countAllCycles(int **matrix, int size, int length){
    //mark all vertex unvisited
    bool marked[size];
    for (int i=0; i<size; i++){
        marked[i]=0;
    }
    
    
    //searching for cycle by using size-length+1 vertices
    int count1 =0;
    int count2 =0;
    for(int i=0; i<size;i++)
    
    for (int i=0; i<size-(length-1);i++){
        cycleDFS(matrix, size, marked, length-1, i, i, count1, count2);
        count2++;
        marked[i]=true;
    }
    return count2;
}


void cycleDFS(int **matrix, int size, bool marked[], int n, int vert, int start, int &count1, int &count2){
    // mark the vertex vert as visited
    marked[vert] = 1;
 
    // if the path of length (n-1) is found
    if (n == 0) {
        // mark vert as unvisited
        marked[vert] = 0;
 
        // Check if vertex vert can end with vertex start
        if (matrix[vert][start]!=0){
            count1++;
            return;
        } else return;
    }
 
    // For searching every possible path of length (n-1)
    for (int i = 0; i < size; i++)
        if (matrix[vert][i]){
            // DFS for searching path by decreasing length by 1
            cycleDFS(matrix, size, marked, n-1, i, start, count1, count2);
            count2++;
        }
 
    // marking vert as unvisited
    marked[vert] = false;
}












int countLastPath(int **matrix, int size){
    int count1 =0;
    int count2 =0;
    
    for (int i=0; i<size;i++){
        pathDFS(matrix, size, size, 0, count1, count2);
    }
    return count1;
}

int countAllPath(int **matrix, int size){
    int count1 =0;
    int count2 =0;
    for (int i=0; i<size;i++){
        pathDFS(matrix, size, size, i, count1, count2);
    }
    return count2;
}

void pathDFS(int **matrix, int size, int n, int vert, int &count1, int&count2){

    //return if reach end
    if (n == 0) {
        count1++;
        return;
    }
    
    // For searching every possible path of length (n-1)
    for (int i = 0; i < size; i++){
        if (matrix[vert][i]!=0){
            // DFS for searching path by decreasing length by 1
            pathDFS(matrix, size, n-1, 0, count1, count2);
            count2++;
        }
    }
}
