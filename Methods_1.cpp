#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    int age;
    string color;
    string breed;
    string name;

    void displayDetails(); // function declaration
};

void Dog::displayDetails()
{ // function defination

    cout << "Name : " << name << endl
         << "age : " << age << endl
         << "Color : " << color << endl
         << "Breed : " << breed << "\n\n";
}

int main()
{

    Dog D1;
    D1.age = 5;
    D1.name = "Tommy";
    D1.breed = "No Breed";
    D1.color = "White&Black";
    D1.displayDetails();
}
