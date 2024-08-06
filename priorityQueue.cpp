#include<iostream>
#include<limits>
using namespace std;
class Priority{
    public:
    int value;
    int priority;
    Priority(){
        value=0;
        priority=-1;
    }
};
class Queue{
    public:
    int size;
    Priority *q;
    int vals;
    Queue(int size){
        this->size=size;
        q=new Priority[size];
        vals=-1;
    }
    void enqueue(int e,int p){
        vals++;
        if(vals==size){
            cout<<"queue overflow";
            return;
        }
        q[vals].value=e;
        q[vals].priority=p;
    }
    int peek(){
        if(vals==-1){
            cout<<"queue is empty";
            return -1;
        }
        int highest=INT_MIN;
        int idx=-1;
        for(int i=0;i<=vals;i++){
            if(q[i].priority>highest){
                highest=q[i].priority;
                idx=i;
            }
        }
        return idx;
    }
    int dequeue(){
        if(vals==-1){
            cout<<"queue is empty";
            return -1;
        }
        int dequeueElementIndex=peek();
        int element=q[dequeueElementIndex].value;
        for(int i=dequeueElementIndex;i<=vals;i++){
            q[i]=q[i+1];
        }
        vals--;
        return element;
    }
    void show(){
        cout<<"Value\tPriority"<<endl;
        for(int i=0;i<=vals;i++){
            cout<<q[i].value<<"\t"<<q[i].priority<<endl;
        }
    }
};
int main(){
    Queue pq(5);
    pq.enqueue(10,2);
    pq.enqueue(20,4);
    pq.enqueue(50,5);
    pq.enqueue(100,1);
    pq.show();
    cout<<"dequeued element: "<<pq.dequeue()<<endl;
    pq.show();
}