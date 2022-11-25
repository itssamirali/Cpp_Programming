#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name;
    char dollar;
    float gdp;
    int year;

    cout << "Enter the name of country : \n";
    getline(cin, name);

    cout << "Enter the dollar : \n";
    cin >> dollar;

    cout << "Enter the gdp : \n";
    cin >> gdp;

    cout << "Enter the year : \n";
    cin >> year;

    cout << "As economic reforms picked up the pace, " << name << "'s GDP grew five-fold to reach US" << dollar << gdp << " trillion in " << year << " (as per IMF estimates).";

    return 0;
}