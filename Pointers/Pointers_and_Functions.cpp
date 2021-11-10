#include<iostream>
using namespace std;
void print(int *p){

    cout<<*p<<endl;
}
void incrementPointer(int *p){
p=p+1;
}
void increment(int *p){
    ++*p;

}
int sum(int a[], int n){
    int ans =0;
    for(int i=0;i<n;i++){
        ans+=a[i];
    }
    return ans ;
}

int main(){

    int i = 10;
    int *p = &i;
    print(p);
    incrementPointer(p);
    cout<<*p<<" ";
    increment(p);
    cout<<*p<<" ";
    int a[10];
    cout<<sum(a,10)<<" ";


}
