//Program to create Menu Driven String Operation System
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int choice;
    string str1, str2;
    cout<<"\n----String Operation System----"<<endl;
    cout<<"1. Enter String"<<endl;
    cout<<"2. Display String"<<endl;
    cout<<"3. Find Length"<<endl;
    cout<<"4. Concatenate Strings"<<endl;
    cout<<"5. Compare Strings"<<endl;
    cout<<"6. Reverse String"<<endl;
    cout<<"7. Convert to Uppercase"<<endl;
    cout<<"8. Convert to Lowercase"<<endl;
    cout<<"9. Exit"<<endl;

    do
    {
        

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            // Enter String
            case 1:
            {
                cout<<"Enter a string: ";
                cin.ignore();
                getline(cin, str1);
                cout<<"String entered successfully."<<endl;
                break;
            }

            // Display String
            case 2:
            {
                if(str1.empty())
                    cout<<"No string available."<<endl;
                else
                    cout<<"String = "<<str1<<endl;
                break;
            }

            // Find Length
            case 3:
            {
                cout<<"Length of string = "<<str1.length()<<endl;
                break;
            }

            // Concatenate
            case 4:
            {
                cout<<"Enter another string: ";
                cin.ignore();
                getline(cin, str2);

                cout<<"Concatenated String = "<<str1 + str2<<endl;
                break;
            }

            // Compare
            case 5:
            {
                cout<<"Enter another string: ";
                cin.ignore();
                getline(cin, str2);

                if(str1==str2)
                    cout<<"Both strings are equal."<<endl;
                else
                    cout<<"Strings are not equal."<<endl;

                break;
            }

            // Reverse
            case 6:
            {
                string temp=str1;
                reverse(temp.begin(), temp.end());
                cout<<"Reversed String = "<<temp<<endl;
                break;
            }

            // Uppercase
            case 7:
            {
                string temp=str1;

                for(int i=0;i<temp.length();i++)
                    temp[i]=toupper(temp[i]);

                cout<<"Uppercase String = "<<temp<<endl;
                break;
            }

            // Lowercase
            case 8:
            {
                string temp=str1;

                for(int i=0;i<temp.length();i++)
                    temp[i]=tolower(temp[i]);

                cout<<"Lowercase String = "<<temp<<endl;
                break;
            }

            // Exit
            case 9:
            {
                cout<<"----Exit----"<<endl;
                break;
            }

            default:
            {
                cout<<"Invalid Choice!"<<endl;
            }
        }

    }while(choice!=9);

    return 0;
}