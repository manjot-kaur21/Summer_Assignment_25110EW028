//Program to create student record  management system
#include<iostream>
using namespace std;
void remove(int &i, int index, string arr[][3]) {

    for(int j = index; j < i - 1; j++) {
        arr[j][0] = arr[j+1][0];
        arr[j][1] = arr[j+1][1];
        arr[j][2] = arr[j+1][2];
    }

    i--; // reduce size
}


int main(){
    string name[100];
    int roll[100];
    int marks[100];
    //Declaration of array
    string arr[100][3];        //Roll number,name,marks,
    int i=0;
   
    cout<<" Student Record  System"<<endl;
    cout<<"Select your choice"<<endl;
    cout<<"1.Add student"<<endl;
    cout<<"2.View all student"<<endl;
    cout<<"3.Search student"<<endl;
    cout<<"4.Update student"<<endl;
    cout<<"5.Delete student"<<endl;
    cout<<"6.Exit"<<endl;
    while(true){
        //taking input
        cout<<"Enter your choice"<<endl;
        int choice,update;
        string search,ans;
        cin>>choice;
        switch(choice){
            case 1:   //Add student 
                {cout<<"Enter roll number"<<endl;
                cin>>arr[i][0];
                cout<<"Enter name"<<endl;
                cin>>arr[i][1];
                cout<<"Enter marks"<<endl;
                cin>>arr[i][2];
                i++;
                cout<<"Student added"<<endl;
                break;
                }

            case 2:  //View all students
               {

                cout<<"Roll Number"<<"  "<<"Name"<<"  "<<"Marks"<<"  "<<endl;
                for(int j=0;j<i;j++){
                    cout<<arr[j][0]<<"  "<<arr[j][1]<<"  "<<arr[j][2]<<"  "<<endl;
                }
                break;
            }
            case 3:  //search student
            {
                cout<<"Enter roll number to search"<<endl;
                cin>>search;
                bool found =false;
                for(int j=0;j<i;j++){
                    if(search == arr[j][0]){
                        cout<<"Name: "<<arr[j][1]<<endl;
                        cout<<"Marks: "<<arr[j][2]<<endl;
                        found=true;
                        break;
                    }
                }
                if(!found){
                        cout<<"This roll number doesn't exist"<<endl;
                    }
                break;
            }
                case 4:  //update student
                {
                    cout<<"Enter the roll number of student"<<endl;
                    cin>>search;
                    bool found = false;
                    for(int j=0;j<i;j++){
                        if(arr[j][0]==search){
                            cout<<"What do you want to update?"<<endl
                            <<"1.Roll number"<<endl
                            <<"2.Name"<<endl
                            <<"3.Marks"<<endl;
                            cin>>update;
                            if(update==1){
                                found=true;
                                cout<<"Enter new roll number";
                                cin>>ans;
                                arr[j][0]=ans;
                                cout<<"Updated details are:"<<endl
                                <<"Roll number:  "<<arr[j][0]<<endl
                                <<"Name: "<<arr[j][1]<<endl
                                <<"Marks: "<<arr[j][2]<<endl;


                            }
                            else if(update==2){
                                cout<<"Enter new name";
                                cin>>ans ;
                                found=true;
                                arr[j][1]=ans;
                                cout<<"Updated details are:"<<endl
                                <<"Roll number:  "<<arr[j][0]<<endl
                                <<"Name: "<<arr[j][1]<<endl
                                <<"Marks: "<<arr[j][2]<<endl;


                            }
                            else if(update==3){
                                cout<<"Enter new marks";
                                cin>>ans;
                                found=true;
                                arr[j][2]=ans;
                                cout<<"Updated details are:"<<endl
                                <<"Roll number:  "<<arr[j][0]<<endl
                                <<"Name: "<<arr[j][1]<<endl
                                <<"Marks: "<<arr[j][2]<<endl;

                            }

                        }
                    }
                    if(!found){
                        cout<<"Student not found"<<endl;
                    }
                    break;
                }
                case 5:  //delete student
                    
                    {
                        cout<<"Enter the roll number"<<endl;
                        string ans;
                        cin>>ans;
                        bool found = false;
                        for(int j=0;j<i;j++){
                            if(arr[j][0]==ans){
                                found=true;
                                remove(i, j, arr);
                                cout<<"Deleted roll number "<<ans<<" successfully"<<endl;
                                break;
                            }
                        }
                        if(!found){
                            cout<<"Roll number not found"<<endl;
                        }
                        break;
                    }
                    
                    

                    
                case 6:  //exit
                    cout<<"----Exited successfully----"<<endl;
                    return 0;
                    
                default:
                    cout<<"Invalid choice entered";
                    break;
                    
                
                

                
        

            

    }
}
}