#include <iostream>
using namespace std;
class CircularQ{
    public:
    int *arr;
    int rear=-1;
    int front=-1;
    int size;
    CircularQ(int n){
        this->size=n;
        arr=new int[n];
    }
    bool isEmpty(){
        return (rear== -1) && (front== -1);
    }
    bool isFull(){
        return (rear+1)%size==front;
    }
    void enqueue(int data){
        if(isFull()){
            cout<<"Queue is full.";
            return;
        }
        rear=(rear+1)%size;
        // rear++;
        // if(rear==size){
        //     rear=0;
        // }
        if(front==-1){
            front=0;
        }
        arr[rear]=data;
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty.";
            return 0;
        }
        int temp=arr[front];
        arr[front]=0;
        front=(front+1)%size;
        // front++;
        // if(front==size){
        //     front=0;
        // }
        return temp;
    }
    int peek(){
        if(isEmpty()){
            return 0;
        }
        return arr[front];
    }
    void print(){
        if(isEmpty()){
            cout<<"Queue is empty.";
            return;
        }
        if(rear>front){
            for(int i=front; i<=rear;i++){
                cout<<arr[i]<<",";
            }
        }
        if(rear<front){
            for(int i=front;i<size;i++){
                cout<<arr[i]<<",";
            }
            for(int i=0;i<=rear;i++){
                cout<<arr[i]<<",";
            }
        }
    }
};
int main(){
    CircularQ q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(54);
    q.print();
    cout<<endl;
    cout<<q.dequeue()<<endl;
    q.enqueue(100);
    q.print();
    cout<<endl;
    cout<<q.peek();
    return 0;
}