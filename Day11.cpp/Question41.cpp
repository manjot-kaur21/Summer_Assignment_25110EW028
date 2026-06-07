//To write function to find sum of two numbers
#include<iostream>
using namespace std;
int sum(int num1,int num2){
    return num1+num2;
}
int main(){
    int num1,num2;
    cout<<"Enter the two numbers";
    cin>>num1>>num2;
    cout<<sum(num1,num2);
    return 0;
}