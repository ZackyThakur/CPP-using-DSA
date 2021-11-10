#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

char highestOccurringChar(char input[]){
    int n = strlen(input);
    int count[256] = {0};
    int max = 0;
    char result;
    for (int i = 0; i < n; i++) {
        count[input[i]]++;
    }
    for(int i=0;i<256;i++){
        if (max < count[input[i]]){
            max = count[input[i]];
            result = input[i];
        }
    }
    return result;
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout<<highestOccurringChar(str);
}
