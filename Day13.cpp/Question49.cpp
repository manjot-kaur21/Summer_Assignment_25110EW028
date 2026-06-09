//Program to input and display an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    //Input 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Output
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}