//Program to find largest prime factor
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    int max=1;
    //factor
    for(int i=1;i<=num;i++){
        int count=1;
        if(num%i==0){
            //prime number
            for(int j=2;j<i;j++){
                ;
                if(i%j==0){
                    count++;
                    break;
                    
                }

                
            }
            if(count==1){
                if(i>max){
                    max=i;
                }
            }
            
            
        }
        
    }
    cout<<"Largest prime factor is "<<max;
    return 0;
    
}