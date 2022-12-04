// Write a program in C++ to swap two numbers.
#include <iostream>
using namespace std;

int main()
{

    int a, b, sum, temp;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    sum = a + b;
    cout << "The sum of a and b is " << sum << endl;
    temp = b;
    b = a;
    a = temp;

    cout << "Value of a : " << a << endl;
    cout << "Value of b : " << b << endl;

    cout << "The sum of a and b after swaping : " << sum << endl;
}