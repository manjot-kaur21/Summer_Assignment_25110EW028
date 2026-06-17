//Program to find union of arrays
#include<iostream>
using namespace std;
int main(){
     int n1,n2;
    cout<<"Enter the size of arrays";
    cin>>n1>>n2;
    int nums1[n1];
    int nums2[n2];
    cout<<"Give elements of 1 array";
    //Input array for nums1
    for(int i=0;i<n1;i++){
        cin>>nums1[i];
    }
    //Input array for nums2
    cout<<"Give elements of 2 array";
    for(int i=0;i<n2;i++){
        cin>>nums2[i];
    }
    //Union
    int j=0 ,k=0;
    int index=n1+n2;
    int result[32];
    int size=0;
    for(int i=0;i<index;i++){
        if(i<n1){
            result[size]=nums1[j];
            j++;
            size++;
        }
        else {
            int count=0;
            for(int l=0;l<=i;l++){
                if(nums2[k]==result[l]){
                    count++;
                }
            }
            if(count!=0) {
                k++;
                continue;
            }
            else{
                result[size]=nums2[k];
                k++;
                size++;
            }
        }
    }


    //output
    for(int i=0;i<size;i++){
        cout<<result[i]<<" ";    }
    return 0;
}