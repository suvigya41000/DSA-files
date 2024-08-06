#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};
class LinkedList{
    public:
    Node *head=nullptr;
    void createList(int arr[],int n){
        head=new Node(arr[0]);
        Node *curr=head;
        int i=1;
        while(i<n){
            Node *newNode=new Node(arr[i]);
            curr->next=newNode;
            curr=newNode;
            i++;
        }
    }
    void addFirst(int data){
        Node *newNode=new Node(data);
        if(head==nullptr){
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }
    void addMiddle(int data,int nextTo){
        Node *newNode=new Node(data);
        Node *current=head;
        while(current->data!=nextTo){
            current=current->next;
        }
        newNode->next=current->next;
        current->next=newNode;
    }
    void show(){
        Node *current=head;
        if(head==nullptr){
            cout<<"List is empty";
            return;
        }
        while(current!=nullptr){
            cout<<current->data<<"->";
            current=current->next;
        }
        cout<<"Null";
    }
};
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    LinkedList ll;
    ll.createList(arr,n);
    ll.addMiddle(100,20);
    ll.show();
}