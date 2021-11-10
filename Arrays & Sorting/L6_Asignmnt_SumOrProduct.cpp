#include<iostream>
using namespace std;
int main(){
    int n,c;
    int sum = 0;
    cin>>n>>c;
    if (c==1){
        for(int i=0;i<=n;i++){
            sum = sum + i;
        }
        cout<<sum;
    }
    else if (c==2){
            sum =1;
        for (int i=1;i<=n;i++){
            sum=sum*i;
        }
        cout<<sum;
    }
    else
        cout<<-1;
}

