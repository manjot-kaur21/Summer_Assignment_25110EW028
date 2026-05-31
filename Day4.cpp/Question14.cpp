//Finding n th of Fibonacci term
#include<iostream>
using namespace std;
int main(){
    int num,third;
    cout<<"Enter the nth term";
    cin>>num;
    int first=0;
    int second=1;
    for (int i=0;i<num-2;i++){
         third= first + second ;
        first = second ;
        second= third ;
    }
    cout<<"The n th term is "<< third ;
    return 0;


}