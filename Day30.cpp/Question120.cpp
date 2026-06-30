// Program to Create Hotel Room Booking System(mini project) using arrays , strings ,functions
#include <iostream>
#include <iomanip>
using namespace std;

// Structure
struct Hotel
{
    int roomNo;
    string customerName;
    string phone;
    string roomType;
    int days;
    float bill;
};

// Array
Hotel room[100];
int total = 0;

// Function Declarations
void bookRoom();
void displayBookings();
void searchBooking();
void updateBooking();
void cancelBooking();
void roomAvailability();

int main()
{
    int choice;
    cout << "-----HOTEL ROOM BOOKING SYSTEM -----"<<endl;
    cout << "1. Book Room"<<endl;
    cout << "2. Display All Bookings"<<endl;
    cout << "3. Search Booking"<<endl;
    cout << "4. Update Booking"<<endl;
    cout << "5. Cancel Booking"<<endl;
    cout << "6. Check Room Availability"<<endl;
    cout << "7. Exit"<<endl;

    do
    {

        cout << "Enter Your Choice : "<<endl;
        cin >> choice;

        switch(choice)
        {
            case 1:
                bookRoom();
                break;

            case 2:
                displayBookings();
                break;

            case 3:
                searchBooking();
                break;

            case 4:
                updateBooking();
                break;

            case 5:
                cancelBooking();
                break;

            case 6:
                roomAvailability();
                break;

            case 7:
                cout << "Thank You!"<<endl;
                break;

            default:
                cout << "Invalid Choice!"<<endl;
        }

    } while(choice != 7);

    return 0;
}

// Book Room
void bookRoom()
{   
    if(total == 100)
    {
    cout << "Hotel is Full!" << endl;
    return;
    }
    int found = 0;

    cout << "Enter Room Number : "<<endl;
    cin >> room[total].roomNo;

    // Check if room is already booked
    for(int i = 0; i < total; i++)
    {
        if(room[i].roomNo == room[total].roomNo)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        cout << "Room Already Booked!"<<endl;
        return;
    }

    cin.ignore();

    cout << "Enter Customer Name : "<<endl;
    getline(cin, room[total].customerName);

    cout << "Enter Phone Number : "<<endl;
    getline(cin, room[total].phone);

    cout << "Enter Room Type (AC / Non-AC / Deluxe) : "<<endl;
    getline(cin, room[total].roomType);

    cout << "Enter Number of Days : "<<endl;
    cin >> room[total].days;

    // Bill Calculation
    if(room[total].roomType == "AC" || room[total].roomType == "ac")
    {
        room[total].bill = room[total].days * 1500;
    }
    else if(room[total].roomType == "Deluxe" || room[total].roomType == "deluxe")
    {
        room[total].bill = room[total].days * 2500;
    }
    else
    {
        room[total].bill = room[total].days * 1000;
    }

    total++;

    cout << "Room Booked Successfully!"<<endl;
}

// Display
void displayBookings()
{
    if(total == 0)
    {
        cout << "No Booking Available"<<endl;
        return;
    }

    cout << "-----------------------------------------------------------------------------"<<endl;
    cout << left
    << setw(10) << "Room"
    << setw(20) << "Customer"
    << setw(15) << "Phone"
    << setw(12) << "Type"
    << setw(8) << "Days"
    << setw(10) << "Bill"<<endl;
    cout << "------------------------------------------------------------------------------"<<endl;

    for(int i = 0; i < total; i++)
    {
        cout << left << setw(10) << room[i].roomNo
             << setw(20) << room[i].customerName
             << setw(15) << room[i].phone
             << setw(12) << room[i].roomType
             << setw(8) << room[i].days
             << setw(10) << room[i].bill << endl;
    }
}

// Search
void searchBooking()
{
    int number;
    int found = 0;

    cout << "Enter Room Number : "<<endl;
    cin >> number;

    for(int i = 0; i < total; i++)
    {
        if(room[i].roomNo == number)
        {
            found = 1;

            cout << "Booking Found"<<endl;
            cout << "Room Number : " << room[i].roomNo << endl;
            cout << "Customer Name : " << room[i].customerName << endl;
            cout << "Phone : " << room[i].phone << endl;
            cout << "Room Type : " << room[i].roomType << endl;
            cout << "Days : " << room[i].days << endl;
            cout << "Bill : " << room[i].bill << endl;

            break;
        }
    }

    if(found == 0)
    {
        cout << "Booking Not Found!"<<endl;
    }
}

// Update
void updateBooking()
{
    int number;
    int found = 0;

    cout << "Enter Room Number to Update : "<<endl;
    cin >> number;

    for(int i = 0; i < total; i++)
    {
        if(room[i].roomNo == number)
        {
            found = 1;

            cin.ignore();

            cout << "Enter New Customer Name : ";
            getline(cin, room[i].customerName);

            cout << "Enter New Phone Number : ";
            getline(cin, room[i].phone);

            cout << "Enter New Room Type : ";
            getline(cin, room[i].roomType);

            cout << "Enter Number of Days : ";
            cin >> room[i].days;

            if(room[i].roomType == "AC" || room[i].roomType == "ac")
                room[i].bill = room[i].days * 1500;
            else if(room[i].roomType == "Deluxe" || room[i].roomType == "deluxe")
                room[i].bill = room[i].days * 2500;
            else
                room[i].bill = room[i].days * 1000;

            cout << "\nBooking Updated Successfully!\n";

            break;
        }
    }

    if(found == 0)
    {
        cout << "\nBooking Not Found!\n";
    }
}

// Delete
void cancelBooking()
{
    int number;
    int found = 0;

    cout << "Enter Room Number to Cancel : "<<endl;
    cin >> number;

    for(int i = 0; i < total; i++)
    {
        if(room[i].roomNo == number)
        {
            found = 1;

            for(int j = i; j < total - 1; j++)
            {
                room[j] = room[j + 1];
            }

            total--;

            cout << "Booking Cancelled Successfully"<<endl;

            break;
        }
    }

    if(found == 0)
    {
        cout << "Booking Not Found!"<<endl;
    }
}

// Room Availability
void roomAvailability()
{
    int number;
    int found = 0;

    cout << "Enter Room Number : "<<endl;
    cin >> number;

    for(int i = 0; i < total; i++)
    {
        if(room[i].roomNo == number)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        cout << "Room is Already Booked.\n";
    else
        cout << "Room is Available.\n";
}