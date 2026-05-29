#include <iostream>
using namespace std;
int main(){
    int num,number,rem,rev=0;
    cout<<"Enter the number";
    cin>>num;
    number=num;
    for(int i=0;num>0;i++){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==number){
        cout<<"Palindrome";
    }
    else{cout<<"Not a a Palindrome";}


}