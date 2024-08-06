#include<iostream>
using namespace std;
bool prime(int n){
    if(n==2){
        return true;
    }
    if(n==1 || n==0){
        return false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n=0;
    if(prime(n))
        cout<<n<<" is prime";
    else    
        cout<<n<<" is not prime";
}