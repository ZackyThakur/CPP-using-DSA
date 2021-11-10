#include <iostream>
#include <string>
using namespace std;
int returnPer(string input,string output[]){
    if(input.size()==0){
        output[0]="";
        return 1;
    }
    string smallOutput[10000];
    int smallAns=returnPer(input.substr(1),smallOutput);
    int k =0;
    for(int i =0;i<smallAns;i++){
        for(int j =0; j<=smallOutput[i].size();j++){
            output[k++]=smallOutput[i].substr(0,j)+input[0]+smallOutput[i].substr(j);
        }
    }
    return k;
}

int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPer(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
