#include<iostream>
#include<cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {

    int count1[256] = {0};
    int count2[256] = {0};
    int i;


    for (i = 0; input1[i] && input2[i];  i++)
    {
        count1[input1[i]]++;
        count2[input2[i]]++;
    }

    if (input1[i] || input2[i])
      return false;


    for (i = 0; i < 256; i++){
        if (count1[i] != count2[i])
            return false;
    }
    return true;
}
int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
