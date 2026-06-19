//Program to subtract matrices
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the elements of rows and columns";
    cin>>m>>n;
    int A[m][n],B[m][n],C[m][n];
    //Input elements of 1 matrix
    cout<<"Enter the elements of 1 matrix";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    cout<<"Enter elements of 2 matrix";
    //Input elements of 2 matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    //Substract
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            C[i][j]=A[i][j]-B[i][j];
        }
    }
    //Output
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;


}