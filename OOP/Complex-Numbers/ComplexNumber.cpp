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
ComplexNumber add(ComplexNumber num2){
        ComplexNumber result;
        result.real=this->real+num2.real;
        result.imaginary=this->imaginary+num2.imaginary;
        return result;
    }
    ComplexNumber multiply(ComplexNumber num2){
        ComplexNumber result;
        result.real=this->real*num2.real;
        result.imaginary=this->imaginary*num2.imaginary;
        return result;
    }
};

///Making a friend Function
ComplexNumber Add(ComplexNumber num1,ComplexNumber num2){
    ComplexNumber result;
    result.real=num1.real+num2.real;
    result.imaginary=num1.imaginary+num2.imaginary;
    cout<<"Your Added Number is : "<<result.real<<"+"<<result.imaginary<<"i";
    return result;
}

int main(){
    ComplexNumber A(5,5),B(7,9);
    A.display();
    B.display();
    ComplexNumber C;
        C=A.add(B);
        C.display();
        ComplexNumber E(7,5);
        ComplexNumber F(2,5);
        E.display();
        F.display();
        Add(E,F);

}
