#include <iostream>
using namespace std;
int length(char input[]){
    int count = 0;
    for(int i =0;input[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverseString(char input[]){
    int len = length(input);
    int i =0,j = len-1;
    while(i<j){
        swap(input[i++],input[j--]);
    }
}
int main() {
    char input[100];
    cin.getline(input,100);
    reverseString(input);
    cout << input;
}
