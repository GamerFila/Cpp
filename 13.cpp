#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter your number: ";
    cin >> a;
    cout << "Enter your number: ";
    cin >> b;
    cout << "Enter your number: ";
    cin >> c;

    if (a > b && b > c)
    {
        cout << b << " is second greatest number";
    }
    else if (a > c && c > b)
    {
        cout << c << " is second greatest number";
    }
    else if (b > a && a > c)
    {
        cout << a << " is second greatest number";
    }
    else if (b > c && c > a)
    {
        cout << c << " is second greatest number";
    }
    else if (c > a && a > b)
    {
        cout << a << " is second greatest number";
    }
    else if (c > b && b > a)
    {
        cout << b << " is second greatest number";
    }
    else
    {
        cout << "Somethings wrong";
    }

    return 0;
}