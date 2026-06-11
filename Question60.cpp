//Program to move zeroes to the end;
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
    
    //shifting
    int pointer=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[pointer]=arr[i];
            pointer++;
        }
    }
    while(pointer<n){
        arr[pointer]=0;
        pointer++;
    }
    //Output
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
      
}