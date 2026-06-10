//Program to find Frequecy of an element
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
    //Target
    int target;
    cout<<"Enter the element ";
    cin>>target;
    //Finding Frequency
    int count = 0;
    for(int j=0;j<n;j++){
        if(arr[j]==target){
            count++;
        }
    }
    cout<<"The frequency of the given element is "<<count;
    return 0;
}