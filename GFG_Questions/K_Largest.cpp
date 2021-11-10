#include<iostream>
using namespace std;

int k_largest(int input[], int n, int k){

    for(int i=0;i<n-1;i++){
        int min = input[i], minIndex = i;
        for(int j=i+1;j<n;j++){
            if(input[j]<min){
                min = input[j];
                minIndex = j;
            }
        }
        int tmp = input[i];
        input[i] =input[minIndex];
        input[minIndex]=tmp;
    }
}

int main(){

    int n,k;
    cin>>n>>k;
    int *input=new int[n];
    for(int i =0;i<n;i++){
        cin>>input[i];
    }
    cout<<k_largest(input,n,k);

}
