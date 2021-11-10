// Change in the given string itself. So no need to return or print anything
#include<iostream>
#include<cstring>
using namespace std;

void removeX(char input[]) {
    // Write your code here
    if(input[0]=='\0'){
        return ;
    }
    if(input[0]=='x'){
        for(int i=0;input[i]!='\0';i++){
            input[i]=input[i+1];
        }
        removeX(input);
    }
    else
        removeX(input+1);cn
}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
