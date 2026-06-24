//Propgram to find longest word
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    int i=0;
    string current_word;
    string longest_word = "";
    while(s[i]!='\0'){
        current_word="";
        while(s[i]!=' ' && s[i]!='\0'){
            current_word+=s[i];
            i++;
        }
        if(current_word.size()>longest_word.size()){
            longest_word = current_word;
        }
        if(s[i]==' '){
            i++;
        }


    }
    cout<<longest_word;
    return 0;
}