#include <bits/stdc++.h>
using namespace std;
//map stores in key-value pair 

int main()
{
    map<int,string>myMap;
    myMap[1]="Hello";
    myMap[2]="World";
//inserting in a map 
myMap.insert({5,"How are you"});
    for(auto i:myMap){
        cout<<i.first<<" "<<i.second<<endl;
    }

//finding and printing 
auto it=myMap.find(5);
for(auto i=it;i!=myMap.end();i++){
    cout<<(*i).first<<" ";
}
    return 0;
}
