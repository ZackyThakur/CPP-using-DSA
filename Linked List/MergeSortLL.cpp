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
Node* midPoint(Node * head){
    if(head==NULL ){
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;
    if(slow != NULL){
    	while(fast != NULL && fast->next != NULL){
        	fast = fast-> next -> next;
        	slow = slow -> next;
		}
    	return slow;
    }
}
Node * mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code herei
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    Node* fhead = NULL;
    Node* tail = NULL;
    while(head1 != NULL && head2 != NULL){
        if(head1-> data < head2-> data ){
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
        else {
            if(fhead == NULL){
                fhead = head2;
                tail = head2;
            }
            else{
                tail -> next = head2;
                tail = head2;
            }
            head2 = head2 -> next;
        }
    }
    if(head1!= NULL){
        tail -> next = head1;
    }
    if (head2 != NULL){
        tail -> next = head2;
    }
    return fhead;
}
Node *mergeSort(Node *head)
{
	//Write your code here
    if(head == NULL || head-> next == NULL){
        return head;
    }
    Node * mid = midPoint(head);
    Node* head1 = head;
    Node* head2 = mid -> next;
    mid -> next = NULL;
	head1 = mergeSort(head1);
    head2 = mergeSort(head2);
    Node * fhead = mergeTwoSortedLinkedLists(head1, head2);
    return fhead;

}
