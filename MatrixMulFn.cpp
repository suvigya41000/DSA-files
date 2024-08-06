#include<iostream>
using namespace std;
void addMatrix(int *p1,int *p2,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<(*p1)+(*p2)<<"\t";
            p1++;
            p2++;
        }
        cout<<endl;
    }
}
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
    addMatrix(*m1,*m2,n,m);
    return 0;
}