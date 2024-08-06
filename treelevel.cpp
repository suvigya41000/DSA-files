#include<iostream>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode *rNode,*lNode;
    TreeNode(int d){
        data=d;
        rNode=nullptr;
        lNode=nullptr;
    }
};
class Node{
    public:
    TreeNode *data;
    Node *next;
    Node(TreeNode *data){
        this->data=data;
        next=nullptr;
    }
};
class LinkQueue{
    public:
    Node *head=nullptr;
    void enqueue(TreeNode *data){
        Node *newNode=new Node(data);
        if(head==nullptr){
            head=newNode;
            return;
        }
        Node *current=head;
        while(current->next!=nullptr){
            current=current->next;
        }
        current->next=newNode;
    }
    void dequeue(){
        if(head==nullptr){
            return;
        }
        head=head->next;
    }
    TreeNode* peek(){
        if(head==nullptr){
            return nullptr;
        }
        return head->data;
    }
    bool isEmpty(){
        return head==nullptr;
    }
};
class Tree{
    public:
    TreeNode *root=nullptr;
    static int idx;
    TreeNode* createTree(int arr[],int size){
        idx++;
        if(arr[idx]==-1||idx==size){
            return nullptr;
        }
        TreeNode *node=new TreeNode(arr[idx]);
        node->lNode=createTree(arr,size);
        node->rNode=createTree(arr,size);
        return node;
    }
    void levelPrint(TreeNode *root){
        cout<<"Level"<<endl;
        LinkQueue *q=new LinkQueue();
        q->enqueue(root);
        q->enqueue(nullptr);
        while (!q->isEmpty()) {
            TreeNode* newNode = q->peek();
            q->dequeue();
            if (newNode != nullptr) {
                cout << newNode->data << " ";
                if (newNode->lNode != nullptr)
                    q->enqueue(newNode->lNode);
                if (newNode->rNode != nullptr)
                    q->enqueue(newNode->rNode);
            } else {
                cout << endl;
                if (!q->isEmpty()) {
                    q->enqueue(nullptr); // Enqueue null to mark the end of the current level
                }
            }
        }
    }
};
int Tree::idx=-1;
int main(){
    int arr[]={1,2,-1,-1,3,-1,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    Tree obj;
    TreeNode *root=obj.createTree(arr,n);
    cout<<root->data<<endl;
    obj.levelPrint(root);
}