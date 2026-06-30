//Program to create mini library system
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int BookID[100];
    string BookName[100];
    string Author[100];
    int Quantity[100];

    int total = 0;
    int choice;

    do
    {
        cout<<"----Mini Library Management System----"<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. Display All Books"<<endl;
        cout<<"3. Search Book"<<endl;
        cout<<"4. Update Book"<<endl;
        cout<<"5. Delete Book"<<endl;
        cout<<"6. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            // Add Book
            case 1:
            {
                cout<<"Enter Book ID: ";
                cin>>BookID[total];

                cin.ignore();

                cout<<"Enter Book Name: ";
                getline(cin,BookName[total]);

                cout<<"Enter Author Name: ";
                getline(cin,Author[total]);

                cout<<"Enter Quantity: ";
                cin>>Quantity[total];

                total++;
                cout<<"Book Added Successfully!"<<endl;
                break;
            }

            // Display Books
            case 2:
            {
                if(total==0)
                {
                    cout<<"No Book Record Found!"<<endl;
                }
                else
                {
                    cout<<left
                        <<setw(10)<<"ID"
                        <<setw(30)<<"Book Name"
                        <<setw(25)<<"Author"
                        <<setw(10)<<"Quantity"<<endl;

                    for(int i=0;i<total;i++)
                    {
                        cout<<left
                            <<setw(10)<<BookID[i]
                            <<setw(30)<<BookName[i]
                            <<setw(25)<<Author[i]
                            <<setw(10)<<Quantity[i]
                            <<endl;
                    }
                }
                break;
            }

            // Search Book
            case 3:
            {
                int search;
                bool found=false;

                cout<<"Enter Book ID: ";
                cin>>search;

                for(int i=0;i<total;i++)
                {
                    if(BookID[i]==search)
                    {
                        found=true;

                        cout<<"Book Name : "<<BookName[i]<<endl;
                        cout<<"Author    : "<<Author[i]<<endl;
                        cout<<"Quantity  : "<<Quantity[i]<<endl;

                        break;
                    }
                }

                if(!found)
                {
                    cout<<"Book Not Found!"<<endl;
                }

                break;
            }

            // Update Book
            case 4:
            {
                int update;
                bool found=false;

                cout<<"Enter Book ID: ";
                cin>>update;

                for(int i=0;i<total;i++)
                {
                    if(BookID[i]==update)
                    {
                        found=true;

                        cin.ignore();

                        cout<<"Enter New Book Name: ";
                        getline(cin,BookName[i]);

                        cout<<"Enter New Author: ";
                        getline(cin,Author[i]);

                        cout<<"Enter New Quantity: ";
                        cin>>Quantity[i];

                        cout<<"Book Updated Successfully!"<<endl;
                        break;
                    }
                }

                if(!found)
                {
                    cout<<"Book Not Found!"<<endl;
                }

                break;
            }

            // Delete Book
            case 5:
            {
                int del;
                bool found=false;

                cout<<"Enter Book ID: ";
                cin>>del;

                for(int i=0;i<total;i++)
                {
                    if(BookID[i]==del)
                    {
                        found=true;

                        for(int j=i;j<total-1;j++)
                        {
                            BookID[j]=BookID[j+1];
                            BookName[j]=BookName[j+1];
                            Author[j]=Author[j+1];
                            Quantity[j]=Quantity[j+1];
                        }

                        total--;
                        cout<<"Book Deleted Successfully!"<<endl;
                        break;
                    }
                }

                if(!found)
                {
                    cout<<"Book Not Found!"<<endl;
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