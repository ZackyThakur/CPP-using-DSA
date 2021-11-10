#include<iostream>
using namespace std;
#include "AppendLastNToFirst.cpp"
//#include "Node1.cpp"
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
void InsertNode(Node *head, Node data, int i){
    int count =0;
    Node *temp = head;
    Node *newNode = new Node(data);
    while(count < i-1){
        temp = temp -> next;
        count++;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;
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
    //head =  length(head);
    cout<<length(head);
    int n;
    cin >> n;
    head = appendLastNToFirst(head, n);
    print(head);
    /*cout<<"-----------------------------------------"<<endl;
    print(head);
    int i;
    cout<<"Enter the Ith Number" << endl;
    cin>>i;
    printIthNode(head, i);
    int ith, data;
    cout<<"Enter Ith and Data"<<endl;
    cin>>ith>>data;
    InsertNode(head,data,ith);
    print(head);
*/

   // cout<<LengthofLL(head)<<endl;
}
