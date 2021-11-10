#include<iostream>
using namespace std;
void sortZeroOne(int*input, int size){
    int i,nZ=0,lA=size-1;
    for(i=0;i<size;i++){
        if(input[i]==0){
            int temp = input[nZ];
            input[nZ++] = input[i];
            input[i] = temp;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        int *input =new int[size];
        for(int i=0;i<size;i++){
            cin>>input[i];
        }
        sortZeroOne(input,size);
        for(int i=0;i<size;i++){
            cout<<input[i]<<" ";
        }
        cout<<endl;
        delete[]input;

    }
    return 0;
}

