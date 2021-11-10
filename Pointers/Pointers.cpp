#include<iostream>
using namespace std;
int main(){

    int i =10;
    cout<<&i<<" ";
    int *p = &i;
    cout<<p<<" "<<*p <<endl;;

    float f =25.26;
    float *fp = &f;
    cout<<fp<<" "<<*fp<<endl;

    double d = 45684;
    double *dp = &d;
    cout<<dp<<" "<<*dp<<endl;


}
