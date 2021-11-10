#include<iostream>
using namespace std;
int main(){
    int i ;
    int n = 5;
    for(int i =1 ; i<= n;i++){
        int j;
        for(int j = 1 ; j <= n-i; j++ ){
            cout<<" ";
        }
        for(int k = i; k >= i;k++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}
