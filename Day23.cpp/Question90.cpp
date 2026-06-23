//Program to find first repeating character
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string";
    getline(cin,s);
    int n=s.size();
    int count;
    bool found=false;
    //Transversing elements
    for(int i=0;i<n;i++){
        count = 0;
        //Checking frequency
        for(int j=0;j<n;j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count>1){
            cout<<s[i];
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"There is no repeating character";
    }
    return 0;

    

}