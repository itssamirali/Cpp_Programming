#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Person
{
public:
    string name;
    int age;
};

int main()
{

    Person P1;
    cin >> P1.name;
    cin >> P1.age;
    cout << "The name of the person is " << P1.name << " and the age is " << P1.age;

    return 0;
}