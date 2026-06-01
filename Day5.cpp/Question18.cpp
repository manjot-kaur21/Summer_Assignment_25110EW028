//Program to check a strong number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    int number= num;
    int sum=0;
    while(num>0){
        int rem=num%10;
        num=num/10;
        int fact=1;

        for(int j=1;j<=rem;j++){

            fact=fact*j;
        }
            sum=sum+fact;
        }
        
    if(sum== number){
        cout<<"Strong Number";
    }
    else{
        cout<<"Not a Strong Number";
    }
    return 0;
}
