#include<iostream>
using namespace std;
int main(){
    int num,rem,product=1;
    cout<<"Enter a number";
    cin>>num;
    for(int i=0;num>0;i++){
        rem=num%10;
        product=product*rem;
        num=num/10;
    }
    cout<<product;
    return 0;
}