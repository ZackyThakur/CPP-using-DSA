#include<iostream>
#include<queue>
using namespace std;

template<typename T>
class BinaryTreeNode{
public:
    T data;
    BinaryTreeNode<int>* left ;
    BinaryTreeNode<int>* right;

    BinaryTreeNode(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }

};

void printTree(BinaryTreeNode<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" : ";
    if(root->left != NULL){
        cout<<"L"<<root->left->data;
    }
    if(root->right != NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

BinaryTreeNode<int>* takeInput(){
    int rootData;
    cin>>rootData;
    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int>* front = q.front();
        q.pop();
        int leftChild, rightChild;
        cin>>leftChild;
        if(leftChild != -1){
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            front->left = leftNode;
            q.push(leftNode);
        }
        cin>>rightChild;
        if(rightChild != -1){
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            front->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main(){
    BinaryTreeNode<int>* root = takeInput();
    printTree(root);
}
