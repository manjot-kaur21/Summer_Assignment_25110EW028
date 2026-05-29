#include<iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"Enter the number";
    cin>>num;
    for(int i=0; num>0;i++){
        int rem =num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    cout<<sum;
    return 0;

}