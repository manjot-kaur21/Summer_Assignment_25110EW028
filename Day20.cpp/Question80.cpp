//Program to find column-wise sum
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
    //Columnwise sum;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+matrix[j][i];}
        cout<<"Sum of column "<<i +1<<" is" << sum<<endl;

    }
    return 0;
}