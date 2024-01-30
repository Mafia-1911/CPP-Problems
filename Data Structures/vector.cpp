#include<iostream>
using namespace std;
#include<vector>


// dynamic Array - Stored in contiguous memory
// whenever the size exceeps , it reallocats with double the size 
//
// 
int main(int argc, char const *argv[])
{   
      //size - number of elements 
    vector<int> vect;
    vector<int>v(100,0);//creates a vector with 100 elements space initializing everyone as 0 

    //capacity - total how many elements can we keep 
    cout<<"Capacity is : "<< vect.capacity()<<endl;
    vect.push_back(1);
    vect.push_back(5);
    

    cout<<vect.at(2); //5  same as vect[2]

    cout<<"Front"<<vect.front()<<endl;
    cout<<"Back: "<<vect.back()<<endl;
    //iterating over a vector 
    for(int i:vect){
        cout<<i<<endl;
        //cout<<i<<" ";
    }

    //removing elements 
    vect.pop_back();
 
    return 0;
}
