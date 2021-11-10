

#include <iostream>
using namespace std;

int main()
{
    int i,j,n,spaces;
    cin >> n;
    i = 1;
    int x = n/2+1;
    while (i<=n){
        if (i<=x){
        spaces = 1;
        while (spaces<=x-i){
            cout<<" ";
            spaces++;
        }
        j=1;
        while (j<=i){
            cout<<"*";
            j++;
        }
        int k = 2*i-2;
        while (k>=2){
            cout<<"*";
            k= k-2;
        }
        }
        if (i>x){
            spaces = 1;
            while (spaces<=i-x){
                cout<<" ";
                spaces++;
            }
            j = 1;
            while (j<=n+1-i){
                cout<<"*";
                j++;
            }
            int k = n-i;
            while (k>=1){
                cout<<"*";
                k--;
            }
        }
        cout<<endl;
        i++;
    }
}
