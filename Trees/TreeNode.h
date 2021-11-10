#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode{
public:
    T data;
    vector <TreeNode <T>* > children;

    TreeNode(T data){
        this -> data = data;
    }
    ~TreeNode(){
        for(int i =0; i< children.size() ;i++){
            delete children[i];
        }
    }
};

void printLevelWise(TreeNode<int>* root){
    if(root == NULL){
        return;
    }
    queue<TreeNode<int>*> q;
    q.push(root);

    while(q.size() != 0){
        TreeNode<int>* front = q.front();
        cout<< front -> data <<":";
        q.pop();

        for(int i = 0 ; i < root->children.size(); i++){
            q.push(root->children[i]);
            if(root ->children.size() - 1 != i ){
                cout<< root ->children[i] ->data << ",";
            }
            else{
                cout<< root ->children[i]->data;
            }
        }
        root = q.front();
        cout<<endl;
    }
}
