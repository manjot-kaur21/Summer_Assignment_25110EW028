#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter the size of arrays";
    cin>>n1>>n2;

    int arr1[n1],arr2[n2];
    int result[n1+n2];
    //Input for array 1
    cout<<"Enter the elements of array 1";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    //Input for array 2
    cout<<"Enter the elements of array 2";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    int j=0,k=0,i=0;

    // MERGE
    while(j<n1 && k<n2){
        if(arr1[j] <= arr2[k]){
            result[i] = arr1[j];
            j++;
        }
        else{
            result[i] = arr2[k];
            k++;
        }
        i++;
    }

    // remaining elements
    while(j<n1){
        result[i++] = arr1[j++];
    }

    while(k<n2){
        result[i++] = arr2[k++];
    }

    // output
    for(int i=0;i<n1+n2;i++){
        cout<<result[i]<<" ";
    }

    return 0;
}