//Program to rotate array to right
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    if(n==0) return 0;
    int arr[n];
    //Input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Reverse to the right
    int temp=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    //Output
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;}