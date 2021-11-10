#include<iostream>
#include<cstring>
using namespace std;
void printSubstrings(char input[]) {
    // Write your code here
    int k =1;
    int n = strlen(input);
    while(k<=n){
        for(int i =0;i<=n-k;i++){
            for(int j=i;j<i+k;j++){
                cout<<input[j];
            }
            cout<<endl;
        }
        k++;
    }
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
