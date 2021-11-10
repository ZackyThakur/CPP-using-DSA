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
Node* midPoint(Node* head){
    if(head == NULL){
        return head;
    }
    Node* fast = head->next;
    Node* slow = head;
    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next ->next ;
        slow = slow -> next;
    }
    return slow;
}
