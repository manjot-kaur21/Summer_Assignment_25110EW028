//Program to create contact management system
#include<iostream>
#include<iomanip>
using namespace std;
//Structure
struct Contacts{
    int contactID;
    string name;
    string phone;
    string email;
};

int main(){
    Contacts contact [1000];
    int choice;
    int total=0;
    cout<<"----Contact Management System----"<<endl;
    cout<<"1. Add contact "<<endl;
    cout<<"2. Display All Contact"<<endl;
    cout<<"3. Search Contact"<<endl;
    cout<<"4. Update Contact"<<endl;
    cout<<"5. Delete Contact"<<endl;
    cout<<"6. Exit"<<endl;
    
    do{
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch (choice)
        {
        //Add Contact
        case 1:
            
            cout<<"Enter Contact ID"<<endl;
            cin>>contact[total].contactID;

            cout<<"Enter  name"<<endl;
            cin.ignore();                    //Removes unwanted character
            getline(cin,contact[total].name);

            cout<<"Enter Phone Number"<<endl;
            cin>>contact[total].phone;

            cout<<"Enter email"<<endl;
            cin>>contact[total].email;


            total++;
            cout<<"Contact added successfully"<<endl;
            break;
        //Display all Contact
        case 2:
        {   
            if(total==0){
                cout<<"No Contact available"<<endl;
                break;
            }
            cout<<"--All Contacts--"<<endl;
            cout << left
            << setw(12) << "Contact ID"
            << setw(20) << "Name"
            << setw(20) << "Phone number"
            << setw(30) << "Email"
            <<endl;

            for(int i=0;i<total;i++){
                cout<<left
                <<setw(12)<<contact[i].contactID
                <<setw(20)<<contact[i].name
                <<setw(20)<<contact[i].phone
                <<setw(30)<<contact[i].email
                <<endl;
                

            }
            break;
        }
        //Search Contact
        case 3:
        {   if(total==0){
            cout<<"No Contacts available"<<endl;
            break;}
        
            int search;
            cout<<"Enter the Contact ID"<<endl;
            cin>>search;
            bool found=false;
            for(int i=0;i<total;i++){
                if(contact[i].contactID==search){
                    cout<<"Name: "<<contact[i].name<<endl;
                    cout<<"Phone Number: " <<contact[i].phone<<endl;
                    cout<<"Email: "<<contact[i].email<<endl;
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"Invalid Contact ID"<<endl;
            }
            break;
        }
        //Update Contact
        case 4:
        {       if(total==0){
                    cout<<"No Contacts available"<<endl;
                    break;}
                int update;
                cout<<"Enter the Contact ID"<<endl;
                cin>>update;
                cin.ignore();
                bool found=false;
                for(int i=0;i<total;i++){
                    if(contact[i].contactID==update){
                        found = true;

                        cout<<"Enter new  name"<<endl;
                        getline(cin,contact[i].name);

                        cout<<"Enter new number"<<endl;
                        cin>>contact[i].phone;

                        cout<<"Enter new email"<<endl;
                        cin>>contact[i].email;

                        

                        cout<<"Details updated successfully"<<endl;
                        break;

                    }
                }
                if(!found){
                    cout<<"Invalid Contact ID"<<endl;
                }
                break;

        }
        //Delete Contact
        case 5:
        {       if(total==0){
                    cout<<"No Contacts available"<<endl;
                    break;}
                int Delete_id;
                cout<<"Enter the Contact ID"<<endl;
                cin>>Delete_id;
                bool found=false;
                for(int i=0;i<total;i++){
                    if(contact[i].contactID==Delete_id){
                        found = true; 
                        for(int j=i;j<total-1;j++){
                            contact[j]=contact[j+1];
                        }
                        cout<<"Contact deleteled successfully"<<endl; 
                        total--;
                        break;
                    }
                } 
                if(!found){
                    cout<<"Contact not found"<<endl;
                }
                break;

        }
       
        case 6:
        {
            cout<<"Thank you for visiting us"<<endl;
            break;
        }
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
        while(choice!=6);
        return 0;
}


