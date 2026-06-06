/*
Program to print character pyramid
    A 
   ABA 
  ABCBA 
 ABCDCBA 
ABCDEDCBA
*/
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        char ch='A';
        //spaces
        for(int j=rows-i;j>0;j--){
            cout<<" ";
        }
        //increasing characters
        for(int k=0;k<i ;k++){
            cout<<char(ch+k);
        }
        //decreasing character
        for(int l=i-2;l>=0;l--){
            cout<<char(ch+l);
        }
        cout<<endl;
    }
    return 0;

}