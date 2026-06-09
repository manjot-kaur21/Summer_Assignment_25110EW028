//Progrm to find largest and smallest number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    //Input
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Largest and smalllest number
    int largest=arr[0];
    int smallest=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>largest){
            largest=arr[j];
        }
        if(arr[j]<smallest){
            smallest=arr[j];
        }
    }
    cout<<"Largest element = "<<largest<<" and smallest element = "<<smallest;
    return 0;
}
