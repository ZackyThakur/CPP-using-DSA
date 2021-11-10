#include <iostream>
#include <cstring>
using namespace std;
void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int n = strlen(input);
    int i,j=0;
    for(i=1;i<n;i++){
        if(input[i]!=input[j]){
            j++;
            input[j]=input[i];
        }
    }
    j++;
    input[j]='\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
