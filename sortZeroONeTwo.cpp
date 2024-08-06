#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,1,1,1,2,2,0,0,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            zero++;
        else if(arr[i]==1)
            one++;
        else if(arr[i]==2)
            two++;
    }
    for(int i=0;i<n;i++){
        if(zero>0){
            cout<<"0,";
            zero--;
        }
        else if(one>0){
            cout<<"1, ";
            one--;
        }
        else if(two>0){
            cout<<"2,";
            two--;
        }
    }

}