//Program to sort words by length
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    string arr[n];
    //Input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Sorting
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j].size()>arr[j+1].size()){
                swap(arr[j],arr[j+1]);
            }
        }

    }
    //out
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}