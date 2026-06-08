//Program to write function for perfect number
#include<iostream>
using namespace std;
void Perfect(int num){
    int number = num;
    int sum=0;
    if(num<=0) {
        cout<<"Enter non zero positive numbers";
        return;
    }
    for(int i=1;i<num;i++){
        int rem=num%i;
        if(rem==0){
            sum=sum+i;}
    }
    if(number==sum) cout<<"Perfect Number";
    else cout<<"Not a Perfect Number";
}
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    Perfect (num);
    return 0;
}