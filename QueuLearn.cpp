#include<iostream>
using namespace std;
class Queue{
    public:
    int front,rear;
    int *arr;
    int size;
    Queue(int s){
        front=-1;
        rear=-1;
        arr=new int[s];
        size=s;
    }
    void enqueue(int data){
        rear++;
        if(rear==size){
            cout<<"Queue overloaded"<<endl;
            rear--;
            return;
        }
        arr[rear]=data;
        if(rear==0){
            front=0;
        }
    }
    void deQueue(){
        if(rear==-1){
            cout<<"Queue underflow";
            return;
        }
        for(int i=front;i<rear;i++){
            arr[i]=arr[i+1];
        }
        arr[rear]=0;
        rear--;
        if(rear==-1){
            front=-1;
        }
    }
    int queuefront(){
        if(front==-1){
            cout<<"Queue is empty";
            return 0;
        }
        return arr[front];
    }
    bool isEmpty(){
        return front==-1;
    }
    void print(){
        if(isEmpty()){
            cout<<"Queue is empty";
            return;
        }
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<",";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(6);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(40);
    q.print();
    q.deQueue();
    q.print();
    cout<<q.queuefront();
}