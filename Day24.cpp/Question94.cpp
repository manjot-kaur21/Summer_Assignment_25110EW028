//Program to compress a string
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    cin>>s;
    int n=s.size();
    string result ="";
    for(int i=0;i<n;i++){
        int count =1;
        while(s[i]==s[i+1] && i+1<n){
            count++;
            i++;

        }
        result+=s[i];
        result+=to_string(count);


    }
    cout<<result;
    return 0;

}