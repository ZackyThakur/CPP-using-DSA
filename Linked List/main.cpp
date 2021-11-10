#include<iostream>
using namespace std;
#include "A.Demo.cpp"
//#include "LengthofLL.cpp"
Node *takeInput_Better(){
    int data;
    cout<<"Enter the data !! press -1 to stop" <<endl;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = tail ->next;
        }
        cin>>data;
    }
    return head;
}
Node *deleteNode(Node *head, int i){
    int count =0;
    Node *temp = head;
    Node *prev = NULL;
   // Node *newNode = new Node(data);

    if(i == 0){
        //newNode->next = head;
        head = head -> next;
        return head;
    }
    while(temp != NULL && count < i){
        prev = temp;
        temp = temp -> next;
        count++;
    }
    if(temp != NULL){
        prev -> next = temp -> next;
        delete temp;
    }
    return head;
}
void print(Node *head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node *head = takeInput_Better();
    //Node *head2 = takeInput_Better();
    head = reverseLL(head);
    print(head);

    //cout<<length(head)<<endl;
    //cout<<"-----------------------------------------"<<endl;
    //print(head);
    /*int i;
    cout<<"Enter the Ith Number" << endl;
    cin>>i;
    printIthNode(head, i);
    */
    /*
    int ith, data;
    cout<<"Enter Ith and Data"<<endl;
    cin>>ith>>data;
    head = InsertNode(head,data,ith);
    print(head);*/

    /*
    cout<<"Enter the ith No to delete Node"<<endl;
    int i;
    cin>>i;
    head = deleteNode(head, i);
    print(head);
    */


   // cout<<LengthofLL(head)<<endl;
}
