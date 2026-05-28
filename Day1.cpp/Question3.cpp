#include<iostream>
using namespace std;
int main(){
    int n,fact;
    cout<<"Enter number";
    cin>>n;
    if(n==0){
        fact=0;
    }
    else
         fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}