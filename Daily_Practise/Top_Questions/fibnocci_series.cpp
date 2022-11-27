#include <iostream>
using namespace std;
int main()
{

    int num, n1 = 0, n2 = 1, n3;
    cout << "Enter the element : ";
    cin >> num;
    cout << n1 << " " << n2 << " ";
    int i = 2;
    while (i < num)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
        ++i;
    }
}