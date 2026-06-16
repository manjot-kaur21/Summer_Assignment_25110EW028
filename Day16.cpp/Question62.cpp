//Program to Find maximum frequency element
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
    //Frequency
    int max_count=0;
    int max_element=arr[0];
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                
            }

        }
        if(count>=max_count){
            max_element=arr[i];
            max_count= count;
        }
    }
    cout<<max_element;
    return 0;
}
