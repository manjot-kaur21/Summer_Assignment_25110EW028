// To print prime numbers in a range
#include<iostream>
using namespace std;
int main(){
    int initial,final;
    cout<<"Enter the range";
    cin>>initial>>final;
    for(int i=initial; i<=final;i++){
        int prime=0;
        if(i==1){
            continue;
        }
        for(int j=2;j<=i;j++){
            int rem=i%j;
            if(rem==0){
                prime=prime +1;
            }

        }
        if(prime==1){
            cout<<i<<endl;
        }
        else{ continue ;}
    }
    return 0;
}