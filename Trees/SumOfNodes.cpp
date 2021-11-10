#include<iostream>
#include<queue>
#include<vector>
using namespace std;
template<typename T>
class TreeNode{
public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data){
        this->data = data;
    }
    ~TreeNode(){
        for(int i =0; i<children.size(); i++){
            delete children[i];
        }
    }
};
int sumOfNodes(TreeNode<int>* root){
    int sum = root->data;
    for(int i =0; i< root->children.size(); i++){
        sum += sumOfNodes(root->children[i]);
    }
    return sum;
}

TreeNode<int>* takeInput(){
    int rootData;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> q;
    q.push(root);
    while(q.size() != 0){
        TreeNode<int>* front = q.front();
        q.pop();
        int numChild;
        cin>>numChild;
        for(int i =0; i< numChild;i++){
            int childData;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front ->children.push_back(child);
            q.push(child);
        }
    }
    return root;
}
int main(){
    TreeNode<int>* root = takeInput();
    cout<<sumOfNodes(root);
}
