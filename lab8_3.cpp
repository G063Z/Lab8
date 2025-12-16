/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int age, height;
long long bounty;

int main() {
    
    cout << "Enter your age: ";
    cin >> age;
    
    if(age <= 25) {
        cout << "Enter your height: ";
        cin >> height;

        if(height < 100) {
            cout << "Your character = Chopper";
        } 
        else if(height < 180) {
            cout << "Your character = Usopp";
        } 
        else {
            cout << "Enter your bounty: ";
            cin >> bounty;

            if(bounty > 1100000000LL) {
                cout << "Your character = Zoro";
            } else {
                cout << "Your character = Sanji";
            }
        }
    } 
    else if(age <= 60) {
        cout << "Enter your bounty: ";
        cin >> bounty;

        if(bounty > 500000000LL) {
            cout << "Your character = Jinbe";
        } else {
            cout << "Your character = Franky";
        }
    } 
    else {
        cout << "Your character = Brook";
    }
    
    return 0;
}
