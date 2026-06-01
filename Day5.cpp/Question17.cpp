//To check whether a number is Perfect number or not
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    int number=num;
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum = sum + i;

        }      

    }
    if(sum==number){
        cout<<"Perfect number";
    }
    else{
        cout<<"Not a Perfect number";
    }
    return 0;
    

}