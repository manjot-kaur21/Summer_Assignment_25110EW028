#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"Enter the number";
    cin>>n;
    for(int i=1;i<=10;i++){
        num=n*i;
        cout<<n<<" * "<<i<<"= "<<num<<endl;
        
    }
    return 0 ;


}