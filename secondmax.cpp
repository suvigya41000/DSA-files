#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,2,11,7,10};
    int max1=arr[0],max2=0;
    for(int i=1;i<5;i++){
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];
            continue;
        }
        if(max2<arr[i]){
            max2=arr[i];
        }
    }
    cout<<"Second Largest element= "<<max2;
}