#include<iostream>
using namespace std;
void mergeSort1(int input[],int si,int mid,int ei){
    int i = si,j = mid+1;
    int k =0, temp[ei-si+1];
    while(i<=mid && j<=ei){
        if(input[i]>input[j]){
            temp[k++]=input[j++];
        }
        else
            temp[k++]=input[i++];
    }
    while(i <= mid){
        temp[k++]= input[i++];
    }
    while(j <= ei){
        temp[k++]= input[j++];
    }
    k=0;
    for(int x = si;x<=ei;x++){
        input[x]= temp[k++];
    }
}
void helper(int input[],int si,int ei){
    if(si>=ei){
        return ;
    }
    int mid = (si+ei)/2;
    helper(input,si,mid);
    helper(input,mid+1,ei);
    mergeSort1(input,si,mid,ei);
}

void mergeSort(int input[], int n){
    helper(input,0,n-1);
}

int main(){
    int n;
    cin>>n;
    int *input = new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    mergeSort(input, n);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
}
