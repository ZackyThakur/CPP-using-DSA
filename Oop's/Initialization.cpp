#include<iostream>
using namespace std;
class Student {
    public :

    const int rollNumber;
    int age;

    int &x;

    // _INITIALIZATION
    Student(int r, int age) : rollNumber(r), age(age), x(this -> age) {
    }
};


int main() {
    Student s1(100, 23);
    s1.x = age;
    cout << s1.rollNumber << " " << s1.age << " " << s1.x;
}
