
#include <iostream>
#include <string>
using namespace std;
string getstring(int d){
    if(d==2){
        return "abc";
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
    return "";
}
int keypad(int num, string output[]){
    if(num==0){
        output[0]= "";
        return 1;
    }
    int digit = num%10;
    int smallnum = num/10;
    int smOpSz = keypad(smallnum,output);
    string options = getstring(digit);
    for(int i =0;i<options.length()-1;i++){
        for(int j =0;j<smOpSz;j++){
            output[j + (i+1)*(smOpSz)] = output[j];
        }
    }
    int k=0;
    for(int i=0;i<options.length();i++){
        for(int j=0;j<smOpSz;j++){
            output[k]= output[k]+options[i];
            k++;
        }
    }
    return smOpSz*options.length();

}
int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
