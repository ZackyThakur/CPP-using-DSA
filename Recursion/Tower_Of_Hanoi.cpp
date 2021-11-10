#include<iostream>
using namespace std;
void towerOfHanoi(int n ,char s,char a,char d){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,s,d,a);
    cout<<s<<" "<<d<<endl;
    towerOfHanoi(n-1,a,s,d);
}
int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}
