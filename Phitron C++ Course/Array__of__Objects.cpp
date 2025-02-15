#include <bits/stdc++.h>
#include<iostream>
using namespace std;


class Student{
public:
    string name;
    int id;
    int marks;
};
/////Custom Compare Function
//Return the condition you want thats it !
//OR use if else -> true on the order you want , Since it works with two obejcts at a time
bool cmp(Student left,Student right){
    //    if(left.marks<right.marks){
    //        return true;
    //    }else if(left.marks > right.marks){
    //        return false;
    //    }
    return left.marks<right.marks;
}
bool cmpD(Student left,Student right){
    if(left.marks>right.marks){
        return true;
    }else return false;
}

bool crazyCMP(Student left,Student right){
    //Ascending Sort
    if(left.marks < right.marks ){
        return true;
    }else if( left.marks>right.marks){
        return false;
    }else {
        //If the marks are same , Sort using the roll
        if(left.id<right.id) return true;
        else return false ;
    }
}

int main(){
    int size;
    cout<<"Enter # of students? "<<endl;
    cin>>size;
    cin.ignore();

//   int array[size];
    Student nsu_students[size]; //Declaring Array of objects

