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
int length(Node * head){
    if(head == NULL){
        return 0;
    }
    return 1+length(head->next);
}
