#include<iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void inOrder(BinaryTreeNode<int>* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void preOrder(BinaryTreeNode<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(BinaryTreeNode<int>* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
BinaryTreeNode<int>* helper(int* in, int* pre, int inS, int inE, int preS, int preE){
    if(inS > inE){
        return NULL;
    }
    int rootData = pre[preS];
    int rootIndex = -1;
    for(int i =inS; i<= inE; i++){
        if(in[i] == rootData){
            rootIndex =i;
            break;
        }
    }
    int linS = inS;
    int linE = rootIndex-1;
    int lpreS = preS + 1;
    int lpreE = linE - linS + lpreS;
    int rinS = rootIndex + 1;
    int rinE = inE;
    int rpreS = lpreE +1;
    int rpreE = preE;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    root->left = helper(in, pre, linS, linE, lpreS, lpreE);
    root->right = helper(in , pre, rinS, rinE, rpreS, rpreE);
    return root;
}

BinaryTreeNode<int>* buildTree(int* in, int* pre, int size){
    return helper(in, pre, 0, size-1, 0, size-1);
}

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}
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

// 1 2 3 4 5 -1 -1 -1 -1 -1 -1
int main() {
    int in[] = {4,2,5,1,8,6,9,3,7};
    int pre[]= {1,2,4,5,3,6,8,9,7};
    BinaryTreeNode<int> *root = buildTree(in, pre, 9);
    printTree(root);
}

