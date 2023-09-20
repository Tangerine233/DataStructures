#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv)
{

    
    cout<<pow(10,3);
    
    
    int *a;
    int *b;
    
    a = new int[3];
    b = new int[3];
    
    a[0]=1;
    a[1]=2;
    a[2]=3;
    
    b[0]=7;
    b[1]=8;
    b[2]=9;
    
    for(int i =0; i<3; i++){
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    
    for(int i =0; i<3; i++){
        cout<<"b["<<i<<"] = "<<b[i]<<endl;
    }
    
    a = b;

    for(int i =0; i<3; i++){
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    
    for(int i =0; i<3; i++){
        cout<<"b["<<i<<"] = "<<b[i]<<endl;
    }
    
}
