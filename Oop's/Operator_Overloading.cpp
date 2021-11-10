#include<iostream>
using namespace std;
class Fraction{

private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator){
        this -> numerator = numerator;
        this -> denominator = denominator;
    }
    void print(){
        cout<< this -> numerator << " / " << denominator<<endl;
    }
    void simplyfy(){
        int gcd = 1;
        int j = min(this -> numerator, this ->denominator);
        for(int i =1;i<= j;i++){
            if( this -> numerator % i ==0 && this ->denominator % i ==0){
                gcd =i;
            }
        }
        this -> numerator = this -> numerator/gcd;
        this -> denominator = this -> denominator/gcd;
    }
    //Operator Overloading
    Fraction operator*(const Fraction & f2){
        int n = numerator * f2.numerator;
        int d = denominator * f2.denominator;
        Fraction fNew(n, d);
        fNew.simplyfy();
        return fNew;
    }
    Fraction operator+(Fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm/ f2.denominator;
        int num = x*numerator + (y * f2.numerator);

        Fraction fNew(num, lcm);
        fNew.simplyfy();
        return fNew;
    }
    Fraction add(Fraction const & f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        Fraction fNew(num, lcm);
        fNew.simplyfy();
        return fNew;
    }
    bool operator==(Fraction const &f2){
        return (numerator == f2.numerator && denominator == f2.denominator);
    }
    //Pre-Increment
    Fraction & operator++(){
        numerator = numerator + denominator;
        simplyfy();
        return *this;
    }
    // Post-Increment
    Fraction operator++(int){
        Fraction fNew(numerator, denominator);
        numerator = numerator + denominator;
        simplyfy();
        fNew.simplyfy();
        return *this;
    }
    Fraction & operator+=(Fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;
        simplyfy();
        return *this;
    }
};
int main(){
    Fraction f1(10,3);
    Fraction f2(5, 2);
    //(f1++);
    f1.print();
    (f1+=f2)+=f2;
    f1.print();
    f2.print();



    //Fraction f6 = f1 ==f2;
    if(f1==f2){
        cout<<"Equal"<<endl;
    }
    else
        cout<<"NOT EQUAL"<<endl;



}
