#include<iostream>
using namespace std;
void input(int *m,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>*m;
            m++;
        }
    }
}
void output(int *m,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<*m<<"\t";
            m++;
        }
        cout<<endl;
    }
}
void addMatrix(int *p1,int *p2,int *mul,int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            *mul=(*p1)+(*p2);
            p1++;
            p2++;
            mul++;
        }
    }
}
int main(){
    int n,m;
    cout<<"Enter rows of matrix: ";
    cin>>n;
    cout<<"Enter coloumns of matrix: ";
    cin>>m;
    int m1[n][m],m2[n][m],sum[n][m];    
    cout<<"Enter values of matrix 1: "<<endl;
    input(*m1,n,m);
    cout<<"Enter values of matrix 2: "<<endl;
    input(*m2,n,m);
    cout<<"----matrix 1------"<<endl;
    output(*m1,n,m);
    cout<<"-----matrix 2------"<<endl;
    output(*m2,n,m);
    addMatrix(*m1,*m2,*sum,n,m);
    cout<<"-----Added MAtrix-----"<<endl;
    output(*sum,n,m);
}