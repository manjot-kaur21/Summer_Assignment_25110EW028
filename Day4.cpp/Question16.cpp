//To find Armstrong number in a range
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int initial,final;
    cout<<"Enter the range";
    cin>>initial>> final;
    for(int i=initial; i<=final;i++){
        int find=0;
        int num= i;
        int  number=num;
        int count=0;
        //Count digits
        while (num>0){
            count=count+1;
            num = num/10;
           
        }
        //to find armstrong number
        while (number>0){
            int rem=number%10;
            find=find+ (int)pow(rem,count);
            number=number/10;
        }
            
        if (i==find){
            cout<<i<<endl;
        }
        

    }
    return 0;
}
