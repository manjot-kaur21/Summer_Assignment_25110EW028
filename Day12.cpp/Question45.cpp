//Program to write function for palindrome
#include<iostream>
using namespace std;
void Palindrome(int num){
    int rev=0;
    int number=num;
    while(num>0){
        int rem=num%10;
        rev=rev*10+rem;
        num=num/10;}
    if(number==rev) cout<<"Palindrome";
    else cout<<"Not Palindrome";}

int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    Palindrome(num);
    return 0;
}