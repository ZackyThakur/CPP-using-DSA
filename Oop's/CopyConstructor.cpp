#include<iostream>
#include<cstring>
using namespace std;

class Student{
public:
    char *name;
    int rollNumber;

    Student(int rollNumber, char *name){
        this -> rollNumber = rollNumber;
        //Shallow Copy
        //this -> name = name;

        //Deep Copy
        this -> name = new char[strlen(name)+1];
        strcpy(this -> name, name);
    }
    //Copy Constructor.
    Student(Student const &s){
        this -> rollNumber = s.rollNumber;

        //Shallow COpy
        //this -> name = s.name;

        //Deep Copy
        this -> name = new char[strlen(s.name)+1];
        strcpy(this -> name, s.name);
    }

    void display(){
    cout<<this -> name <<" "<< rollNumber<<endl;
    }
} ;
int main(){
    char name[] = "Jacky Thakur";
    Student s1(39, name);
    s1.display();

    name[4] = 'i';
    Student s2(3500, name);
    s1.display();
    s2.display();

}
