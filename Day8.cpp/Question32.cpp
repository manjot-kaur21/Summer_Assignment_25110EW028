/*Program to Print repeated-number 
pattern. 
1 
22 
333 
4444 
55555
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number of lines";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<'\n';
    }
    return 0;

}