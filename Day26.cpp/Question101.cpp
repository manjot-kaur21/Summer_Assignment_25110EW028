//Program to create number guessing game
#include<iostream>
#include<cstdlib>       //For srand() & rand()
#include<ctime>         //for time()
using namespace std;
int main(){
    cout<<"Enter the maximum number for the guessing game ";
    int n;
    cin>>n;
    //Seed the random number generator
    srand(time(0));
    //To genrate random number between 1 to 100
    int random_number=rand()%n+1;
    
    int guess;
    int attempt=0;
    cout<<"Welcome to Number Guessing Game"<<endl;
    cout<<"I have chosen a number from range 1 to "<<n<<endl;
    
    do{
        cout<<"Enter the guess";
        cin>>guess;
        attempt++;
        if(guess>random_number){
            cout<<"Too high"<<endl;
            
        }
        else if(guess<random_number){
            cout<<"Too low"<<endl;
            
        }
        else{
            cout<<"Bravo! You got it"<<endl;
            cout<<"Total atemempts taken: "<<attempt;
        }
        


    }
    while(guess!=random_number);
    return 0;


}

