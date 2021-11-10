#include<iostream>
using namespace std;

class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };
Node* reverseLL(Node* head){
    Node* curr = head, *prev = NULL, *next = NULL;
    if(head== NULL){
        return head;
    }
    while(curr!=NULL){
        next = curr-> next;
        curr-> next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}
