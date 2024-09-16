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
