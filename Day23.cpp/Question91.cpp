//Program to check anagram strings(contain same character in same frequency but different order)

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter first and second string";
    cin>>s1>>s2;
    //Checking length
    int m=s1.size();
    int n=s2.size();
    if(m!=n){
        cout<<"Not an anagram string";
        return 0;
    }
    //Sorting both strings
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    //Comparing sorted strings
    if(s1==s2){
        cout<<"Anagram";
    }
    else{
        cout<<"Not anagram";
    }
    return 0;

}