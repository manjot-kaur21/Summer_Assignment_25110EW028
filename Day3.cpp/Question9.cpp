//Prime number or not
#include<iostream>
using namespace std;
int main(){
    int num,prime;
    cout<<"Enter number";
    cin>>num;
    if(num==1){
        cout<<"Number is not prime";
        return 0;
    }
    prime=0;
    for(int i=2;i<=num;i++){
        int rem=num%i;
        if(rem==0){
            prime=prime+1;
        
        }
    }
    if (prime==1){
        cout<<"Number is prime";
    }
    else{
        cout<<"Number is not prime";
    }
    return 0;
    
}