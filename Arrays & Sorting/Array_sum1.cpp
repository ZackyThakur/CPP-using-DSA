#include<iostream>
using namespace std;
int linearSearch(int *input, int n,int val){
    int i;
    for(i=0;i<n;i++){
        if(input[i]==val)
        return i;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int *input = new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int val;
    cin>>val;
    cout<<linearSearch(input,n,val);
    return 0;
}
