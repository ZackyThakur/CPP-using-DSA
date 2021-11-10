#include <iostream>
#include <string>
using namespace std;
#include <unordered_set>

string uniqueChar(string str){
    unordered_set<char> charSet;
    string ans;
    for(char ch:str){
        if(charSet.find(ch) == charSet.end()){
            ans.push_back(ch);
            charSet.insert(ch);
        }
    }
    return ans;
}

int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}
