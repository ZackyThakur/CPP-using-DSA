#include<iostream>
using namespace std;
void printLargest(int a[],int n){
    int i,max,min;
    min = 26846;
    max =a[0];
    for(i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
        else if (min>a[i]){
            min=a[i];
        }
    }
    cout<<"MIN = "<<min<<endl;
    cout<<"MAX = "<<max<<endl;
}
int main()
{
    int a[100];
    int n,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    printLargest(a,n);
}
