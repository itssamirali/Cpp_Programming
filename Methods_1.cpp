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

    Dog(); // constructor declaration

    void displayDetails(); // function declaration
};

Dog ::Dog()
{ // explicit constructor defination

    cout << "Dog Deatils Created" << endl;
}

void Dog::displayDetails() // function defination

{
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

    Dog D2;
    D2.age = 3;
    D2.name = "Coco";
    D2.breed = "Pameliun";
    D2.color = "White";
    D2.displayDetails();
}
