//Program to convert decimal to binary
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    int arr[32];
    //conversion
    int count=0; 
    while(number>0){
        int rem=number%2;
        arr[count]=rem;
        number=number/2;
        count++;
        
    }
    
    //printing array
    for(int k=count-1;k>=0;k--){
        cout<<arr[k];
    }
    return 0;

}