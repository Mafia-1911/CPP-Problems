#include <iostream>
using namespace std;

class ComplexNumber{
    double real;
    double imaginary;
public:
    friend ComplexNumber Add(ComplexNumber,ComplexNumber);
    ComplexNumber(){
        real=0;
        imaginary=0;
    }

    ComplexNumber(double r,double i){
        real=r;
        imaginary=i;
    }
    void display(){
        cout<<"Your Number is: "<<real<<"+"<<imaginary<<"i"<<endl;
    }
    //A method to add two complex numbers and returns a complex number as well