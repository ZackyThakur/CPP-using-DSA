#include"BinaryTreeNode.h"
class BST{
    BinaryTreeNode<int>* root;

    BST(){
        root = NULL;
    }
    ~BST(){
        delete root;
    }
    void deleteRoot(int data){

    }
    void insertData(int data){
private:
    bool hasData(int data, BinaryTreeNode<int>* node){
        if(node == NULL){
            return false;
        }
        if(node->data == data){
            return true;
        }
        if(node->data > data){
            return hasData(data, node->left);
        }
        else if(node->data < data){
            return hasData(data, node->right);
        }
    }
public:
    bool hasData(int data){
        return hasData(data, root);
    }
};

