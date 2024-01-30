#include<iostream>
using namespace std;
#include<list>
//list has two pointers at the start and end , hence direct access isnt possible 

int main()
{   list<int>L;

    L.push_back(2);
    L.push_front(1);
    L.pop_back();

    for(int i:L){
        cout<<i<<endl;
    }
    //size of the list 
    cout<<L.size()<<endl;

    //copying the list 
    list<int> n(L);
    for(int i:n){
        
    }
    return 0;
}
