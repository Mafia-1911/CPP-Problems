#include <iostream>
#include <bits/stdc++.h> 
//importing the entire library
using namespace std;

int main() {
  int n=5;
  int arr[5]={1,2,3,4,5};
  //rotate by k places 
  int k;
  cin>>k;
  //to avoid missing the later values you need to have a separate array 
  vector<int>v(n);
  //(k+i)%n = i 
  for(auto i=0;i<5;i++){
   v[(k+i)%n]=arr[i];
  }
  for(auto i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
  }
  


  return 0;
}
