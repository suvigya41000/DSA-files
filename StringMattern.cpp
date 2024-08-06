#include<iostream>
using namespace std;
int main(){
    string str1="ABACABCDDBAABCD";
    string str2="ABCD";
    int n=str1.length();
    int m=str2.length();
    for(int i=0;i<=n-m;i++){
        for(int j=0;j<m;j++){
            if(str1[i+j]!=str2[j]){
                break;
            }
            else if(j==m-1){
                cout<<"Pattern found at: "<<i<<endl;
            }
        }
    }
}