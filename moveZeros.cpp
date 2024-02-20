#include <bits/stdc++.h>
using namespace std;

int main()
{   int arr[5]={1,0,9,0,5};
int nonZero=0;
 for(auto i:arr){
        cout<<i<<" "<<endl;
    }
    for(int i=0;i<5;i++){
        if(i!=0){
           swap(arr[i],arr[nonZero]);
           nonZero++;
        }
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}
