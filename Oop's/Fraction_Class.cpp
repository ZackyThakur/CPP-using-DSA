#include <iostream>
using namespace std;

class Fraction{
private:
        int numerator;
        int denominator;

    public:
        Fraction(int numerator, int denominator){
            this ->numerator = numerator;
            this ->denominator = denominator;
        }
    void print(){
        cout<< this ->numerator<<" / " << denominator<<endl;
    }
    void simplyfy(){
        int gcd =1;
        int j = min(this->numerator, denominator);
        for(int i=1;i<=j;i++){
            if(this->numerator % i == 0 && denominator % i ==0){
                gcd = i;
            }
        }
    }
    void add(Fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;

        simplyfy();
    }
    void multiply(Fraction const &f2){
        numerator = numerator * f2.numerator;
        denominator = denominator * f2.denominator;
        simplyfy();
    }
};
