//Conversion of number from binary to decimal
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    int count = 0;
    int arr[50];
    for(int i=0; num>0;i++){
        int rem= num%10;
        arr[i]=rem;
        num=num/10;
        count++;
        
    }
    //conversion
    int number=0;
    for(int j=0;j<=count;j++){
        if(arr[j]==1){
            number=number+pow(2,j);}
        

    }
    cout<<number;
    return 0;
    

}