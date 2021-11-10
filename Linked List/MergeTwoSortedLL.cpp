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
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    if(head1 == NULL){
        return head1;
    }
    if(head2 == NULL){
        return head2;
    }
    Node *fhead = NULL, *tail = NULL;
    while(head1 != NULL && head2 != NULL){
        if(head1->data > head2-> data){
            if(fhead == NULL){
                fhead = head2;
                tail = head2;
            }
            else{
                tail -> next = head2;
                tail = head2;
            }
            head2 = head2-> next;
        }
        else{
            if(fhead == NULL){
                fhead = head1;
                tail = head1;
            }
            else{
                tail -> next = head1;
                tail = head1;
            }
            head1 = head1 -> next;
        }
    }
    if(head1 != NULL){
        tail -> next = head1;;
    }
    if(head2 != NULL){
        tail -> next = head2;
    }
    return fhead;
}
