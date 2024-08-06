#include<iostream>
using namespace std;
int main(){
    int r1,r2,c1,c2;
    cout<<"Enter rows amd columns of matrix 1: ";
    cin>>r1>>c1;
    cout<<"Enter coloumns of matrix: ";
    cin>>r2>>c2;
    int m1[r1][c1],m2[r2][c2],mul[r1][c2];
    if(c1==r2){
        cout<<"Enter values of matrix 1:\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cin>>m1[i][j];
            }
        }
        cout<<"Enter values of matrix 2:\n";
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cin>>m2[i][j];
            }
        }
        cout<<"\n------Matrix 1------\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cout<<m1[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\n------Matrix 2------\n";
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cout<<m2[i][j]<<"\t";
            }
            cout<<endl;
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                int sum=0;
                for(int k=0;k<c1;k++){
                sum+=m1[i][k]*m2[k][j];
                }
                mul[i][j]=sum;
            }
        }
        cout<<"\n------Sum of matrix------\n";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<mul[i][j]<<"\t";
            }
            cout<<endl;
        }
    }   
 return 0;
}