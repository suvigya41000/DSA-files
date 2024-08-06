#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows and columns of the array: ";
    cin>>n>>m;
    int arr[n][m],arr2[m][n];
    cout<<"Enter values of the matrix 1"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr2[j][i]=arr[i][j];
        }
    }
    cout<<"Transposed"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }

}