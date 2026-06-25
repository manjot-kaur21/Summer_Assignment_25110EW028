#include<iostream>
using namespace std;

int main(){
    string s1, s2;
    cout << "Enter the strings: ";
    cin >> s1 >> s2;

    bool found = false;

    for(int i = 0; i < s1.size(); i++){
        bool Printed = false;

        // check if already printed
        for(int k = 0; k < i; k++){
            if(s1[i] == s1[k]){
                Printed = true;
                break;
            }
        }

        if(Printed) continue;

        // check in second string
        for(int j = 0; j < s2.size(); j++){
            if(s1[i] == s2[j]){
                cout << s1[i];
                found = true;
                break;
            }
        }
    }

    if(!found){
        cout << "No common character found";
    }

    return 0;
}