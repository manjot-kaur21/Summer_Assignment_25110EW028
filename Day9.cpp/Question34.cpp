/*
Program to Print reverse number triangle. 
 12345 
1234 
123 
12 
1 
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    for(int i=num;i>0;i--){
       for(int j=1;j<=i;j++){
        cout<<j;
       }
    cout<<'\n';}
    
    return 0;
}


