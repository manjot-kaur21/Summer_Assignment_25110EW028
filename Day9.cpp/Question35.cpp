/*
Program to Print repeated character pattern. 
A 
BB 
CCC 
DDDD 
EEEEE 
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    for(int i=0;i<num;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch;
        }
        ch++;
        cout<<'\n';
    }
    return 0;

}