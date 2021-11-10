#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers for comparison"<<endl;
    cin>>a>>b;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    if (a==b){
          cout<<"a is equal to b"<<endl;
    } else if (a > b){
        cout<<"a is greater than b"<<endl;
    } else {
        cout<<"b is greater than a"<<endl;
    }
}
