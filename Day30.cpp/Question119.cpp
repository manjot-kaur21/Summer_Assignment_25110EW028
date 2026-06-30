//Program to create Mini Employee Management System 

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int EmployeeID[100];
    string EmployeeName[100];
    string Department[100];
    float Salary[100];

    int total = 0;
    int choice;

    do
    {
        cout<<"----Mini Employee Management System----"<<endl;
        cout<<"1. Add Employee"<<endl;
        cout<<"2. Display All Employees"<<endl;
        cout<<"3. Search Employee"<<endl;
        cout<<"4. Update Employee"<<endl;
        cout<<"5. Delete Employee"<<endl;
        cout<<"6. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            // Add Employee
            case 1:
            {
                cout<<"Enter Employee ID: ";
                cin>>EmployeeID[total];

                cin.ignore();

                cout<<"Enter Employee Name: ";
                getline(cin,EmployeeName[total]);

                cout<<"Enter Department: ";
                getline(cin,Department[total]);

                cout<<"Enter Salary: ";
                cin>>Salary[total];

                total++;
                cout<<"Employee Added Successfully!"<<endl;
                break;
            }

            // Display Employees
            case 2:
            {
                if(total==0)
                {
                    cout<<"No Employee Record Found!"<<endl;
                }
                else
                {
                    cout<<left
                        <<setw(15)<<"Emp ID"
                        <<setw(25)<<"Name"
                        <<setw(20)<<"Department"
                        <<setw(15)<<"Salary"<<endl;

                    for(int i=0;i<total;i++)
                    {
                        cout<<left
                            <<setw(15)<<EmployeeID[i]
                            <<setw(25)<<EmployeeName[i]
                            <<setw(20)<<Department[i]
                            <<setw(15)<<Salary[i]
                            <<endl;
                    }
                }
                break;
            }

            // Search Employee
            case 3:
            {
                int search;
                bool found=false;

                cout<<"Enter Employee ID: ";
                cin>>search;

                for(int i=0;i<total;i++)
                {
                    if(EmployeeID[i]==search)
                    {
                        found=true;

                        cout<<"Employee Name : "<<EmployeeName[i]<<endl;
                        cout<<"Department    : "<<Department[i]<<endl;
                        cout<<"Salary        : "<<Salary[i]<<endl;

                        break;
                    }
                }

                if(!found)
                {
                    cout<<"Employee Not Found!"<<endl;
                }

                break;
            }

            // Update Employee
            case 4:
            {
                int update;
                bool found=false;

                cout<<"Enter Employee ID: ";
                cin>>update;

                for(int i=0;i<total;i++)
                {
                    if(EmployeeID[i]==update)
                    {
                        found=true;

                        cin.ignore();

                        cout<<"Enter New Employee Name: ";
                        getline(cin,EmployeeName[i]);

                        cout<<"Enter New Department: ";
                        getline(cin,Department[i]);

                        cout<<"Enter New Salary: ";
                        cin>>Salary[i];

                        cout<<"Employee Updated Successfully!"<<endl;
                        break;
                    }
                }

                if(!found)
                {
                    cout<<"Employee Not Found!"<<endl;
                }

                break;
            }

            // Delete Employee
            case 5:
            {
                int del;
                bool found=false;

                cout<<"Enter Employee ID: ";
                cin>>del;

                for(int i=0;i<total;i++)
                {
                    if(EmployeeID[i]==del)
                    {
                        found=true;

                        for(int j=i;j<total-1;j++)
                        {
                            EmployeeID[j]=EmployeeID[j+1];
                            EmployeeName[j]=EmployeeName[j+1];
                            Department[j]=Department[j+1];
                            Salary[j]=Salary[j+1];
                        }

                        total--;

                        cout<<"Employee Deleted Successfully!"<<endl;
                        break;
                    }
                }

                if(!found)
                {
                    cout<<"Employee Not Found!"<<endl;
                }

                break;
            }

            // Exit
            case 6:
            {
                cout<<"Thank You!"<<endl;
                break;
            }

            default:
            {
                cout<<"Invalid Choice!"<<endl;
            }
        }

    }while(choice!=6);

    return 0;
}