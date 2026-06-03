///Program to find recursion reverse
#include<iostream>
#include<cmath>
using namespace std;

int reverse(int n, int digits){
    if(n == 0){
        return 0;
    }

    int rem = n % 10;
    return rem * pow(10, digits - 1) + reverse(n / 10, digits - 1);
}

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    int temp = num;
    int digits = 0;

    while(temp > 0){
        digits++;
        temp /= 10;
    }

    cout << reverse(num, digits);

    return 0;
}