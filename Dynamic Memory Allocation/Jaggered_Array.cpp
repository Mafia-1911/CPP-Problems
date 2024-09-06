#include<iostream>

using namespace std;

int main(){
    cout<<"Enter the Number of rows: " ;
     int r;  cin>>r;

  ///Making a jaggered Array
    int** rowJ=new int*[r];
    for(int i=0;i<r;i++){
        cout<<"enter the number of elements for row "<<i<<" ";
        int size;
        cin>>size;
        rowJ[i]=new int[size];
    }

}
