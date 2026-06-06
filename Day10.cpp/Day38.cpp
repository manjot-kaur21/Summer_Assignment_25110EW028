/*
Program to Print reverse pyramid. 
********* 
 ******* 
  ***** 
   *** 
    * 
*/
#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter the number of rows";
    cin>>rows;
    for(int i=rows;i>0;i--){
        //spaces
        for(int j=0;j<rows-i;j++){
            cout<<" ";
        }
        //stars
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}