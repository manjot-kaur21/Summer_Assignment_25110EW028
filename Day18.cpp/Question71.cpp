//Program to do binary search
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
    cout<<"Enter the element to find";
    int target;
    cin>>target;
    //Binary search
    int low=0;
    int high=n-1;
    bool found=false;
    while(low<=high){
        int mid=(low+high)/2;
        if(target>arr[mid]){
            low=mid+1;
        }
        else if(target<arr[mid]){
            high=mid-1;
        }
        else if(arr[mid]==target){
            cout<<"Target found at index "<<mid;
            found=true;
            break;
        }

        
    }

    if(!found){
        cout<<"Target not found";
    }
    return 0;

}
