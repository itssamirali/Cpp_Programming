/*
 Author:	Internshala
 Module:	Fundamentals of Object Oriented Programming Using C++
 Topic:		Migrating from C to C++
*/

#include <iostream>
#include <string>
using namespace std;

string getFullName(string, string);

int main()
{

    // String definition.
    string firstName = "Rahul";
    string lastName = "Kamal";

    // Passing string as a parameter and getting a string as the returned value.
    string fullName = getFullName(firstName, lastName);
    cout << fullName << endl;

    // Accessing a character.
    char letter = firstName[1]; // letter = 'a'
    cout << letter << endl;

    // User input.
    string nickName;
    cout << "Enter nick name:";
    getline(cin, nickName);
    cout << nickName << endl;
    ;

    // length(): returns the length of the string.
    int length = firstName.length(); // length of "Rahul" is 5
    cout << length << endl;

    // compare(): compares two strings lexicographically.
    int result = firstName.compare(lastName); // If result is 0, strings are equal. Else not equal.
    cout << result << endl;

    // append(): adds new characters (string) at the end of another string object.
    firstName.append(lastName); // firstName = RahulKamal
    cout << firstName << endl;

    // Modify the value.
    firstName = "Samir";
    cout << firstName << endl;

    // String array.
    string names[] = {"Rahul", "Ravi", "Peter"};
    for (int i = 0; i < 3; i++)
        cout << names;

    return 0;
}

string getFullName(string firstName, string lastName)
{

    // string fullName = firstName + " " + lastName;		// Rahul Kamal
    return firstName + " " + lastName;
}