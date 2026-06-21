//Program to reverse a string
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    cin>>s;
    //Reversing
    int length = s.length();
    for(int i=0;i<length/2;i++){
        swap(s[i],s[length-i-1]);
    }
    //Output
    cout<<s;
    return 0;
}