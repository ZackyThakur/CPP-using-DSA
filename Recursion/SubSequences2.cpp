#include<iostream>
#include<string>
using namespace std;
void subS(string input, string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    subS(input.substr(1),output);
    subS(input.substr(1),output+input[0]);

}
int main(){
    string input;
    cin>>input;
    string output = "";
    subS(input,output);
}
