//Program to create library management system
#include<iostream>
using namespace std;
//structure
struct Book
{
    int bookID;
    string title;
    string author;
    int quantity;
};

int main(){
    Book book[1000];
    int choice;
    int total=0;
    cout<<"----Library Management System----"<<endl;
    cout<<"1.Add Book"<<endl;
    cout<<"2.Display All Book"<<endl;
    cout<<"3.Search Book"<<endl;
    cout<<"4.Update Book"<<endl;
    cout<<"5.Delete Book"<<endl;
    cout<<"6.Issue Book"<<endl;
    cout<<"7.Return Book"<<endl;
    cout<<"8.Exit"<<endl;
    do{
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch (choice)
        {
        //Add book
        case 1:
            
            cout<<"Enter book ID"<<endl;
            cin>>book[total].bookID;

            cout<<"Enter book's title"<<endl;
            cin>>book[total].title;

            cout<<"Enter book's author"<<endl;
            cin>>book[total].author;

            cout<<"Enter quantity"<<endl;
            cin>>book[total].quantity;

            total++;
            cout<<"Book added successfully"<<endl;
            break;

        //Display all book
        case 2:
        {   cout<<"--All Books--"<<endl;
            cout<<"Book ID: "<<" ";
            cout<<"Title: "<<" ";
            cout<<"Author: "<<" ";
            cout<<"Quantity: "<<endl;
            for(int i=0;i<total;i++){
                cout<<book[i].bookID<<"         ";
                cout<<book[i].title<<"          ";
                cout<<book[i].author<<"         ";
                cout<<book[i].quantity<<endl;
                

            }
            break;
        }
        //Search book
        case 3:
        {   int search;
            cout<<"Enter the book ID"<<endl;
            cin>>search;
            bool found=false;
            for(int i=0;i<total;i++){
                if(book[i].bookID==search){
                    cout<<"Title: "<<book[i].bookID<<endl;
                    cout<<"Author: " <<book[i].author<<endl;
                    cout<<"Quantity: "<<book[i].quantity<<endl;
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"Invalid Book ID"<<endl;
            }
            break;
        }
        //Update book
        case 4:
        {       int update;
                cout<<"Enter the book ID"<<endl;
                cin>>update;
                bool found=false;
                for(int i=0;i<total;i++){
                    if(book[i].bookID==update){
                        found = true;

                        cout<<"Enter new title"<<endl;
                        cin>>book[i].title;

                        cout<<"Enter new author"<<endl;
                        cin>>book[i].author;

                        cout<<"Enter new quantity"<<endl;
                        cin>>book[i].quantity;
                        break;

                        cout<<"Details updated successfully"<<endl;

                    }
                }
                if(!found){
                    cout<<"Invalid Book ID"<<endl;
                }
                break;

        }
        //Delete book
        case 5:
        {       int delete_id;
                cout<<"Enter the book ID"<<endl;
                cin>>delete_id;
                bool found=false;
                for(int i=0;i<total;i++){
                    if(book[i].bookID==delete_id){
                        found = true; 
                        for(int j=i;j<total;j++){
                            book[j]=book[j+1];
                        }
                        cout<<"Book deleted successfully"<<endl; 
                        total--;
                        break;
                    }
                } 
                if(!found){
                    cout<<"Book not found"<<endl;
                }
                break;

        }
        //Issue book
        case 6:
        {
            int issue;
            bool found=false;
            cout<<"Enter the book ID"<<endl;
            cin>>issue;
            for(int i=0;i<total;i++){
                if(book[i].bookID==issue){
                    found=true;
                    if(book[i].quantity>0){
                         book[i].quantity--;
                         cout<<"Book issued successfully";
                         break;
                        }
                }
            }
            if(!found){
                cout<<"Book not available"<<endl;

            }
            break;

        }
        //Return book
        case 7:
        {
            int return_id;
            bool found=false;
            cout<<"Enter the book ID"<<endl;
            cin>>return_id;
            for(int i=0;i<total;i++){
                if(book[i].bookID==return_id){
                    found=true;
                    book[i].quantity++;
                    cout<<"Book returned successfully";
                    break;
                        
                }
            }
        
            if(!found){
                cout<<"Book not available"<<endl;

            }
            break;
        }
        
        default:
            cout<<"Invalid choice"<<endl;
            break;
        }
    }
        while(choice!=8);
        return 0;
}