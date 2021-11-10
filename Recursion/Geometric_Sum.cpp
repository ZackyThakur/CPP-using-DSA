#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;
double geometricSum(int k){
    if(k==0){
        return 1;
    }
    double a = geometricSum(k-1);
    return a + 1/pow(2, k);
}

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;
}
