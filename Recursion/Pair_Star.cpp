#include<iostream>
//#include<cstring>
#include<math.h>
using namespace std;
int length(char input[]){
    int n=0;
    for(int i=0;input[i]!='\0';i++){
        n++;
    }
    return n;
}
void helper(char input[], int start){
    if(input[start]=='\0'){
        return ;
    }
    helper(input,start+1);
        if(input[start]==input[start+1]){
            int n = length(input);
            int i;
            input[n+1]='\0';
            for(i=n-1;i>=start+1;i--){
                input[i+1]=input[i];
            }
            input[i+1]='*';
        }
}
void pairStar(char input[]) {
    // Write your code here
    helper(input,0);

}


int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
