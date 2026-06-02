//Program to find x^n without pow()
#include<iostream>
using namespace std;
int main(){
    int base , power;
    cout<<" Enter base number and power";
    cin>>base>>power;
    int number=1;
    for(int i=1;i<=power;i++){
        number=number*base;

    }
    cout<<number;
    return 0;
}