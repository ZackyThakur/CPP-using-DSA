#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char inp1[100]="abcd", inp2[100];
    cin>>inp2;
    strncpy(inp1,inp2,1);
    cout<<inp1<<" ";

}
