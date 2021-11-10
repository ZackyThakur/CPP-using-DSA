#include<iostream>
#include<cstring>
using namespace std;
void leaders(int input[], int n){
    int i;
    for(i=0;i<n;i++){
        int j;
        for(j=1;j<n;j++){
            if(input[i]<input[j] && i<j){
                break;
            }
        }
        if(j==n){
            cout<<input[i]<<" ";
        }
    }
}

int main(){

    int n;
    cin>>n;
    int *input = new int[n];
    for(int i =0;i<n;i++){
        cin>>input[i];
    }
    leaders(input,n);
}
