#include<iostream>
using namespace std;
int length(char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    int a = length(str+1);
    return 1+a;
}
void removeX(char str[]){
    if(str[0]=='\0'){
        return;
    }
    if(str[0]=='x'){
        int i=1;
        for(;str[i]!='\0';i++){
            str[i-1]=str[i];
        }
        str[i-1]='\0';
        removeX(str);
    }
    else
        removeX(str+1);

}
int main(){
    char str[100];
    cin>>str;
    int len = length(str);
    removeX(str);
    cout<<len<<endl;
    cout<<str<<endl;
    len = length(str);
    cout<<len<<endl;

}
