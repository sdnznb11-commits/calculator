#include <iostream>
using namespace std;

int main(){
    int age;
    cout<< "enter your age: ";
    cin >> age;
    string is_citizen;
    cout<< "are you a citizen?(yes/no): ";
    cin >> is_citizen;
    if (age >= 18){
        if (is_citizen == "yes"){
            cout << "youre allowed to vote! \n";
        } else {
            cout<< "youre not allowed to vote, must be a citizen...";
        }
    }else {
        cout<< "youre not allowed to vote, youre not old enough...";
    }
    return 0;
}