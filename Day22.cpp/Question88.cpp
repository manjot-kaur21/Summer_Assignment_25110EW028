//Program to remove spaces from the given string
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the given string";
    getline(cin,s);
    int i=0;
    int j=0;    
    string result="";
    while(s[i]!='\0'){
        if(s[i]!=' '){
            result+=s[i];
            
        }
        i++;
    }
    //Output
    cout<<result;
    return 0;
}