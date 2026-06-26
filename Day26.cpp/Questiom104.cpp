//Program to create quiz application
#include<iostream>
using namespace std;
int main(){
    int score=0;
    int ans;
    cout<<"Welcome to the quiz !!"<<endl;
    cout<<"This quiz contains 5 ques "<<endl;
    cout<<"Each correct answer rewards you 1 point"<<endl;
    cout<<"Are you ready?,Let's GO"<<endl;
    //Question 1
    cout<<"1.Which of the following is the correct header file for input and output in C++?"<<endl;
    cout<<"1.<stdio.h>"<<endl<<"2.<iostream>"<<endl<<"3.<conio.h>"<<endl<<"4.<math.h>"<<endl;
    cin>>ans;
    if(ans==2){
        cout<<"Correct answer!!"<<endl;
        score++;
    }
    else{
        cout<<"Oops!Wrong Answer"<<endl;
    }
    //Question2
    cout<<"2.Which keyword is used to declare a constant in C++?"<<endl;
    cout<<"1.static"<<endl<<"2. const"<<endl<<"3.final"<<endl<<"4.fixed"<<endl;
    cin>>ans;
    if(ans==2){
        cout<<"Correct answer!!"<<endl;
        score++;
    }
    else{
        cout<<"Oops!Wrong Answer"<<endl;
    }
    //Question3
    cout<<"3.Which operator is used to take input in C++?"<<endl;
    cout<<"1.<<"<<endl<<"2.>>"<<endl<<"3.=="<<endl<<"4.&&"<<endl;
    cin>>ans;
    if(ans==2){
        cout<<"Correct answer!!"<<endl;
        score++;
    }
    else{
        cout<<"Oops!Wrong Answer"<<endl;
    }
    //Question 4
    cout<<"4.Which loop is guaranteed to execute at least once?"<<endl;
    cout<<"1.for"<<endl<<"2.while"<<endl<<"3.do-while"<<endl<<"4.foreach"<<endl;
    cin>>ans;
    if(ans==3){
        cout<<"Correct answer!!"<<endl;
        score++;
    }
    else{
        cout<<"Oops!Wrong Answer"<<endl;
    }
    //Question 5
    cout<<"5. Which data type is used to store decimal numbers?"<<endl;
    cout<<"1.int"<<endl<<"2.char"<<endl<<"3.float"<<endl<<"4.bool"<<endl;
    cin>>ans;
    if(ans==3){
        cout<<"Correct answer!!"<<endl;
        score++;
    }
    else{
        cout<<"Oops!Wrong Answer"<<endl;
    }
    //result
    cout<<"Quiz completed"<<endl;
    cout<<"Your score is"<<score<<"/5";
    return 0;
}