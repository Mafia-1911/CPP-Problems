#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the Number of rows" ;
    int row;    cin>>row ;
    cout<<"Enter the Number of Columns: " ;
    int col;    cin>>col ;

    //Creating a pointer array of size rows then , making an array of size columns and storing them in the pointer array 
    int** arr= new int*[row];
    for(int i=0;i<n;i++){
        arr[i]=new int[col];        //creating separate 1D arrays
    }
    //taking input
    cout<<"Enter the values: ";
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           cin>>arr[i][j];
       }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //freeing memory
    for(int i=0;i<n;i++){
        delete[] arr[i];
    }
    delete[] arr;
}
