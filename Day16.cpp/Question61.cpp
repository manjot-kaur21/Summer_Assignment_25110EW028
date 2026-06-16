//Program to find missing number in an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    //Input array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Missing element
    int num;
    cout<<"Enter the max number";
    cin>>num;
    for(int i=1;i<=num;i++){
         bool found =false;
        for(int j=0;j<n;j++){
            if(arr[j]== i){
                found=true;
                
            }
        }
        if(found==false){
                cout<<i;
        }
    }
            
    return 0;
    
    
}            