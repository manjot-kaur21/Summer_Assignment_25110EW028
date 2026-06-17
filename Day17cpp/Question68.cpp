//Program to find common elements
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the size of arrays";
    cin>>n1>>n2;
    int nums1[n1];
    int nums2[n2];
    cout<<"Give elements of array 1";
    //Input array for nums1
    for(int i=0;i<n1;i++){
        cin>>nums1[i];
    }
    //Input array for nums2
    cout<<"Give elements of array 2";
    for(int i=0;i<n2;i++){
        cin>>nums2[i];
    }
    //Common element
    for(int i=0;i<n1;i++){
        //Comparing element with the element of other array
        for(int j=0;j<n2;j++){
            if(nums1[i]==nums2[j]){
                cout<<nums1[i]<<" ";
                break;
            }

        } }
        return 0;
    }