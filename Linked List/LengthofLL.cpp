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
int LengthofLL(Node * head){
        Node *curr = head;
        int count =0;
        while(curr != NULL){
            count++;
            curr = curr -> next;
        }
        return count;
    }
