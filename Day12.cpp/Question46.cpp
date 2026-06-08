//Program to write function for Armstrong number
#include<iostream>
#include<math.h>
using namespace std;
void Armstrong(int num){
    int number=num;
    int multiply= 0;
    int count=0;
    //Counting number of digits
    while(num>0){
        count++;
        num=num/10;
       
    }
    num=number;
    while(num>0){
        int rem=num%10;
        multiply=multiply+round(pow(rem,count));
        num=num/10;
    }
    if (number==multiply) cout<<"Armstrong";
    else cout<<"Not Armstrong";

}
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    Armstrong(num);
    return 0;
}