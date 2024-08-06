#include <iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=nullptr;
    }
};
class CircularQueue {
private:
    Node* front;
    Node* rear;
public:
    CircularQueue() {
        front = nullptr;
        rear = nullptr;
    }
    bool isEmpty() {
        return (front == nullptr) && (rear==nullptr);
    }
    void enqueue(int data) {
        Node* newNode = new Node(data);

        if (isEmpty()) {
            front = newNode;
        } else {
            rear->next = newNode;
        }
        rear = newNode;
        rear->next = front; // Circular link
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Circular Queue is empty. Cannot dequeue." << endl;
            return;
        }
        if (front == rear) {
            delete front;
            front = nullptr;
            rear = nullptr;
        } else {
            front = front->next;
            rear->next = front;
        }
    }
    int getFront() {
        if (isEmpty()) { 
            cout << "Circular Queue is empty. No front element." << endl;
            return -1; // You can choose a suitable return value for an empty queue.
        }
        return front->data;
    }
    void display() {
        if (isEmpty()) {
            cout << "Circular Queue is empty." << endl;
            return;
        }
        Node* temp = front;
        while(temp->next!=front){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout << endl;
    }
};
int main() {
    CircularQueue cq;
    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.enqueue(4);
    cout << "Circular Queue: ";
    cq.display();
    cq.dequeue();
    cq.dequeue();
    cout << "Circular Queue after dequeue: ";
    cq.display();
    cout << "Front element: " << cq.getFront() << endl;
    return 0;
}