#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

///stl trick 
// sort(input.begin(),input.end())
// do{ans.push_back(input)}
// while(next_permutation(input.begin(),input.end()))

//recursive SOlution 
void permute(vector<int> &input,int idx){
    //base case if we have reached the last element 
    if(idx==input.size()){
        ans.push_back(input);
        return;
    }
    for(int i=idx;i<input.size();i++){
        swap(input[i],input[idx]);
        permute(input,idx+1);
        swap(input[i],input[idx]);
    }

}

int main()
{   int n;
    cin>>n;
    vector<int>input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    //taking input 
    // for(auto &i:input)
    //     cin>>i;
    //permute(input,0);
//using do while loop 
    sort(input.begin(),input.end());
    do{
        ans.push_back(input);
    }while(next_permutation(input.begin(),input.end()));
    //printing the permutation 
    // [[],[]]
    for(auto v:ans){
        for(auto i:v){
            cout<<i<<" ";
            
        }
        cout<<"\n";
    }
    
    
    return 0;
}




