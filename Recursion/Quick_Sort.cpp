#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
int partion(int input[], int si, int ei){
    int x = input[si];
    int count =0;
    for(int i =si+1;i<=ei;i++){
        if(x>input[i]){
            count++;
        }
    }
    int xi = si+count;
    swap(input[si],input[xi]);
    int i =si,j=ei;
    while(i<x && j>x){
        if(input[i]<input[x]){
                i++;
        }
        else if(input[j]>=input[x]){
            j--;
        }
        else{
            swap(input[j--],input[i++]);
        }
    }
    return xi;
}
void helper(int input[],int si , int ei){
    if(si>=ei){
        return;
    }
    int c = partion(input,si,ei);
    helper(input,si,c-1);
    helper(input,c+1,ei);
}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
	int si =0;
    int ei =size-1;
    helper(input,0,size-1);
}
int main(){
    int n;
    cin >> n;

    int *input = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }

    delete [] input;

}

