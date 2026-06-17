//Program to find intersection of arrays
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
    //Intersection
    for(int i = 0; i < n1; i++) {

        // Check if nums1[i] appeared earlier in nums1
        bool duplicate = false;

        for(int k = 0; k < i; k++) {
            if(nums1[k] == nums1[i]) {
                duplicate = true;
                break;
            }
        }

        if(duplicate) {
            continue;
        }

        // Check if present in nums2
        for(int j = 0; j < n2; j++) {
            if(nums1[i] == nums2[j]) {
                cout << nums1[i] << " ";
                break;   
            }
        }
    }
    return 0;
}