#include <bits/stdc++.h>
#include <array>
using namespace std;
    array<int,10> rotate(int b[],int size,int p);
    int find(int arr[],int s,int toFind);

//identify the sorted half array
//check if target is lying there
int main(){
    
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    //rotate by 4 elements 
    array<int,10>arr2=rotate(arr,10,4);
    for(auto i:arr2){
        cout<<i<<" ";
    }
    //search in a rotated sorted Array 
    find(arr2,10,3);//array,size,what to find 
    return 0;
}
array<int,10> rotate(int b[],int size,int p){
    //inplace shifting isnt possible , we would loose out on the right elements 
    array<int,10>resultantArr;
    for(auto i=0;i<size;i++){
        resultantArr[(i+p)%size]=b[i];
    }
    
    return resultantArr;
    
}
int find(int arr[],int s,int toFind){
    int low=0;
    int high=s-1;
    
    while(low<=high){
        //if low>high then the value doesnt exist inside the array 
    int mid=(low+high)/2;
    if(mid==toFind){
        return mid;
    }//identify the sorted half
    if(arr[low]>arr[mid]){
        //right half is sorted 
        if(arr[low]<=toFind && arr[high]>=toFind){

        }
    }else{
        //left half is sorted 
    }

    }
  
    int mid=(start+end)/2;
    //check for left 
    if(mid==toFind){
        return mid;
    }
    if(start>mid){

    } else {
        //left side is sorted //check for right 

    }
    
}

