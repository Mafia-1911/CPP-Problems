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

//Taking input of array of objects
    for (int i = 0; i < size; ++i) {
        cout<<"Enter name of Student["<<i<<"]: "<<endl;
        getline(cin,nsu_students[i].name);
        cout<<"Enter id of Student["<<i<<"]: "<<endl;
        cin>>nsu_students[i].id;
        cout<<"Enter marks of Student["<<i<<"]: "<<endl;
        cin>>nsu_students[i].marks;
        cin.ignore();//Number can not be inputted before the getline string
        //Make sure you ignore before getline
    }


//Finding minimum marks inside the array: min(nsu_students[i],mn)
//finding minimum/maximum based on a attribute of an Object
Student min;
    min.marks=INT_MAX;

    for (int i = 0; i < size; ++i) {
        if(nsu_students[i].marks < min.marks){
            min=nsu_students[i];
        }
    }
    cout<<endl<<"The minimum Student is: "<<min.name<<" ID:"<<min.id<<" Marks:"<<min.marks;

    // Output of array of objects
    cout<<"before Sort"<< " **********************";
    for (int i = 0; i < size; ++i) {
        cout<<endl<<"Name of Student["<<i<<"]: "<<nsu_students[i].name<<endl;
        cout<<"Id of Student["<<i<<"]: "<<nsu_students[i].id<<endl;
        cout<<"Marks of Student["<<i<<"]: "<<nsu_students[i].marks<<endl;
    }

//SORTING ARRAY OF OBJECTS
//1. Use the sort function and a custom compare function
    sort(nsu_students,nsu_students+size,cmp);
//Sorting using a second parameter , ie if marks same sort using the roll


