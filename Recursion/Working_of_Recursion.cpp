#include <iostream>
using namespace std;

void print(int n){
    if(n < 0){
        return;
    }
    cout << n << " "; // This line gives 5 3 1 as it will print before recursion
    print(n - 2);
    cout<<n<<" "; // this line will print after recursion. 1 3 5.
}

int main() {
    int num = 5;
    print(num);
}
