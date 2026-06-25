#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of names";
    cin >> n;

    string arr[n];

    cout << "Enter names";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Bubble sort
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                string temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted names:";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}