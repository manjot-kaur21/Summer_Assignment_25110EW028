/*
Program to Print star pyramid. 
    * 
   *** 
  ***** 
 ******* 
********* 
*/
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        //spaces
        for(int j=rows-i;j>0;j--){
            cout<<" ";
        }
        //stars
        for(int k=0;k<2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}