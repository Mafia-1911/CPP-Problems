#include <bits/stdc++.h>
using namespace std;

int main()

    //check is the number in among 2 to the power 
    int num;
    cin>>num;
    bool counter=false;
    if(num<pow(2,15)){
        for(int i=0;i<=15;i++){
            if(num==pow(2,i)){
                //cout<<"Yes its expressible"<<endl;
                counter=true;

            } 
        }
       
    }else{
        for(int i=15;i<=30;i++){
            if(num==pow(2,i)){
                //cout<<"yes its expressible"<<endl;
                counter=true;
            }
        }
    }
    if(counter){
        cout<<"Yes its expressible"<<endl;
    }else cout<<"No it isn't";

  
    
    return 0;
}
