//Program to create ticket ticketing system
#include<iostream>
#include<iomanip>
using namespace std;
struct Booking {
    int ticketID;
    string passengerName;
    string destination;
    int seatNo;
    float fare;
};

int main(){
    Booking ticket[1000];
    int choice;
    int total=0;
    cout<<"----Ticket booking System----"<<endl;
    cout<<"1. Book Ticket"<<endl;
    cout<<"2. Display All Tickets"<<endl;
    cout<<"3. Search Ticket"<<endl;
    cout<<"4. Update Ticket"<<endl;
    cout<<"5. Cancel Ticket"<<endl;
    cout<<"6. Exit"<<endl;
    
    do{
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch (choice)
        {
        //Book ticket
        case 1:
            
            cout<<"Enter ticket ID"<<endl;
            cin>>ticket[total].ticketID;

            cout<<"Enter passanger name"<<endl;
            cin.ignore();                    //Removes unwanted character
            getline(cin,ticket[total].passengerName);

            cout<<"Enter destination"<<endl;
            getline(cin,ticket[total].destination);

            cout<<"Enter seat number"<<endl;
            cin>>ticket[total].seatNo;

            cout<<"Enter fare"<<endl;
            cin>>ticket[total].fare;

            total++;
            cout<<"ticket booked successfully"<<endl;
            break;
        //Display all ticket
        case 2:
        {   
            if(total==0){
                cout<<"No tickets are booked"<<endl;
                break;
            }
          cout<<"--All tickets--"<<endl;
            cout << left
            << setw(12) << "Ticket ID"
            << setw(20) << "Name"
            << setw(20) << "Destination"
            << setw(12) << "Seat No"
            << setw(10) << "Fare"<<endl;

            for(int i=0;i<total;i++){
                cout<<left
                <<setw(12)<<ticket[i].ticketID
                <<setw(20)<<ticket[i].passengerName
                <<setw(20)<<ticket[i].destination
                <<setw(12)<<ticket[i].seatNo
                <<setw(10)<<ticket[i].fare
                <<endl;
                

            }
            break;
        }
        //Search ticket
        case 3:
        {   if(total==0){
            cout<<"No tickets available"<<endl;
            break;}
        
            int search;
            cout<<"Enter the ticket ID"<<endl;
            cin>>search;
            bool found=false;
            for(int i=0;i<total;i++){
                if(ticket[i].ticketID==search){
                    cout<<"Passanger Name: "<<ticket[i].passengerName<<endl;
                    cout<<"Destination: " <<ticket[i].destination<<endl;
                    cout<<"Seat Number: "<<ticket[i].seatNo<<endl;
                    cout<<"Fare: "<<ticket[i].fare<<endl;
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"Invalid ticket ID"<<endl;
            }
            break;
        }
        //Update ticket
        case 4:
        {       if(total==0){
                    cout<<"No tickets available"<<endl;
                    break;}
                int update;
                cout<<"Enter the ticket ID"<<endl;
                cin>>update;
                cin.ignore();
                bool found=false;
                for(int i=0;i<total;i++){
                    if(ticket[i].ticketID==update){
                        found = true;

                        cout<<"Enter new passanger name"<<endl;
                        getline(cin,ticket[i].passengerName);

                        cout<<"Enter new destination"<<endl;
                        cin.ignore();
                        getline(cin,ticket[i].destination);

                        cout<<"Enter new seat number"<<endl;
                        cin>>ticket[i].seatNo;

                        cout<<"Enter new fare"<<endl;
                        cin>>ticket[i].fare;
                        

                        cout<<"Details updated successfully"<<endl;
                        break;

                    }
                }
                if(!found){
                    cout<<"Invalid ticket ID"<<endl;
                }
                break;

        }
        //Cancel ticket
        case 5:
        {       if(total==0){
                    cout<<"No tickets available"<<endl;
                    break;}
                int cancel_id;
                cout<<"Enter the ticket ID"<<endl;
                cin>>cancel_id;
                bool found=false;
                for(int i=0;i<total-1;i++){
                    if(ticket[i].ticketID==cancel_id){
                        found = true; 
                        for(int j=i;j<total;j++){
                            ticket[j]=ticket[j+1];
                        }
                        cout<<"ticket cancelled successfully"<<endl; 
                        total--;
                        break;
                    }
                } 
                if(!found){
                    cout<<"ticket not found"<<endl;
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
