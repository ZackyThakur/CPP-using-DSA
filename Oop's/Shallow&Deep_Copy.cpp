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
    s2.display();
    s1.display();

}
