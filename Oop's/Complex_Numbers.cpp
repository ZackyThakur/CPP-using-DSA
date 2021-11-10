#include<iostream>
using namespace std;

class ComplexNumbers {
    // Complete this class
private:
    int real , imaginary;

public:
    ComplexNumbers(int real, int imaginary){
        this ->real = real;
        this ->imaginary = imaginary;
    }

    void print(){
        cout<<real<<" + i"<<imaginary<<endl;
    }
    void plus(const ComplexNumbers &c2){
        real = real + c2.real;
        imaginary = imaginary + c2.imaginary;
    }
    void multiply(const ComplexNumbers &c2){
        int r = (real * c2.real) - (imaginary * c2.imaginary);
        imaginary = (real * c2.imaginary ) + ( imaginary * c2.real);
        real = r;
    }
};
