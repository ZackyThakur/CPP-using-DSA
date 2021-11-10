#include<iostream>
using namespace std;
int length(char input[]){
    int i, count = 0;
    for(i=0;input[i]!=0;i++){
        count++;
    }
    return count;
}
void reversed(char input[], int l , int r){
    while(l<r){
        swap(input[l],input[r]);
        l++;
        r--;
    }
}
void reverseStringWordWise(char input[]){
    int i, j=0;
    int len = length(input);
    for(i=0;i<len+1;i++){
        if(input[i]=='\0' || input[i]==' '){
        reversed(input,j,i-1);
        j=i+1;
    }
}
reversed(input,0,len-1);
}
int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
