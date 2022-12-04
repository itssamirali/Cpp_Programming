// Write a program in C++ to display the operation of pre and post increment and decrement.
#include <iostream>
using namespace std;

int main()
{

    int a = 5, b = 6;

    cout << "Pre increment : " << ++a << endl;
    cout << "Post increment : " << b++ << endl;

    int sum = a + b;
    cout << "The sum of a and b is " << sum << endl;

    cout << "Pre decrement : " << --a << endl;
    cout << "Post decrement : " << b-- << endl;

    int sum2 = a + b;
    cout << "The sum of a and b is " << sum2 << endl;
}
