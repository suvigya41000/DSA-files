#include<iostream>
using namespace std;
class Node{
        public:
        int data;
        Node *next;
        Node(int data){
            this->data=data;
            next=NULL;
        }
    };
 class StackLL{
    public:
    Node *head=NULL;
    void printList(){
        if(head==NULL){
            cout<<"Empty List \n";
            return;
        }
        Node *curNode=head;
        while(curNode!=NULL){
            cout<<curNode->data<<"->";
            curNode=curNode->next;
        }
        cout<<"Null \n";
    }
    void push(int data){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node *curNode=head;
        while(curNode->next!=NULL){
            curNode=curNode->next;
        }
        curNode->next=newNode;
    }
    int pop(){
        if(head==NULL){
            cout<<"List is empty";
            return 0;
        }
        Node *curNode=head->next;
        Node *preNode=head;
        while(curNode->next!=NULL){
            preNode=curNode;
            curNode=curNode->next;
        }
        preNode->next=NULL;
        return curNode->data;
    }
 };
 int main(){
    StackLL ll;
    ll.printList();
    ll.push(5);
    ll.push(3);
    ll.push(2);
    ll.printList();
    cout<<ll.pop()<<endl;
    ll.printList();
 }