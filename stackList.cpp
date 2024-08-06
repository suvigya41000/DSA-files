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
class StackLink{
    public:
    Node *head=nullptr;
    void push(int data){
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
    void pop(){
        if(head==nullptr){
            cout<<"List is empty";
            return;
        }
        Node *prev=head;
        Node *current=prev->next;
        while(current->next!=nullptr){
            prev=prev->next;
            current=current->next;
        }
        prev->next=nullptr;
    }
    bool isEmpty(){
        return head==nullptr;
    }
    int peek(){
        if(head==nullptr){
            cout<<"Stack is empty";
        }
        Node *current=head;
        while(current->next!=nullptr){
            current=current->next;
        }
        return current->data;
    }
    void print(){
        Node *current=head;
        if(head==nullptr){
            cout<<"Stack is empty";
            return;
        }
        while(current!=nullptr){
            cout<<current->data<<"->";
            current=current->next;
        }
        cout<<"NULL\n";
    }

};
int main(){
    StackLink st;
    st.push(34);
    st.push(1);
    st.print();
    st.push(100);
    st.print();
    st.pop();
    st.print();
}