#include<iostream>
using namespace std;
int main(){
    char c;
    c =cin.get();
    int letter =0;
    int num = 0;
    int count  = 0;
    while ( c != '$'){
        if ( c >= 'a' && c <= 'z' ){
            letter ++;
        }
        else if ( c >= '1' && c<= '9'){
            num ++;
        }
        else if (c == ' ' || c == '\t' || c== '\n'){
            count ++;
        }
        c = cin.get();
    }
    cout<<letter<<" ";
    cout<<num<<" ";
    cout<<count;
}
