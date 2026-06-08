//Program to write function for Fibonacci 0 1 1 2 3
#include<iostream>
using namespace std;
void Fibonacci(int num){
    if(num<0){
         cout<<"Please enter a positive number";
         return;}
    if(num==0){
        cout<<0;
        return ;}
    int first_term =0;
    int second_term=1;
    cout<< first_term<<" "<<second_term<<" ";
    for(int i=1;i<=num-2;i++){
        int third_term=first_term+second_term;
        cout<<third_term<<" ";
        first_term=second_term;
        second_term=third_term;
    }
}
int main(){
    int num;
    cout<<"Enter the number of terms";
    cin>>num;
    Fibonacci(num);
    return 0;
}
