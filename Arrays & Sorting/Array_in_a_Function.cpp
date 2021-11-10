#include<iostream>
#include<climits>
using namespace std;
void printArr(int input[], int n){
    for(int i=0; i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int input[100];
    cout<<sizeof(input);
    for(int i =0;i<n;i++){
        cin>>input[i];
    }
    printArr(input, n);
}
