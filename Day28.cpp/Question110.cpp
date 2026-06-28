//Program to create bank account system
#include<iostream>
#include<iomanip>
using namespace std;
struct Bank{
    int AccountNo;
    string name;
    string AccountType;   //saving or current
    float balance;
};

int main(){
    int choice;
    int total=0;
    Bank account[1000];
    cout<<"----Bank Account Management system----"<<endl;
    cout<<"1.Create Account"<<endl;
    cout<<"2.Display all accounts"<<endl;
    cout<<"3.Search account"<<endl;
    cout<<"4.Deposit money"<<endl;
    cout<<"5.Withdraw money"<<endl;
    cout<<"6.Update account"<<endl;
    cout<<"7.Delete account"<<endl;
    cout<<"8.Exit"<<endl;

    do{
        cout<<"Enter your choice:  ";
        cin>>choice;

        switch(choice){
            //Create account
            case 1:
            {
                cout<<"Enter account number";
                cin>>account[total].AccountNo;

                cout<<"Enter Customer name";
                cin>>account[total].name;

                cout<<"Enter account type";
                cin>>account[total].AccountType;

                cout<<"Enter initial balance";
                cin>>account[total].balance;

                cout<<"Account added successfully"<<endl;
                total++;
                break;


            }
            //Display all account
            case 2:
            {
                cout<<"---All accounts---"<<endl;
                //For definite spacing
                cout<<left
                    <<setw(15)<<"Account Number"
                    <<setw(20)<<"Name"
                    <<setw(15)<<"Type"
                    <<setw(15)<<"Balance"
                    <<endl;
                //Displaying accounts
                for(int i=0;i<total;i++){
                    cout<<left
                    <<setw(15)<<account[i].AccountNo
                    <<setw(20)<<account[i].name
                    <<setw(15)<<account[i].AccountType
                    <<setw(15)<<account[i].balance
                    <<endl;
                }
                break;
            }
            //Search account
            case 3:
            {
                cout<<"Enter the Account number"<<endl;
                int search;
                bool found = false;
                cin>>search;
                for(int i=0;i<total;i++){
                    if(account[i].AccountNo==search){
                        cout<<"Customer Name: "<<account[i].name<<endl;
                        cout<<"Account type: "<<account[i].AccountType<<endl;
                        cout<<"Balance: "<<account[i].balance<<endl;

                        found= true;
                        break;
                    }

                }
                if(!found){
                    cout<<"Account not found"<<endl;
                }
                break;
            }
            //Deposit money
            case 4:
            {
                cout<<"Enter account number"<<endl;
                int deposit_account;
                cin>>deposit_account;
                bool found = false;
                for(int i=0;i<total;i++){
                    if(account[i].AccountNo==deposit_account){
                        found=true;
                        cout<<"Enter the amount"<<endl;
                        int deposit_amount;
                        cin>>deposit_amount;
                        account[i].balance+=deposit_amount;
                        cout<<"Amount deposited successfully"<<endl;
                        break;
                    }
                }
                if(!found){
                    cout<<"Account not found"<<endl;
                }
                break;
            }

            //Withdraw for money
            case 5:
            {
                cout<<"Enter account number"<<endl;
                int withdraw_account;
                cin>>withdraw_account;
                bool found = false;
                for(int i=0;i<total;i++){
                    if(account[i].AccountNo==withdraw_account){
                        found=true;
                        cout<<"Enter the amount"<<endl;
                        int withdraw_amount;
                        cin>>withdraw_amount;
                        if(withdraw_amount<=account[i].balance){
                            account[i].balance-=withdraw_amount;
                            cout<<"Amount withdrawal successfull"<<endl;
                            break;}
                        else{
                            cout<<"Insufficient balance"<<endl;
                        }
                    }
                }
                if(!found){
                    cout<<"Account not found"<<endl;
                }
                break;
            }
            //Update account
            case 6:
            {
                cout<<"Enter the Account number"<<endl;
                int update;
                bool found = false;
                cin>>update;
                for(int i=0;i<total;i++){
                    if(account[i].AccountNo==update){
                        cout<<"Enter new Name"<<endl;
                        cin>>account[i].name;
                        cout<<"Enter type of account"<<endl;
                        cin>>account[i].AccountType;

                        found=true;
                        cout<<"Account details updated successfully"<<endl;
                        break;
                    }
                }
                if(!found){
                    cout<<"Account not found"<<endl;
                }
                break;

            }
            //Delete money
            case 7:
            {
                cout<<"Enter the Account number"<<endl;
                int delete_account;
                bool found = false;
                cin>>delete_account;
                for(int i=0;i<total-1;i++){
                    if(account[i].AccountNo==delete_account){
                        found=true;
                        for(int j=i;j<total;j++){
                            account[j]=account[j+1];
                        }
                        cout<<"Accout deleted successfully"<<endl;
                        total--;
                        break;
                    }
                }
                if(!found){
                    cout<<"Account not found"<<endl;
                }
                break;
            }
            //Exit
            case 8:
            {
                cout<<"Thank you for using our Bank"<<endl;
                cout<<"----Exit----"<<endl;
                break;
            }
            default:
            {
                cout<<"Invalid choice"<<endl;
            }
        
        }
    }while(choice!=8);
    return 0;


}