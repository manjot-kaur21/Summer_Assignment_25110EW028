//Program to create menu-driven calculator
#include<iostream>
using namespace std;
int main(){
    int choice , num1, num2;
    cout<<"----Calculator----"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Modulus"<<endl;
    cout<<"6. Exit"<<endl;
    do{
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        if(choice==6){
            cout<<"----Exit----"<<endl;
            break;
        }
        if(1<=choice && choice<=5)
        {   cout<<"Enter both numbers"<<endl;
            cin>>num1>>num2;}
        switch (choice)
        {
        //Addition
        case 1:
        {
            cout<<"Result: "<<num1+num2<<endl;
            break;
        }

        //Subtraction
        case 2:
        {
            cout<<"Result: "<<num1-num2<<endl;
            break;
        }

        //Multiplication
        case 3:
        {   
            cout<<"Result: "<<num1*num2<<endl;
            break;
        }

        //Division
        case 4:
        {   if(num2!=0){
                cout<<"Result: "<<num1/num2<<endl;
                break;}
            else{
                cout<<"Division by zero is not possible"<<endl;
                break;
            }
        }

        //Modulus
        case 5:
        {
            if(num2!=0){
                cout<<"Result: "<<num1%num2<<endl;
                break;}
            else{
                cout<<"Modulus by zero is not possible"<<endl;
                break;
            }
        }

        
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
    while(choice!=6);
    return 0;
}