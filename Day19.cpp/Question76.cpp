//Program to find diagonal sum
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the rows and columns of array ";
    cin>>m>>n;
    int A[m][n];
    //Input matrix
    cout<<"Enter elements";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    //Sum
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum=sum+A[i][j];
            }
        }
    }
    //Output
    cout<<sum;
    return 0;
}