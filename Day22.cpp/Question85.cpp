//Program to check palindrome string
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    cin>>s;
    int n=s.length();
    bool palindrome= true;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            cout<<"Not a palindrome";
            palindrome =false;
            break;
        }
    }
    if(palindrome == true){
        cout<<"Palindrome";
    }
    return 0;


}