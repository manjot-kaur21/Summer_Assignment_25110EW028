//Program to write a function to find factorial
#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(num<0){
        cout<<"Factorial of negative number is not defined";}
    else{
        cout<<factorial(num);}
    return 0;
}