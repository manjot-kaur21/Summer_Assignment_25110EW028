//To generate Fibonacci series  
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number";
    cin>> num;
    cout<<"0 1 ";
    int first_term =0;
    int second_term =1;
    for(int i=0;i<num-2;i++){
        int third_term= first_term + second_term;
        cout<< third_term<< " ";
        first_term = second_term;
        second_term = third_term;
    }
    return 0;

    
}