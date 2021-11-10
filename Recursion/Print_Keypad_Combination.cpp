#include<iostream>
#include<string>
using namespace std;
string getstring(int d){
    if(d==2){
        return "abc" ;
    }
    if(d==3){
        return "def";
    }
    if(d==4){
        return "ghi";
    }
    if(d==5){
        return "jkl";
    }
    if(d==6){
        return "mno";
    }
    if(d==7){
        return "pqrs";
    }
    if(d==8){
        return "tuv";
    }
    if(d==9){
        return "wxyz";
    }
    return " ";
}
void keypad(int n,string output){
    if(n==0){
        cout<<output<<endl;
        return ;
    }
    string options = getstring(n%10);
    for(int i =0;i<options.size();i++){
        keypad(n/10,options[i]+output);
    }
}

int main(){
    int n;
    cin>>n;
    keypad(n,"");
}
