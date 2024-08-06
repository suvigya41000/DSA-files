#include<iostream>
using namespace std;
class StrRev{
    public:
    int top;
    char *ch;
    int size;
    StrRev(int s){
        top=-1;
        ch=new char[s];
        size=s;
    }
    void push(char data){
        top++;
        if(top==size){
            cout<<"Stack overflow";
            return;
        }
        ch[top]=data;
    }
    char pop(){
        char last;
         if(top==-1){
            cout<<"stack underflow";
         }
         else{
            last=ch[top];
            ch[top]=0;
            top--;
         }
        return last;
    }
};
string revStr(string str){
    int s=str.length();
    StrRev rev(s);
    string str2="";
    for(int i=0;i<s;i++){
        rev.push(str[i]);
    }
    for(int i=0;i<s;i++){
        str2=str2+rev.pop();
    }
    return str2;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    cout<<str<<endl;
    cout<<"Reverse of given string: "<<revStr(str);
}