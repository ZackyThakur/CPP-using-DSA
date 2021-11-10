#include<iostream>
using namespace std;
void print(int n){
    if(n == 1){
        cout<<n<<" ";
        return;
    }
    print(n - 1);
    cout << n << " ";
}
int main(){

    int x,c;
    cin>>x;
    print(x);
    //cout<<output<<endl;
}
