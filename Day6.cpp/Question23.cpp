//Program to count set bits in a number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter number";
    cin>>num;
    //conversion
    int arr[32];
    int count=0;
    for(int i=0;num>0;i++){
        int rem = num%2;
        arr[i]=rem;
        num=num/2;
        count++;

    } 
    //Counting set bits(total number of 1)
    int bits =0;
    for(int j=0;j<=count-1;j++){
        if(arr[j]==1){
            bits++;
        }
    }
    cout<<"set bits =  "<< bits;
    return 0;

}