//Program to find maximum occurring character
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    cin>>s;
    int n=s.size();
    if(n==0){
        cout<<"String is empty";
        return 0;
    }
    sort(s.begin(),s.end());
    int max_count=0;
    char max_char=s[0];
    for(int i=0;i<n;i++){
       
        int count=1;
        while(i+1<n && s[i]==s[i+1]){
            count++;
            i++;
        }
        if(count>max_count){
            max_count=count;
            max_char=s[i];
        }
        
    }
    //output
    cout<<"Maximum occuring character is"<<max_char;
    return 0;

}