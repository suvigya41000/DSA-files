#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter row and columns of matrix: ";
    cin>>n>>m;
    cout<<"Enter values of Sparse Matrix:";
    int sm[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>sm[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<sm[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"row\tcolumn\tvalue\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(sm[i][j]!=0){
                cout<<i<<"\t"<<j<<"\t"<<sm[i][j]<<"\n";
            }
        }
    }

}