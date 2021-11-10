#include <iostream>
#include <cstring>
using namespace std;
void reversed(char input[], int l, int r){
    while(l<r){
        swap(input[l], input[r]);
        l++;
        r--;
    }
}

void reverseEachWord(char input[]) {
    // Write your code here
    int i,j=0;
    int n = strlen(input);
    for(i=0;i<n+1;i++){
        if(input[i]==' ' || input[i]=='\0'){
            reversed(input,j,i-1);
            j=i+1;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
