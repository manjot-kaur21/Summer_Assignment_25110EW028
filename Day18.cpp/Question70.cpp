//Program to bubble sort
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    //Input array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Selection sort
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                
                min=j;
            }
        }
        if(i!=min){
            swap(arr[i],arr[min]);
        }
    }
    //Output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}