// Write a program in C++ to find Size of fundamental data types
#include <iostream>
using namespace std;

int main()
{

    int i;
    char c;
    float f;
    long l;
    double d;
    bool b;

    cout << "The size of int is : " << sizeof(i) << " bytes\n";
    cout << "The size of char is : " << sizeof(c) << " bytes\n";
    cout << "The size of float is : " << sizeof(f) << " bytes\n";
    cout << "The size of long is : " << sizeof(l) << " bytes\n";
    cout << "The size of double is : " << sizeof(d) << " bytes\n";
    cout << "The size of bool is : " << sizeof(b) << " bytes\n";
}