//Program to find row-wise sum in a matrix
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
    //sum
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum=sum+matrix[i][j];
        }
        cout<<"Sum of row "<<i+1<<sum<<endl;

    }
    return 0;
}