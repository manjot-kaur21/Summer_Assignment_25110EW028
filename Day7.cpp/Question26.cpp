//Program to print recursive Fibonacci 
#include<iostream>
using namespace std;
int Fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Fibonacci(n-2)+Fibonacci(n-1);

}
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    for(int i=0;i<num-1;i++){
        cout<<Fibonacci(i)<<" ";
    }

    return 0;


}