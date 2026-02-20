#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    srand(time(0));
    int RandomeNumber = rand()%100 ;
    int x ;
    cout << "guess the number(0-99): " ;
    cin >> x ;
    if (x== RandomeNumber){
        cout << "you have won!!!" << endl;
    }else {
        cout << "you have lost..." << endl;
        int dif = abs( x - RandomeNumber);
        if (x > RandomeNumber){
            cout << "the number is bigger, the diffrence is " << dif << endl;
        }else{
            cout << "the number is smaller, the diffrence is " << dif << endl;
        }
    }
    return 0;
}