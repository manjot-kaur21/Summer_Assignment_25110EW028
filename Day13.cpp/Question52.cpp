//Program to count even and odd elements
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    //Input and counting of even and odd
    cout<<"Enter the elements";
    int even_count=0;
    int odd_count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even_count++;
        }
        else odd_count++;
    }
    cout<<"Total count of even element is "<<even_count<<" and odd element is "<<odd_count;
    return 0;
}