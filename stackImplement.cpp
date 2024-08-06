#include<iostream>
using namespace std;
class stackImp{
    public:
    int top=-1;
    int arr[10];
    void push(int data){
        top++;
        if(top==10){
            cout<<"Stack overflow";
        }
        else{
            arr[top]=data;
        }
    }
    int pop(){
        int last;
         if(top==-1){
            cout<<"stack underflow";
         }
         else{
            last=arr[top];
            arr[top]=0;
            top--;
         }
         return last;
    }
    void output(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<",";
        }
        cout<<endl;
    }
    int size(){
        return top;
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else    
            return false;
    }
    int peek(){
        return arr[top];
    }
};
int main(){
    stackImp obj;
    cout<<"IS empty: "<<obj.isEmpty()<<endl;
    obj.push(3);
    obj.output();
    obj.push(2);
    obj.output();
    obj.push(4);
    obj.output();
    cout<<"Pop called: "<<obj.pop()<<endl;
    cout<<"Peek called: "<<obj.peek()<<endl;
    obj.output();
    cout<<"IS empty: "<<obj.isEmpty()<<endl;

}