#include <iostream>
#include<cstring>
using namespace std;
bool function1(char *str1, char *str2, int m, int n){
    if(n==0) return true;
    if(m==0) return false;
    if(str1[m-1] == str2[n-1])
        return function1(str1, str2, m-1, n-1);
    return function1(str1, str2, m-1, n);

}
int main(){
    char large[10000];
    char small[10000];
    cin>>large>>small;
    int m = strlen(large);
    int n = strlen(small);
    bool ans  = function1(large, small, m, n);
    if(ans)
        cout<<"TRUE"<<endl;
    else
        cout<<"FALSE"<<endl;

}

