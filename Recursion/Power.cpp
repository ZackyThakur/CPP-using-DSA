#include<iostream>
using namespace std;
int power(int x, int c, int z=3){
    if(c==0){
        return 1;
    }
    int ans = x*power(x,c-1);
    return ans;

}
int main(){

    int x,c;
    cin>>x>>c;
    int output = power(x,c);
    cout<<output<<endl;
}
