#include <bits/stdc++.h>
using namespace std;
vector<int> reverser(vector<int>a){
    int start=0;
    int end=a.size()-1;
    while(end>start){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    return a;
}
void vectAdd(vector<int>num1,int n,vector<int>num2,int n2){
    //go from the back 
    int i=n-1,j=n2-1;
    int carry=0;
    
    vector<int>ans[3]={0};
    while(i>=0 && j>=0){
        //10+9
        int sum=num1[i]+num2[j]+carry;
        carry=floor(sum/10);
        //if its less than 10 , modulas returns the number itself 
        sum=sum%10;
        ans.push_back(sum);
    }
    reverser(ans);

    cout<<ans[0]<<" ";
}


int main()
{   vector<int>num1={1,1,1};
    vector<int>num2={1,1,1};

    vectAdd(num1,3,num2,3);
    return 0;
}