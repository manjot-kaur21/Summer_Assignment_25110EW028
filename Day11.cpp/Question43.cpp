//Program to write function to check prime

#include<iostream>
using namespace std;
int prime(int num){
    if(num<=1){
        cout<<"Not a prime number";
        return 0;
    }
    int count=0;
    for(int i=2;i<num;i++){
        int rem=num%i;
        if(rem==0){
            count++;}
        }
    if(count==0){
        cout<<"Prime number";
    }
    else cout<<"Not a Prime number";
    return 0;

}
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    prime(num);
    return 0;
}