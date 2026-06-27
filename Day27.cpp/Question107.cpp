//Program to create salary management system
#include<iostream>
using namespace std;
//Structure
struct Employee{
    int id;
    string name;
    float basicSalary;
    float bonus;
    float deduction;
    float netSalary;
};
int main(){
    Employee emp[100];
    int total = 0;
    int choice ;
    do{
        cout<<"Add salary record"<<endl;
        cout<<"Display salary record"<<endl;
        cout<<"Search salary record"<<endl;
        cout<<"Update salary"<<endl;
        cout<<"Delete salary record"<<endl;
        cout<<"Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: //Add salary record
            {   cout<<"Enter Employee ID "<<endl;
                cin>>emp[total].id;

                cout<<"Enter Employee name"<<endl;
                cin>>emp[total].name;

                cout<<"Enter Basic salry "<<endl;
                cin>>emp[total].basicSalary;

                cout<<"Enter bonus"<<endl;
                cin>>emp[total].bonus;

                cout<<"Enter Deduction"<<endl;
                cin>>emp[total].deduction;

                emp[total].netSalary=
                emp[total].basicSalary+
                emp[total].bonus-
                emp[total].deduction
                ;

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
                        cout<<"Basic salary:"<<emp[i].basicSalary<<endl;
                        cout<<" Bonus:"<<emp[i].bonus<<endl;
                        cout<<"Deduction:"<<emp[i].deduction<<endl;
                        cout<<"Net salary:"<<emp[i].netSalary<<endl;



                        
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
                        cout<<"Basic salary: "<<emp[i].basicSalary<<endl;
                        cout<<"Bonus: "<<emp[i].bonus<<endl;
                        cout<<"Deduction: "<<emp[i].deduction<<endl;
                        cout<<"Net Salary: "<<emp[i].netSalary<<endl;

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

                        cout<<"Enter new basic salary"<<endl;
                        cin>>emp[i].basicSalary;

                        cout<<"Enter new bonus"<<endl;
                        cin>>emp[i].bonus;

                        cout<<"Enter new deduction"<<endl;
                        cin>>emp[i].deduction;

                        emp[i].netSalary=emp[i].basicSalary+
                        emp[i].bonus-
                        emp[i].deduction;
                      
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