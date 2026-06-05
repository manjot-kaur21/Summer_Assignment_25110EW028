/*
Program to Print hollow square pattern. 
***** 
*    * 
*    * 
*    * 
***** 
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Dimension of square";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==1||i==num||j==1||j==num){
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
       
        }
        return 0;
    }

