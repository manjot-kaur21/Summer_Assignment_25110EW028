//Program to create employee management system
#include<iostream>
using namespace std;
//Structure
struct Employee{
    int id;
    string name;
    string department;
    float salary;
};
int main(){
    Employee emp[100];
    int total = 0;
    int choice ;
    do{
        cout<<"---Employee Management System---"<<endl;
        cout<<"1.Add Employee"<<endl;
        cout<<"2.Display Employee"<<endl;
        cout<<"3.Search Employee"<<endl;
        cout<<"4.Update Employee"<<endl;
        cout<<"5.Delete Employee"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: //Add Employee
            {
                cout<<"Enter Employee ID "<<endl;
                cin>>emp[total].id;

                cout<<"Enter Employee name"<<endl;
                cin>>emp[total].name;

                cout<<"Enter Department"<<endl;
                cin>>emp[total].department;

                cout<<"Enter salary"<<endl;
                cin>>emp[total].salary;

                total++;

                cout<<"Employee added successfully"<<endl;
                break;
            }

            case 2:  //Display Employee
            {
                if(total==0){
                    cout<<"No Record found"<<endl;
                }
                else{
                    cout<<"Records"<<endl;

                    for(int i=0;i<total;i++){
                        cout<<"Employee"<<i+1<<endl;
                        cout<<"ID:"<<emp[i].id<<endl;
                        cout<<"Name:"<<emp[i].name<<endl;
                        cout<<"Department:"<<emp[i].department<<endl;
                        cout<<"Salary:"<<emp[i].salary<<endl;
                    }
                }
                break;
            }

            case 3:   //Search Employee
            {
                int searchID;
                bool found=false;

                cout<<"Enter the id of employee"<<endl;
                cin>>searchID;

                for(int i=0;i<total;i++){
                    if(emp[i].id==searchID){
                        cout<<"Employee Found"<<endl;
                        cout<<"ID: "<<emp[i].id<<endl;
                        cout<<"Name: "<<emp[i].name<<endl;
                        cout<<"Department: "<<emp[i].department<<endl;
                        cout<<"Salary: "<<emp[i].salary<<endl;

                        found=true;
                        break;
                    }

                }
                if(!found){
                    cout<<"Invalid Employee ID"<<endl;
                }
                break;
            }

            case 4:   //Update Employee
            {
                cout<<"Enter Employee ID"<<endl;
                int updateID;
                bool found = false;
                cin>>updateID;
                for(int i=0;i<total;i++){
                    if(emp[i].id == updateID){
                        found=true;
                        cout<<"Enter new name"<<endl;
                        cin>>emp[i].name;

                        cout<<"Enter new department"<<endl;
                        cin>>emp[i].department;

                        cout<<"Enter new salary"<<endl;
                        cin>>emp[i].salary;

                        cout<<"Employee details updates successfully"<<endl;

                        break;

                    }
                }
                if(!found){
                    cout<<"Invalid ID"<<endl;
                }
                break;

            }
            case 5:   //Delete Employee
            {
                int deleteID;
                bool found = false;
                cout<<"Enter Employee Id"<<endl;
                cin>>deleteID;
                for(int i=0;i<total;i++){
                    if(emp[i].id==deleteID){
                        for(int j=i;j<total-1;j++){
                            emp[j]=emp[j+1];
                        }
                        total--;
                        cout<<"Employee deleted successfully"<<endl;
                        found=true;
                        break;
                    }
                    
                }
                if(!found){
                    cout<<"Invalid employee ID"<<endl;
                }
                break;
            }
            case 6:  //Exit
            {
                cout<<"----Exited successfully----";
                return 0;

            }
            default:
            {
                cout<<"Inavlid choice";
            }


        }
    } while(choice!=6);
    return 0;


}