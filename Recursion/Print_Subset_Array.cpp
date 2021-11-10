#include<iostream>
using namespace std;
void subset(int input[],int si, int ei, int output[],int m){
    if(si>ei){
        for(int i =0;i<m;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int val = input[si];
    int *newOp = new int[m+1];
    for(int i=0;i<m;i++){
        newOp[i]=output[i];
    }
    newOp[m]=val;
    subset(input,si+1,ei,output,m);
    subset(input,si+1,ei,newOp,m+1);
    return ;
}
void printSubset(int input[], int length){
    int m =0;
    int *output = new int[m];
    subset(input,0,length-1,output,m);

}
int main(){
    int input[20],length;
    cin>>length;
    for(int i=0;i<length;i++){
        cin>>input[i];
    }
    printSubset(input,length);
}
