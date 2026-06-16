//Program to Find pair with given sum.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    //Input array
    for(int i=0;i<n;i++){
        cin>>arr[i];}
    
    //Sum
    int target;
    cout<<"Enter the target";
    cin>>target;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<< endl;
            }

        }
        
    }
    return 0;}
