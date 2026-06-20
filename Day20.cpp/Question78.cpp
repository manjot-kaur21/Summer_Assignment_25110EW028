//Program to check symmentric matrix
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter order of matrix ---> Row then column";
    cin>>m>>n;
    int matrix[m][n];
    //Input matrix ;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter "<<i<<j<<"th element of matrix ";
            cin>>matrix[i][j];
        }
    }
    if(m!=n){
        cout<<"Matrix is not symmetric";
        return 0;
    }
    //Checking symmetricity
    bool symmetric = true;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]!=matrix[j][i]){
                symmetric = false;
                break;
            }
        }
    }
    if(symmetric){
        cout<<"Matrix is symmetric";
    }
    else{
        cout<<"Matrix is not symmetric";
    }
    return 0;
}