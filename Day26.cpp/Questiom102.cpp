//Program to create voting eligibility system
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<0){
        cout<<"Invalid age!";
    }
    else if(age>=18){
        cout<<"You are eligible fir voting";
    }
    else{
        cout<<"You are not eligible for voting";
    }
    return 0;
}