#include<iostream>
#include<string.h>
using namespace std;

int getCodes(string input, string output[10000]) {
    int len = input.size();
    if(len==0){
        output[0]= "";
        return 1;
    }
    int num = input[0]-48;
    char ch = 'a' + num-1;
    int ans1 = getCodes(input.substr(1),output);
    for(int k =0;k<ans1;k++){
        output[k]= ch + output[k];
    }
    int ans2 =0;
    if(input[1]!='\0'){
        num = num*10+input[1]-48;
        ch = 'a'+num-1;
        if(num>=10 && num<=26){
            ans2 = getCodes(input.substr(2),output + ans1);
            for(int k=0;k<ans2;k++){
                output[ans1+k]=ch+output[ans1+k];
            }
        }
    }
    return ans1+ans2;
}
int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
