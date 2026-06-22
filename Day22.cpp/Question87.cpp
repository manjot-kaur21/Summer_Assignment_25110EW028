//Program to find character frequency
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    cin>>s;
    cout<<"Enter the character ";
    char character;
    cin>>character;
    int frequency =0;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]==character){
            frequency++;
        }
        i++;

    }
    cout<<"Frequency of "<<character<<" is "<<frequency;
    return 0;

}