//Program to find sum and average of an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    //Input and sum
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];}
    float average=(float)sum/n;
    cout<<"The sum of elements of array is "<<sum<<" and average is "<<average;
    return 0;

}