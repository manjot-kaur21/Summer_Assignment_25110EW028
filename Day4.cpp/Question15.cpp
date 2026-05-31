//Whether a number is Armstrong number or not
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    int find=0;
    int number=num;
    int num1=num;
    int count=0;
    while(num1>0){
        count++;
        num1=num1/10;
    }

    while(num>0){
        int rem=num%10;
        find = find + pow(rem,count);
        num=num/10;

        
    }
    if (number==find){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }
    return 0;
}