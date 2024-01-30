#include <bits/stdc++.h>
using namespace std;
//sets are way of storing unique elements no matter how many times you input 
//different elements only once it would be stored 

int main()
{
    set<int>s;
    cout<<s.size()<<endl;
    s.insert(5);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    for(auto i:s){
        cout<<i;
    }

//making an iterator for set 
set<int>::iterator it=s.begin();
it++;
//does the element exist 
s.find(3);//returns a iterator pointing to that element 
    
    return 0;
}
