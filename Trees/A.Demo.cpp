template<typename T>
class binaryTreeNode{
public:
    T data;
    binaryTreeNode<T> left;
    binaryTreeNode<T> right;

    binaryTreeNode(T data){
        this ->data = data;
        left = NULL;
        right = NULL;
    }
    ~binaryTrees(){
        delete left;
        delete right;
    }
};
