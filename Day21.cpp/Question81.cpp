//Program to find string length without strlen()
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<" Enter the string";
    cin>>s;
    int length=0;
    while(s[length]!='\0'){
        length++;
    }
    cout<<"Length of string is "<<length;
    return 0;
}