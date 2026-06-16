//Program to remove duplicates from an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    //Input array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Removing duplicates
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count==0){
            cout<<arr[i]<<" ";
            }
    }
    return 0;
}