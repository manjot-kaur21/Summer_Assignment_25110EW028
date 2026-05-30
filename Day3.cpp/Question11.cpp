//To find GCD of two numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2,gcd=1;
    cout<<"Enter two numbers";
    cin>>num1>>num2;
    for(int i=1;i<=min(num1,num2);i++){
        int rem1=num1%i;
        int rem2=num2 %i ;
        if (rem1&& rem2==0){
            if(i>gcd){
                gcd=i;
            }
            else{
                continue;
            }
        }
        else{ continue;}
        
        
    }
    cout<<gcd;
    return 0;

}