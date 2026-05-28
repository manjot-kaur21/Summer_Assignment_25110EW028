#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number";
    cin>>n;
    int count=0;
    for(int i=1;n>0;i++){
        n=n/10;
        count=count+1;
    }
    cout<<count;
    return 0;
}