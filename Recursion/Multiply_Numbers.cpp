#include<iostream>
//#include "Solution.h"
using namespace std;

int multiplyNumbers(int m, int n) {
    // Write your code here
    if(n==0){
        return 0;
    }
    int ans = multiplyNumbers(m, n-1);
    return ans+n;
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
