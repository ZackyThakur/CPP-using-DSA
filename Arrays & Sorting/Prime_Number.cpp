#include<iostream>
using namespace std;
int main(){
    int n,d ;
    cin>>n;
    bool divide = false;
    for(d=2;d<n/2;d++)
    {
        if (n%d==0){
            divide = true;
            break;
        }
    }
    if (divide){
        cout<<"Not Prime"<<endl;
    }
    else{
        cout<<"Its a Prime";
}
}
