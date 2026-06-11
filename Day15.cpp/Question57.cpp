//Program to Reverse an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    //Input of array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Reverse an array
    int temp;
    for(int j=0;j<n/2;j++){
        temp=arr[j];
        arr[j]=arr[n-1-j];
        arr[n-1-j]=temp;
        
    }
    //Output
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}