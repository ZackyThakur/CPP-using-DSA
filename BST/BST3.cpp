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
class isBSTReturn{
public:
    bool isBST;
    int minimum;
    int maximum;

};

isBSTReturn isBST2(BinaryTreeNode<int>* root){
    if(root == NULL){
        isBSTReturn output;
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }
    isBSTReturn leftOutput = isBST2(root->left);
    isBSTReturn rightOutput = isBST2(root->right);

    int minimum = min(root->data , min(leftOutput.minimum, rightOutput.minimum));
    int maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));
    bool isBSTFinal = (root->data > leftOutput.maximum) && (root ->data <= rightOutput.minimum) && leftOutput.isBST && rightOutput.isBST ;
    isBSTReturn output;
    output.minimum = minimum;
    output.maximum = maximum;
    output.isBST = isBSTFinal;
    return output;
}

bool isBST3(BinaryTreeNode<int>* root , int min = INT_MIN, int max = INT_MAX){
    if(root == NULL){
        return true;
    }
    if(root -> data < min || root -> data >= max ){
        return false;
    }
    bool left = isBST3(root->left, min, root->data-1);
    bool right = isBST3(root->right, root->data, max);
    return left && right;
}

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main(){
    BinaryTreeNode<int>* root = takeInput();
    cout<<(isBST3(root) ? "true":"false")<<endl;
}
