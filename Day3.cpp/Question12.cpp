//To find LCM of two numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two numbers";
    cin>>num1 >>num2;
    int lcm=1;
    for(int i=max(num1,num2);;i++){
        int rem1=i%num1;
        int rem2=i%num2;
        if(rem1 == 0  && rem2 == 0){
            lcm=i;
            break;
           
        }
        
    }
    cout<<lcm;
    return 0;
    
}