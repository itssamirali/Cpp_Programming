#include <iostream>
#include <string>
using namespace std;

class Dog
{

public:
    string breed;
    int age;
    string color;
    string petName;

    void displayDetails();

    Dog(string, int, string, string); // parameterized constructor declaration
};

Dog ::Dog(string petName, int age, string color, string breed)
{ // parameterized constrcutor defination
    this->breed = breed;
    this->age = age;
    this->color = color;
    this->petName = petName;
}

void Dog ::displayDetails()
{
    cout << "Dog's Pet Name: " << petName << endl
         << "Breed: " << breed << endl
         << "Age: " << age << endl
         << "Color: " << color << "\n\n";
}

int main()
{

    Dog dog1("CoCo", 5, "White", "neptune");
    dog1.displayDetails();

    return 0;
}