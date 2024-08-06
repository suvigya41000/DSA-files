#include<iostream>
using namespace std;
class QueImp{
    public:
    int rear,front,*arr,size;
    QueImp(int size){
        rear=-1;
        front=-1;
        this->size=size;
        arr=new int[size];
    }
    void enqueue(int data){
        if(rear==size-1){
            cout<<"Queue overflow";
            return;
        }
        rear++;
        arr[rear]=data;
        if(rear==0){
            front=0;
        }
    }
    int dequeue(){
        int dequedElement=arr[front];
        if(rear==-1){
            cout<<"Queue underflow";
        }
        for(int i=0;i<rear;i++){
            arr[i]=arr[i+1];
        }
        arr[rear]=0;
        rear--;
        if(rear==-1){
            front=-1;
        }
    return dequedElement;
    }
    bool isEmpty(){
        if(rear==-1)
            return true;
        else
            return false;
    }
    int sizeQueue(){
        return rear+1;
    }
    int peek(){
        if(isEmpty()){
            return 0;
        }
        return arr[front];
    }
};
int main(){
    QueImp obj(10);
    obj.enqueue(10);
    obj.enqueue(2);
    cout<<obj.sizeQueue()<<endl;
    obj.enqueue(3);
    cout<<obj.dequeue()<<endl;
    cout<<obj.dequeue()<<endl;
    cout<<obj.peek()<<endl;
    cout<<obj.dequeue()<<endl;
    cout<<obj.peek()<<endl;

}