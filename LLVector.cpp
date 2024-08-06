#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> ll;
    ll.push_front(3);
    cout<<ll.front();
}