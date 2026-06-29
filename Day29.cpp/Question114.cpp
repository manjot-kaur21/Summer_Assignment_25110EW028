//Program to create menu driven array operation system
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int choice,element,position;
    int arr[1000];
    int size=0;
    cout<<"----Array Operation System----"<<endl;
    cout<<"1. Create array"<<endl;
    cout<<"2. Display array"<<endl;
    cout<<"3. Insert element"<<endl;
    cout<<"4. Delete element"<<endl;
    cout<<"5. Search element"<<endl;
    cout<<"6. Update element"<<endl;
    cout<<"7. Sort array"<<endl;
    cout<<"8. Find maximum"<<endl;
    cout<<"9. Find minimum"<<endl;
    cout<<"10. Exit"<<endl;

    do{
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch (choice)
        {
        //Create array
        case 1:
        {
            cout<<"Enter the size of array: "<<endl;
            cin>>size;
            cout<<"Enter elements of array"<<endl;
            for(int i=0;i<size;i++){
                cin>>arr[i];
            }
            cout<<"Array created successfully"<<endl;
            break;
        }
        //Display array
        case 2:
            if(size==0){
            cout<<"Array is empty"<<endl;
            }
            else{
                for (int i=0;i<size;i++){
                    cout<<arr[i]<<" ";
                }
            }
                break;
           
        //Insert array
        case 3:
        {
            cout<<"Enter position(1 to" << size+1<<")"<<endl;
            cin>>position;
            if(position<1 || position>size+1){
                cout<<"Invalid position"<<endl;
            }
            else{
                cout<<"Enter element"<<endl;
                cin>>element;

                for(int i=size;i>=position;i--){
                    arr[i]=arr[i-1];
                }
                arr[position-1]=element;
                size++;
                cout<<"Element inserted successfully"<<endl;
                
            }
            break;
        }

        //Delete element
        case 4:
        {
            cout<<"Enter the position to delete"<<endl;
            cin>>position;
            if(position<1 || position>size){
                cout<<"Invalid position"<<endl;
                break;
            }
            else{
                for(int i=position-1;i<size-1;i++){
                    arr[i]=arr[i+1];
                }
                size--;
                cout<<"Element deleted successfully"<<endl;
                break;
            }
        }
        //Search element
        case 5:
        {
            cout<<"Enter element to search"<<endl;
            cin>>element;
            {
                bool found=false;
                for(int i=0;i<size;i++){
                    if(arr[i]==element){
                        found =true;
                        cout<<"Element found at position"<<i+1<<endl;
                        break;
                    }
                }
                if(!found){
                    cout<<"Element not found"<<endl;
                }
                
            }
            break;
        }
        //Update element
        case 6:
        {
            cout<<"Enter the position to update"<<endl;
            cin>>position;
            if(position>=1 && position<=size){
                cout<<"Enter the element"<<endl;
                cin>>element;
                arr[position-1]=element;
                cout<<"Element updated successfully"<<endl;

            }
            else{
                cout<<"Invalid position"<<endl;
            }
            break;
        }
        //Sort array
        case 7:
        {
            sort(arr,arr+size);
            cout<<"Array sorted successfully"<<endl;
            break;

        }
        //Find maximum
        case 8:
        {   if(size==0){
                cout<<"Array is empty"<<endl;
                
            }
            else{
                cout<<"Maximum element is "<<*max_element(arr,arr+size)<<endl;
                
            }
        break;
        }
        //Find minimum
        case 9:
        {   if(size==0){
                cout<<"Array is empty"<<endl;
            }
            else{
                cout<<"Minimum element is "<<*min_element(arr,arr+size)<<endl;
                
            }
            break;
        }
        //Exit
        case 10:
        {
            cout<<"----Exit----"<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid choice"<<endl;
        }
    }
}
    while(choice!=10);
    return 0;
    
}
