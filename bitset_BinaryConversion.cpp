#include<iostream>
#include<bitset>
using namespace std;
int main() {
    // basicIO();
    // Your cpp code here
    int tc;
    long long int x;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        cin>>x;
        bitset<8> binary(x);
        int nOnes=0;
        for(int i2=0;i2<8;i2++){
            if(binary.to_string()[i2]==1){
                nOnes++;
            }
        }
        if(nOnes%2==0){
            cout<<"Case "<<tc<<": even";
        }else{
            cout<<"Case "<<tc<<": odd";
        }

    }
    return 0;
}

