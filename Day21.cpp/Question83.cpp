//Program to find vowels and consonants
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    cin>>s;
    int length = s.length();
    int vowels=0;
    int consonants=0;
    for(int i=0;i<length;i++){
        if (s[i]>'a'&& s[i]<'z'||
        s[i]>'A'|| s[i]<'Z'){

            if(s[i]=='a'||s[i]=='A'||
               s[i]=='e'||s[i]=='E'||
               s[i]=='i'||s[i]=='I'||
               s[i]=='o'||s[i]=='O'||
               s[i]=='u'||s[i]=='U')
            {
                vowels++;
            }
            else{
                consonants++;
            }

        }

    }
    

    cout<<vowels<<"are vowels and "<<consonants<<" are consonants";
    return 0;

}