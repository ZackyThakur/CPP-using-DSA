#include<iostream>
using namespace std;
//#include "Solution.h"
int count(int n){
    if(n==0){
        return 0;
    }
    int ans = count(n/10);
    return ans+1;

}

int main(){
    int n;
    cin >> n;

    cout<<count(n);
}


