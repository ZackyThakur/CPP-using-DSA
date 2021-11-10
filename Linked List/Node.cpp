#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data;
        next = NULL;
    }
};
Node* Reverse(Node* head){
    Node* prev = NULL;
    Node* next = NULL;
    Node* curr = head;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}
int length(Node * head){
    if(head == NULL){
        return 0;
    }
    return 1+length(head->next);
}
