//Program to count words in a sentence
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    int count = 1;
    int i=0;
    while(s[i]!='\0'){
        if(s[i] ==' '){
            count++;
        }
        i++;

    }
    cout<<count;
    return 0;
}