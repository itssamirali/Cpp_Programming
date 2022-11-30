#include <iostream>
using namespace std;

class Box
{ // creating the class
public:
    double width;
    double height;
    double depth;
};
int main()
{
    Box obj1; // creating an object
    obj1.width = 5;
    obj1.height = 7;
    obj1.depth = 3;

    double Volume = obj1.width * obj1.height * obj1.depth;
    cout << "Volume of a Box is " << Volume << " cm";
}