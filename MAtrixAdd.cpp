#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows of matrix: ";
    cin>>n;
    cout<<"Enter coloumns of matrix: ";
    cin>>m;
    int m1[n][m],m2[n][m],sum[n][m];
    cout<<"Enter values of matrix 1:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"Enter values of matrix 2:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>m2[i][j];
        }
    }
    cout<<"\n------Matrix 1------\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<m1[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n------Matrix 2------\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<m2[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    cout<<"\n------Sum of matrix------\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<sum[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}