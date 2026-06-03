//Program to find recursive factorial
#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}


int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<fact(num);
    return 0 ;

    
}