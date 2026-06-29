//Program to create Inventory Management system
#include<iostream>
#include<iomanip>
using namespace std;
struct Product
{
    int productID;
    string productName;
    int quantity;
    float price;
};
int main(){
    int choice;
    Product element[1000];
    int total=0;
    cout<<"----Inventory Management System----"<<endl;
    cout<<"1.Add product"<<endl;
    cout<<"2.Display products"<<endl;
    cout<<"3.Search product"<<endl;
    cout<<"4.Update product"<<endl;
    cout<<"5.Delete product"<<endl;
    cout<<"6.Calculate total value"<<endl;
    cout<<"7.Exit"<<endl;

    do{
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice){
            //Add product
            case 1:

            {   
                if(total==1000){
                    cout<<"Inventory is full"<<endl;
                    break;
                }
                
                cout<<"Enter the product ID"<<endl;
                cin>>element[total].productID;

                cin.ignore();
                cout<<"Enter the product name"<<endl;
                getline(cin,element[total].productName);

                cout<<"Enter the quantity"<<endl;
                cin>>element[total].quantity;

                cout<<"Enter the price"<<endl;
                cin>>element[total].price;

                total++;
                cout<<"Product added successfully"<<endl;
                break;

            }
            //Display products
            case 2:
            {
                if(total==0){
                    cout<<"Inventory is empty"<<endl;
                    break;
                }
                else{
                    cout<<"---All products---"<<endl;
                    //For definite spacing
                    cout<<left
                        <<setw(15)<<"Id"
                        <<setw(20)<<"Name"
                        <<setw(15)<<"Quantity"
                        <<setw(15)<<"Price"
                        <<endl;
                    
                        //Displaying accounts
                        for(int i=0;i<total;i++){
                            cout<<left
                                <<setw(15)<<element[i].productID
                                <<setw(20)<<element[i].productName
                                <<setw(15)<<element[i].quantity
                                <<setw(15)<<element[i].price
                                <<endl;
                                
                        }
                    

                }
                    break;
            }
            //Search products
            case 3:
            {   
                int search;
                cout<<"Enter product ID"<<endl;
                cin>>search;
                bool found=false;
                for(int i=0;i<total;i++){
                    if(element[i].productID==search){
                        found=true;
                        cout<<"Product name: "<<element[i].productName<<endl;
                        cout<<"Quantity: "<<element[i].quantity<<endl;
                        cout<<"Price: "<<element[i].price<<endl;
                        break;

                    }

                }

                if(!found){
                    cout<<"Invalid product ID"<<endl;
                }
                break;
            }
            //Update product
            case 4:
            {   
                int update;
                cout<<"Enter product ID"<<endl;
                cin>>update;
                bool found=false;
                for(int i=0;i<total;i++){
                    if(element[i].productID==update){
                        found=true;
                        cout<<"Enter new product name: "<<endl;
                        cin.ignore();
                        getline(cin, element[i].productName);

                        cout<<"Enter new quantity: "<<endl;
                        cin>>element[i].quantity;

                        cout<<"Enter new price: "<<endl;
                        cin>>element[i].price;

                        cout<<"Product updated successfully"<<endl;
                        break;

                    }
                }
                if(!found){
                    cout<<"Invalid product ID"<<endl;
                }
                break;
            }
            
            //Delete product
            case 5:
            {
                int delete_element;
                cout<<"Enter product ID"<<endl;
                cin>>delete_element;
                bool found=false;
                for(int i=0;i<total;i++){
                    if(element[i].productID==delete_element){
                        found=true;
                        for(int j=i;j<total-1;j++){
                            element[j]=element[j+1];
                        }
                        cout<<"Product deleted successfully"<<endl;
                        total--;
                        break;

                    }
                }
                if(!found){
                    cout<<"Invalid product ID"<<endl;
                }
                break;
            }
            
            //Caculate total value
            case 6:
            {
                bool found=false;
                cout<<"Enter the product ID"<<endl;
                int total_value;
                cin>>total_value;

                for(int i=0;i<total;i++){
                    if(element[i].productID==total_value){
                    found=true;
                    cout<<"Total value of product: "
                    <<element[i].price*element[i].quantity<<endl;
                    break;
                     }
                }

                if(!found){
                    cout<<"Invalid product ID"<<endl;
                    }
                break;

            }
            //Exit
            case 7:
            {
                cout<<"----Exit----"<<endl;
                break;
            }
        }
    }
    while(choice!=7);
    return 0;
}