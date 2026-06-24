//Program to check string rotation
#include<iostream>
using namespace std;
int main(){
    string s,s1,s2;
    cout<<"Enter the strings";
    cin>>s1>>s2;
    if(s1.size()!=s2.size()){
        cout<<"False";
        return 0;
    }
    s=s1+s1;
    if (s.find(s2)!=string::npos){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
    


}