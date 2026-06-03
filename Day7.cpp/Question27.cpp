//Program to print recursion sum of digits
#include<iostream>
using namespace std;
int sum(int num){
    if(num==0){
        return 0;
    }
    int rem=num%10;
    num=num/10;
    return rem+sum(num);


}

int main(){
    int num1;
    cout<<"Enter the number";
    cin>>num1;
    cout<<sum(num1);

    
}