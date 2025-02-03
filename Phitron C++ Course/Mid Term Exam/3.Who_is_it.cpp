#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Student{
public:
    int id;
    string name;
    char section;
    int totalMarks;
//    Student(int i,string n,char s,int m):id(i),
//    name(n),section(s),totalMarks(m){
//        cout<<"Constructed"<<this->name;
//    }
};
int main(){
    int tc;
    Student students[3];
    for (int i = 0; i < 3; i++) {
        //int id;string name;char section;int marks;
        cin>>students[i].id>>students[i].name>>students[i].section>>students[i].totalMarks;
    }
    for (int i = 0; i < 3; i++) {
        //int id;string name;char section;int marks;
        cout<<"For student: "<<i<<endl;
        cout<<students[i].id<<students[i].name<<students[i].section<<students[i].totalMarks;
    }


}
