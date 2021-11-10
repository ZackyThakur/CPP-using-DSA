#include<iostream>
//#include<cstring>
#include<math.h>
using namespace std;
int length(char input[]){
    int len=0;
    for(int i=0;input[i]!='\0';i++){
        len++;
    }
    return len;
}
int helper(char input[],int n){
    if(n==1){
        return input[0]-'0';
    }
    int a = helper(input,n-1);
    int b = input[n-1]-'0';
    return a*10+b;
}
int stringToNumber(char input[]){
    int n = length(input);
    return helper(input,n);
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
