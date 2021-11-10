#include<iostream>
using namespace std;
int main(){
    int n,prev;
    cin>>n;
    cin>>prev;
    bool isDec = true;
    int i =1;
    while(i<n){
        int curr;
        cin>>curr;
        if(prev==curr){
            cout<<"False";
            return 0;
        }
        else if (prev > curr){
            if(isDec==false){
                cout<<"false"<<endl;
                return 0;
            }
        }
        else if (prev <curr){
            isDec = false;
        }
        prev = curr;
        i++;
    }
    cout<<"true";
}
