#include <iostream>
using namespace std;
/** 
 * this code was made in 20.02.2026
 *its my first time using functions in c++ and I tried it with this simple project
 *maybe I'll complete this code soon
 *it will be my first time trying git too!
*/


//prototypes
int add(int a, int b);
int mul(int a , int b);
void divi(int a, int b);
int sub(int a , int b);

int main()
{
    //getting inputs
    int first;
    int second;
    string agent;
    cout << "first num: " ;
    cin >>first;
    cout << "(+,-,*,/) " ;
    cin >> agent;
    cout << "second num: ";
    cin >>second;
    //conditions
    if (agent == "+"){
        int result = add(first,second);
        cout<<"the result is " << result << endl;
    } else if (agent == "-"){
            int result = sub(first,second);
            cout<<"the result is " << result << endl;
    } else if (agent == "*") {
        int result = mul(first,second);
        cout<<"the result is " << result << endl;
    }else if (agent == "/"){
        divi(first,second);
    }else{
        cout<< "invalid input!";
    }
    return 0;
}

int add(int a, int b)
{
    //for addition
    int res = a + b; //result calculating
    return res;
}

int mul(int a , int b)
{
    int res = a * b; //result calculating
    return res ;
}

void divi(int a, int b)
{
    cout << "I'm working on this one.\n";

    //I'll complete it soon
}

int sub(int a , int b)
{
    int res = a - b;
    return res;
}