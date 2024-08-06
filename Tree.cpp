#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *lNode;
    Node *rNode;
    Node(int data){
        this->data=data;
        lNode=nullptr;
        rNode=nullptr;
    }
};
class Tree{
    public:
    int idx=-1;
    Node* buildTree(int arr[]){
        idx++;
        if(arr[idx]==-1){
            return nullptr;
        }
        Node *node=new Node(arr[idx]);
        node->lNode=buildTree(arr);
        node->rNode=buildTree(arr);
        return node;
    }
    void inOrder(Node *root){//left root right
        if(root==nullptr){
            return;
        }
        inOrder(root->lNode);
        cout<<root->data<<",";
        inOrder(root->rNode);
    }
    void preOrder(Node *root){//root left right
        if(root==nullptr){
            return;
        }
        cout<<root->data<<",";
        preOrder(root->lNode);
        preOrder(root->rNode);
    }
    void postOrder(Node *root){//left right root
        if(root==nullptr){
            return;
        }
        postOrder(root->lNode);
        postOrder(root->rNode);
        cout<<root->data<<",";
    }
};
int main(){
    int arr[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Tree tree;
    Node *root=tree.buildTree(arr);
    cout<<"Root Node: "<<root->data<<endl<<"In Order: ";
    tree.inOrder(root);
    cout<<endl<<"PreOrder: ";
    tree.preOrder(root);
    cout<<endl<<"Post Order: ";
    tree.postOrder(root);
    cout<<endl;
    return 0;
}
