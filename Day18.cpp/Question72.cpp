//Program to sort array in descending order
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    //Input array
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Sorting
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    //Output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}