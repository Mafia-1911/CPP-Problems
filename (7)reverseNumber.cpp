#include <bits/stdc++.h>

using namespace std;
int reverseNum(int n){
    int ans=0;
    while(n>0){
        int digit=n%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            return 0;
        }
        ans=ans*10+digit;
        n/=10;
    }

    cout<<ans<<endl;
    return ans;
}
int reverseNum2(int n2){
    //we need number of digits 
    int digits=log10(n2);
    int ans;
    //base case 
    if(n2==0){return 0;} 
    if(n2>0){
        return ans=((n2%10)*pow(10,digits))+reverseNum2(n2/10);
    }
}
int main()
{
    int num;
    cin>>num;
    int temp=reverseNum(num);
    cout<<reverseNum2(temp);
    return 0;
}