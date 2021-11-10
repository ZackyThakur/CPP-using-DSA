#include<iostream>
#include<string>
using namespace std;
void helper(string input, string output){
    if(input.length()=='\0'){
        cout<<output<<endl;
        return;
    }
    //printPermutation(input.substr(1),output);
    for(int i =0;i<=output.size();i++){
        helper(input.substr(1), output.substr(0,i)+input[0]+output.substr(i));
    }
}
void printPermutation(string input){
    helper(input,"");
}

int main(){
    string input;
    cin>>input;
    printPermutation(input);
    return 0;
}
