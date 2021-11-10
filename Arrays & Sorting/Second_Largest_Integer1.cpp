#include<iostream>
using namespace std;
int main(){
    int n,i,x;
    cin>>n;
    int large = -2147483648;
    int second = -2147483648;
    for (i=0; i<n; i++){
        cin>>x;
        if(x>large){
            second = large;
            large = x;
        }
        else if (x<large){
            if(x > second ){
                second = x;
            }
        }
    }
    cout<<second;

}
