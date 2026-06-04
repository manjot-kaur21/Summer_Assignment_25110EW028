/*
Program to Print character triangle. 
A 
AB 
ABC 
ABCD 
ABCDE 
*/
#include<iostream>
using namespace std;
int main(){
    for(char ch='A';ch<='E';ch++){
        for (char i='A';i<=ch;i++){
            cout<<i;
      
        }
     cout<<endl;
    }
    return 0;
}