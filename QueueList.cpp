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
class Queue{
    public:
    Node *head=nullptr;
    void enqueue(int data){
        Node *newNode = new Node(data);
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
            cout<<"Queue is empty.";
            return;
        }
        head=head->next;
    }
    bool isEmpty(){
        return head==nullptr;
    }
    void show(){
        if(isEmpty()){
            cout<<"Queue is empty.";
            return;
        }
        Node *current=head;
        while(current!=nullptr){
            cout<<current->data<<"->";
            current=current->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    Queue q1;
    q1.enqueue(12);
    q1.enqueue(23);
    q1.enqueue(34);
    q1.show();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.show();
    cout<<q1.isEmpty();
}