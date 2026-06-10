//Program to linear search
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
    cout<<"Enter the term you need to find";
    int target;
    cin>>target;
    //Finding target
    for(int j=0;j<n;j++){
        if(arr[j]==target){
            cout<<"Element is at "<<j<<" index";
            return 0;
        }

    }
    cout<<"Element is not in the given array";
    return 0;


}
