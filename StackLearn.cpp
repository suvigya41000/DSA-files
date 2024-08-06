#include<iostream>
using namespace std;
class Stack{
    public:
    int top;
    int *arr;
    int size;
    Stack(int s){
        top=-1;
        size=s;
        arr=new int[s];
    }
    void push(int data){
        top++;
        if(top==size){
            cout<<"Stack overloading";
            return;
        }
        arr[top]=data;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow";
            return;
        }
        arr[top]=0;
        top--;
    }
    int peek(){
        if(top==-1){
            return 0;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }
};
int main(){
    Stack obj(5);
    obj.push(7);
    obj.pop();
    obj.pop();
    cout<<endl<<obj.peek()<<endl;
    cout<<obj.isEmpty();
}
