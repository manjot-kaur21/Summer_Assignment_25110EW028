//Program to rotate array left
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
    //Rotating to the left

    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    //Output
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}