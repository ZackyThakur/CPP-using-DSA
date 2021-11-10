#include<iostream>
using namespace std;
void printCodesHelper(string input, string output){
    if(input[0]=='\0'){
        cout<<output<<endl;
        return;
    }
    int num = input[0]-48;
    char ch = 'a'+num-1;
    printCodesHelper(input.substr(1),output+ch);
    if(input[1]!='\0'){
        num = num*10+input[1]-48;
        ch = 'a'+num-1;
        if(num>=10 && num<=26){
            printCodesHelper(input.substr(2), output+ch);
        }
    }
}
void printCodes(string input){
    printCodesHelper(input, "");
}

int main(){
    string input;
    cin >> input;

    printCodes(input);
    return 0;
}
