//Program to add matrices
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows and columns";
    cin>>m>>n;
    int A[m][n],B[m][n],C[m][n];
    //Input 1 matrix
    cout<<"Enter elements of 1 matrix";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    //Input 2 matrix
    cout<<"Enter the elements of 2 matrix";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    //Addition of matrices
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    //Output matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}