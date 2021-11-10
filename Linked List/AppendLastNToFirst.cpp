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
int length(Node* head){
    Node* temp = head;
    int len =0;
    while(temp != NULL){
        temp = temp -> next;
        len++;
    }
    return len;
}

Node* appendLastNToFirst(Node* head,int n)
{
    if(head==NULL){
        return head;
    }
    if(n==0){
        return head;
    }
	Node* curr = head;
	int i =1;
    int len = length(head);
    int count = len - n;
    while(i<count && curr != NULL ){
        curr = curr -> next;
        i++;
    }
    //Node* temp=head2;
    Node* head2 = head;
    head2 = curr->next;
     Node* temp=head2;
   curr -> next = NULL;
    i =1;
    while(head2->next != NULL ){
        head2 = head2 -> next;
        i++;
    }
    head2 -> next = head;
    return temp;

}
