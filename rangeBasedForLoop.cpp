#include <bits/stdc++.h>
using namespace std;

int main()
{   char string[]="hello hi there ";
    int counter=0;
    for(char s:string){
//printong the string 
        cout<<s<<" ";
//count something
    if(s=='h'){
        counter++;
    }
    }
    cout<<"\nH appears for "<<counter<<" number of times";

    
    return 0;
}
