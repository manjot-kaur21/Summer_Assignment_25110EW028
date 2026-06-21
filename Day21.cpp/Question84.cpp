//Program to convert lowecase to uppercase
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    cin>>s;
    int length =s.length();
    for(int i=0;i<length;i++){
        //Checks if the ith element is alphabet or not 
        if(s[i]>='a'&& s[i]<='z'||
        s[i]>='A'&& s[i]<='Z'){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=int (s[i])-32;
            }


        }
    }
    cout<<s;
    return 0;
}