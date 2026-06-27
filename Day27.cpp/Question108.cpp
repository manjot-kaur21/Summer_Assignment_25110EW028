//Program to Create Marksheet Generation System
#include<iostream>
using namespace std;

//Structure
struct Student
{
    int rollNo;
    string name;
    float cpp, maths, softskills;
    float total, percentage;
    char grade;
};

int main()
{
    Student stu[100];
    int totalStudents = 0;
    int choice;

    do
    {
        cout<<"----- Marksheet Generation System -----"<<endl;
        cout<<"1. Add Student"<<endl;
        cout<<"2. Display Marksheet"<<endl;
        cout<<"3. Search Student"<<endl;
        cout<<"4. Update Marks"<<endl;
        cout<<"5. Delete Student"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"Enter Roll Number: ";
                cin>>stu[totalStudents].rollNo;

                cout<<"Enter Name: ";
                cin>>stu[totalStudents].name;

                cout<<"Enter C++ Marks: ";
                cin>>stu[totalStudents].cpp;

                cout<<"Enter Maths Marks: ";
                cin>>stu[totalStudents].maths;

                cout<<"Enter SoftSkills Marks: ";
                cin>>stu[totalStudents].softskills;

                stu[totalStudents].total =
                stu[totalStudents].cpp +
                stu[totalStudents].maths +
                stu[totalStudents].softskills;

                stu[totalStudents].percentage =
                stu[totalStudents].total / 3;

                if(stu[totalStudents].percentage >= 90)
                    stu[totalStudents].grade='A';
                else if(stu[totalStudents].percentage >= 75)
                    stu[totalStudents].grade='B';
                else if(stu[totalStudents].percentage >= 60)
                    stu[totalStudents].grade='C';
                else if(stu[totalStudents].percentage >= 40)
                    stu[totalStudents].grade='D';
                else
                    stu[totalStudents].grade='F';

                totalStudents++;

                cout<<"Student Added Successfully!"<<endl;
                break;
            }

            case 2:
            {
                if(totalStudents==0)
                {
                    cout<<"No Records Found"<<endl;
                }
                else
                {
                    for(int i=0;i<totalStudents;i++)
                    {
                        cout<<"\nStudent "<<i+1<<endl;
                        cout<<"Roll No: "<<stu[i].rollNo<<endl;
                        cout<<"Name: "<<stu[i].name<<endl;
                        cout<<"C++: "<<stu[i].cpp<<endl;
                        cout<<"Maths: "<<stu[i].maths<<endl;
                        cout<<"SoftSkills: "<<stu[i].softskills<<endl;
                        cout<<"Total: "<<stu[i].total<<endl;
                        cout<<"Percentage: "<<stu[i].percentage<<endl;
                        cout<<"Grade: "<<stu[i].grade<<endl;
                    }
                }
                break;
            }

            case 3:
            {
                int searchRoll;
                bool found=false;

                cout<<"Enter Roll Number: ";
                cin>>searchRoll;

                for(int i=0;i<totalStudents;i++)
                {
                    if(stu[i].rollNo==searchRoll)
                    {
                        cout<<"Student Found"<<endl;
                        cout<<"Name: "<<stu[i].name<<endl;
                        cout<<"Total: "<<stu[i].total<<endl;
                        cout<<"Percentage: "<<stu[i].percentage<<endl;
                        cout<<"Grade: "<<stu[i].grade<<endl;

                        found=true;
                        break;
                    }
                }

                if(!found)
                    cout<<"Invalid Roll Number"<<endl;

                break;
            }

            case 4:
            {
                int updateRoll;
                bool found=false;

                cout<<"Enter Roll Number: ";
                cin>>updateRoll;

                for(int i=0;i<totalStudents;i++)
                {
                    if(stu[i].rollNo==updateRoll)
                    {
                        cout<<"Enter New C++ Marks: ";
                        cin>>stu[i].cpp;

                        cout<<"Enter New Maths Marks: ";
                        cin>>stu[i].maths;

                        cout<<"Enter New softskills Marks: ";
                        cin>>stu[i].softskills;

                        stu[i].total =
                        stu[i].cpp +
                        stu[i].maths +
                        stu[i].softskills;

                        stu[i].percentage =
                        stu[i].total / 3;

                        if(stu[i].percentage >= 90)
                            stu[i].grade='A';
                        else if(stu[i].percentage >= 75)
                            stu[i].grade='B';
                        else if(stu[i].percentage >= 60)
                            stu[i].grade='C';
                        else if(stu[i].percentage >= 40)
                            stu[i].grade='D';
                        else
                            stu[i].grade='F';

                        cout<<"Record Updated Successfully"<<endl;

                        found=true;
                        break;
                    }
                }

                if(!found)
                    cout<<"Invalid Roll Number"<<endl;

                break;
            }

            case 5:
            {
                int deleteRoll;
                bool found=false;

                cout<<"Enter Roll Number: ";
                cin>>deleteRoll;

                for(int i=0;i<totalStudents;i++)
                {
                    if(stu[i].rollNo==deleteRoll)
                    {
                        for(int j=i;j<totalStudents-1;j++)
                        {
                            stu[j]=stu[j+1];
                        }

                        totalStudents--;

                        cout<<"Record Deleted Successfully"<<endl;

                        found=true;
                        break;
                    }
                }

                if(!found)
                    cout<<"Invalid Roll Number"<<endl;

                break;
            }

            case 6:
            {
                cout<<"Program Exited Successfully"<<endl;
                return 0;
            }

            default:
            {
                cout<<"Invalid Choice"<<endl;
            }
        }

    }while(choice!=6);

    return 0;
}