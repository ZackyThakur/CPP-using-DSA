#include <iostream>
using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    if(n == 0){
        cout << n << " ";
        return;
    }
    print(n--); //post decrement will give n to the next function so it will give infinite run time error.
    print(n -1);
    cout << n << " ";
}

int main() {
    int num = 3;
    print(num);
}
