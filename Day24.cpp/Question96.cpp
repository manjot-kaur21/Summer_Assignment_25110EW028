//Program to remove duplicate elements
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    cin>>s;
    int n=s.size();
    string result = "";
    for(int i=0;i<n;i++){
        bool found=false;
        for(int j=0;j<result.size();j++){
            if(s[i]==result[j]){
                found=true;
                break;
            }
           
        }
         if(!found){
                result+=s[i];
                
            }
    }
    cout<<result;
    return 0;
}