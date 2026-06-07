//Program to Write function to find maximum
#include<iostream>
using namespace std;
int maximum(int num1,int num2){
    if(num1>num2) cout<< num1;
    else if (num1<num2) cout<< num2;
    else cout<<"Both the given numbers are equal";
    return 0;
    
}
int main(){
    int num1,num2;
    cout<<"Enter the two numbers";
    cin>>num1>>num2;
    maximum(num1,num2);
    return 0;
}