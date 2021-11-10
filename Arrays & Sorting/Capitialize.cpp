#include<iostream>
#include<cstring>
using namespace std;
void minLengthWord(char input[], char output[]){

    int i , c =0;
    int n = strlen(input);
    int minlen = 10000;
    for(i=0;i<=n;i++){
        c++;
        if(input[i]==' ' || input[i]=='\0'){
            if(c<minlen && c!=0){
                int k =0;
                for(int j=i-c+1;j<i;j++){
                    output[k]=input[j];
                    k++;
                }
                output[c-1]='\0';
                minlen=c;
            }
            c=0;
        }
        //c=0;
    }
    cout<<n;

}

int main(){
    char input[10000], output[10000];
    cin.getline(input, 10000);
    minLengthWord(input, output);
    cout<<output<<endl;
}
