//Program to multiply matrices
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter order of matrix 1 and 2---> Row then column";
    cin>>a>>b>>c>>d;
    int matrix1[a][b];
    int matrix2[c][d];
    //Input matrix 1;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<"Enter "<<i<<j<<"th element of matrix 1";
            cin>>matrix1[i][j];
        }
    }
    //Input matrix 2
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            cout<<"Enter "<<i<<j<<"th element of matrix 2";
            cin>>matrix2[i][j];
        }
    }
    //Checking if they can be multiplied or not
    if(b!=c){
        cout<<"Matrix multiplication not possible";
        return 0;
    }
    int matrix3[a][d];
    
        for(int i=0;i<a;i++){
            for(int j=0;j<d;j++){
                matrix3[i][j]=0;

                for(int k=0;k<b;k++){
                    matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
                    
                }
        }
    }
    //Output
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            cout<<matrix3[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;

}