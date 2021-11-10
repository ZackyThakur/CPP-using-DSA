#include<iostream>
using namespace std;

void trimSpaces(char input[]) {
    // Write your code here
    int i = 0, left=0;
    while(input[i]!='\0'){
        if(input[i]!=' '){
            input[left++]=input[i];
        }i++;
    }
    input[left]='\0';
}
int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
