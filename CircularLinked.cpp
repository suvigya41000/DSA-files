#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=nullptr;
    }
};
class CircularLL{
    public:
    Node *head=nullptr;
    void addFirst(int data){
        Node *newNode=new Node(data);
        if(head==nullptr){
            head=newNode;
            return;
        }
        newNode->next=head;
        head->next=newNode;
        head=newNode;
    }
    void addLast(int data){
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
};
