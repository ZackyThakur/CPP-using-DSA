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
    if(head== NULL || head-> next == NULL){
        return head;
    }
    Node* smallAns = reverseLL(head-> next);
    head -> next -> next = head;
    head-> next = NULL;
    return smallAns;
}
