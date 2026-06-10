//Program to find duplicates in an array
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
    //Finding duplication
    int count=0;

    for(int j=0;j<n;j++){
        bool Already_seen = false;
        for(int k=j+1;k<n;k++){
            if(arr[j]==arr[k]){
                for(int i=0;i<=j-1;i++){
                    if(arr[j]==arr[i]){
                         Already_seen= true ;
                         break;}
                    
                }
                if(Already_seen==false) {
                    cout<<arr[j]<<" ";
                    break;}
                
            }
        }
    }
    return 0;
}