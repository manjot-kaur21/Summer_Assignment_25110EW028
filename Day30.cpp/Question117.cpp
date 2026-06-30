//Program to create Student record system using array and string
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int RollNumber[100];
    string name[100];
    string course[100];
    float marks[100];

    int total=0;
    int choice;

    cout<<"----Student Record System----"<<endl;
    cout<<"1.Add student"<<endl;
    cout<<"2.Display all students"<<endl;
    cout<<"3.Search student"<<endl;
    cout<<"4.Update student"<<endl;
    cout<<"5.Delete student"<<endl;
    cout<<"6.Exit"<<endl;

    do{
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        //Add student
        switch(choice){
            case 1:
            {
                cout<<"Enter Roll number "<<endl;
                cin>>RollNumber[total];

                cin.ignore();
                cout<<"Enter Name"<<endl;
                getline(cin,name[total]);

                cout<<"Enter course"<<endl;
                getline(cin,course[total]);

                cout<<"Enter marks"<<endl;
                cin>>marks[total];

                total++;
                cout<<"Student added"<<endl;
                break;
            }

            //Display students
            case 2:
            {
                if(total==0){
                    cout<<"No record found"<<endl;
                    break;
                }
                else{
                    cout<<left
                    <<setw(20)<<"RollNumber"
                    <<setw(20)<<"name"
                    <<setw(20) <<"course"
                    <<setw(10) <<"marks"
                    <<endl;
                    for(int i=0;i<total;i++){
                        cout<<left
                        <<setw(20)<<RollNumber[i]
                        <<setw(20)<<name[i]
                        <<setw(20)<<course[i]
                        <<setw(10)<<marks[i]
                        <<endl;
                    }
                }
                break;
            }
            //Search student
            case 3:
            {   int search;
                cout<<"Enter the roll number"<<endl;
                cin>>search;
                bool found=false;
                for ( int i = 0; i <total; i++)
                {
                    if(RollNumber[i]==search){
                        found = true;
                        cout<<"Name: "<<name[i]<<endl;
                        cout<<"Course: "<<course[i]<<endl;
                        cout<<"Marks: "<<marks[i]<<endl;
                        break;

                    }

                }
                if(!found){
                    cout<<"Invalid Roll Number!"<<endl;
                }
                break;
                
            }
            //Update student
            case 4:
            {
              int update;
                cout<<"Enter the roll number"<<endl;
                cin>>update;
                bool found=false;
                for ( int i = 0; i <total; i++)
                {
                    if(RollNumber[i]==update){
                        found = true;
                        cout<<"Enter new name"<<endl;
                        getline(cin,name[i]);

                        cout<<"Enter new course"<<endl;
                        getline(cin,course[i]);

                        cout<<"Enter new marks"<<endl;
                        cin>>marks[i];

                        cout<<"Student updated successfully"<<endl;
                        break;

                    }

                }
                if(!found){
                    cout<<"Invalid Roll Number!"<<endl;
                }
                break;
                  
            }
            //Delete student
            case 5:
            {   int delete_student;
                cout<<"Enter the roll number"<<endl;
                cin>>delete_student;
                bool found=false;
                for ( int i = 0; i <total-1; i++)
                {
                    if(RollNumber[i]==delete_student){
                        found = true;
                        
                        for(int j=i;j<total;j++){
                            RollNumber[j]=RollNumber[j+1];
                            name[j]=name[j+1];
                            course[j]=course[j+1];
                            marks[j]=marks[j+1];
                        }
                        cout<<"Student deleted successfully"<<endl;
                        total--;
                        break;

                    }

                }
                if(!found){
                    cout<<"Invalid Roll Number!"<<endl;
                }
                break;
            }
                
            //Exit
            case 6:
            {
                cout<<"Thank you for visiting"<<endl;
                break;
            }

            default:
            {
                cout<<"Invalid choice"<<endl;
            }
        }
    }while(choice!=6);
    return 0;
}
