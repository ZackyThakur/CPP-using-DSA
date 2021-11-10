#include<iostream>
//#include "Solution.h"
using namespace std;

int numbers(int n) {
    if(n==0 ){
        return 1;
    }
    if(n<10){
        return 0;
    }
    int ans = numbers(n/10);
    if(n%10==0){
        return ans+1;
    }
    else
        return ans;
}

int main() {
    int  n;
    cin >> n;
    cout << numbers(n)<< endl;
}
