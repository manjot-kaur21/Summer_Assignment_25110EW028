//Program to create ATM stimulation
#include<iostream>
using namespace std;
int main(){
    long long balance =10000;
    cout<<"ATM Menu"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Deposit Money"<<endl;
    cout<<"3.Withdraw Money"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter your choice";
    int choice,deposit,withdraw;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<balance;
            break;
        case 2 :
            cout<<"Enter the amount to deposit";
            cin>>deposit;
            cout<<"Deposit successful!"<<endl;
            balance+=deposit;
            cout<<"New Balance: "<<balance<<endl;

            break;
        case 3 :
            cout<<"Enter the amount to withdraw"<<endl;
            cin>>withdraw;
            if(withdraw<=balance){
                        cout<<"Withdrawal successful"<<endl;
                        balance-=withdraw;
                        cout<<"New Balance :"<<balance<<endl;
                        }
            else{
                cout<<"Insufficient balance";
            }
            break;
        case 4:
            cout<<"Thank you for using our ATM"<<endl;
            cout<<"Have a nice day!";
            return 0 ;
        default:
            cout<<"Invalid choice";
        
        

    }



}