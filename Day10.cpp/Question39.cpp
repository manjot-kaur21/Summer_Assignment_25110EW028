/*
Program to Print number pyramid. 
    1 
   121 
  12321 
 1234321 
123454321 
*/
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        //spaces
        for(int j=rows-i;j>=0;j--){
            cout<<" ";
        }
        //increasing numbers
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        //decreasing number
        for(int l=i-1;l>0;l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
    

}