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
class LL{    
        public:
        Node *head=nullptr;
        void addFirst(int data){
            Node *newNode=new Node(data);
            if(head==nullptr){
                head=newNode;
                return;
            }
            newNode->next=head;
            head=newNode;
        }
        void printList(){
            if(head==nullptr){
                cout<<"Empty List \n";
                return;
            }
            Node *curNode=head;
            while(curNode!=nullptr){
                cout<<curNode->data<<"->";
                curNode=curNode->next;
            }
            cout<<"Null \n";
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
        
        void delFirst(){
            if(head==nullptr){
                cout<<"List is empty.";
                return;
            }
            head=head->next;
        }
        void delLast(){
            if(head==nullptr){
                cout<<"List is empty.";
                return;
            }
            Node *prev=head;
            Node *current=head->next;
            while(current->next!=nullptr){
                prev=current;
                current=current->next;
            }
            prev->next=nullptr;
        }
        void delMiddle(int data) {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node *prev = nullptr;
        Node *current = head;

        while (current != nullptr && current->data != data) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << data << " Not found" << endl;
        } else {
            if (prev == nullptr) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            delete current;
        }
    }
 };
 int main(){
    LL ll;
    ll.printList();
    ll.addFirst(5);
    ll.addLast(4);
    ll.addFirst(3);
    ll.addFirst(2);
    ll.printList();
    ll.delMiddle(5);
    ll.delFirst();
    ll.printList();
    cout<<endl;
    ll.delLast();
    ll.printList();
    ll.delMiddle(3);
    ll.printList();
 }