//Program to do transpose of a matrix
#include<iostream>
using namespace std;
int main(){
    int m ,n;
    cout<<"Enter the number of rows and columns";
    cin>>m>>n;
    int A[m][n],B[n][m];
    //Input matrix
    cout<<"Enter the elements of the array";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    //Transpose
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            B[j][i]=A[i][j];
        }
    }
    //Output
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}