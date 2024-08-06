#include<iostream>
using namespace std;
class Queue{
    public:
    int rear, front;
    int *arr;
    int size;
    Queue(int size){
        arr=new int[size];
        this->size=size;
        rear=-1;
        front=-1;
    }
    bool isEmpty(){
        return front==-1 && rear==-1;
    }
    void enqueue(int data){
        rear++;
        if(rear==size){
            cout<<"overloaded"<<endl;
            rear--;
            return;
        }
        if(rear==0){
            front=0;
        }
        arr[rear]=data;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"empty";
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
    void show(){
        if(isEmpty()){
            cout<<"empty";
            return;
        }
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<"->";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);
    q.enqueue(5);
    q.enqueue(4);
    q.enqueue(4);
    q.enqueue(4);
    q.enqueue(4);
    q.enqueue(4);
    q.show();
    q.dequeue();
    q.show();

}