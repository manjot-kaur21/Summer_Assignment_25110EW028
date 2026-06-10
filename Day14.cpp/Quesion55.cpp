//Program to find second largest element
#include<iostream>
using namespace std;
int main(){
      int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    //Input of array;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Finding second largest number 
    int largest=arr[0];
    int second_largest=arr[0];
    for(int j=0;j<n;j++){
        if(arr[j]>largest){
            second_largest=largest;
            largest=arr[j];
        }
        if(second_largest<arr[j] && arr[j]!=largest){
            second_largest=arr[j];
        }
    }
    cout<<"Second largest element is "<<second_largest;
    return 0;

}