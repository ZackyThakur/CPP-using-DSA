#include<iostream>
#include<queue>
using namespace std;

template<typename T>
class BinaryTreeNode{
public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

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
            front ->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int maximum(BinaryTreeNode<int>* root){
    if(root == NULL){
        return INT_MIN;
    }
    return max(root->data , max(maximum(root->left), maximum(root->right)));
}
int minimum(BinaryTreeNode<int>* root){
    if(root == NULL){
        return INT_MAX;
    }
    return min(root->data, min(minimum(root->left), minimum(root->right)));
}

bool isBST1(BinaryTreeNode<int>* root){
    if(root == NULL){
        return true;
    }

    int leftMax = maximum(root->left);
    int rightMin = minimum(root ->right);
    bool output = (leftMax < root->data) && (rightMin > root->data ) && isBST1(root->left) && isBST1(root->right);
    return output;
}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){
    BinaryTreeNode<int>* root = takeInput();
    cout << (isBST1(root) ? "true" : "false");
}
