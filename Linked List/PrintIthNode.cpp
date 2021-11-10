#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node * next;

    Node (int data ){
        this -> data = data;
        next = NULL;
    }
};
void printIthNode(Node * head , int i){
    int count = 0;
    Node *curr = head;
    while(curr != NULL){
        if(count ==i){
            cout<< curr -> data<<endl;
        }
        count++;
        curr = curr-> next;
    }
}
