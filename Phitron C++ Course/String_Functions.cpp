#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1="Hello World";
    //Capacity
    cout<<s1.size()<<endl;
    cout<<s1.capacity()<<endl;
    s1.resize(45,'Y');
    cout<<s1<<endl;

    //index
    cout<<s1.at(0);
    cout<<s1[1];

    //insert
    //Inserting a character
    s1.push_back('E');
    s1+'S';
    //Inserting a string
    s1.append("SSSS");
    cout<<s1<<endl;
    //Inserting a portion
    s1.insert(5," !!!!!");
    cout<<"Now S1 is: "<<s1<<endl;

    ///Deletion
    s1.resize(5); //Slice
    s1.erase(5,10); //Position to start , How many from that point (include that too)
    s1.pop_back();
    string s2="asdMUSHasdTAaafSINs";
    cout<<s2;
    s2.pop_back();
    s2.erase(0,3);
    s2.erase(4,3);
    s2.erase(6,3);
    s2.erase(4,0);//no effect
    cout<<endl<<s2;

    //replace
    s2.replace(4,5,"FIQ");//Position to start , delete how many , What to replace with
    cout<<endl<<s2;






}