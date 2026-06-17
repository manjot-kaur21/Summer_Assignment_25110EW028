//Program to merge arrays
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the size of arrays";
    cin>>n1>>n2;
    int nums1[n1];
    int nums2[n2];
    cout<<"Give elements";
    //Input array for nums1
    for(int i=0;i<n1;i++){
        cin>>nums1[i];
    }
    //Input array for nums2
    for(int i=0;i<n2;i++){
        cin>>nums2[i];
    }
    //Merging array 
    int index=n1+n2;
    int result[index];
    int j=0;
    int k=0;
    for(int i=0;i<index;i++){
        if(i<n1){
            result[i]=nums1[j];
            j++;

        }
        else {
            result[i]=nums2[k];
            k++;
            
        }
    }
    //Output 
    for(int i=0;i<index;i++){
        cout<<result[i]<<" ";
    }
    return 0;

}