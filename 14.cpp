#include <iostream>
using namespace std;

int main()
{
    char x;
    cout << "Enter your grade: ";
    cin >> x;
    switch (x)
    {
    case 'A':
        cout << "Excellent";
        break;
    case 'B':
        cout << "Good";
        break;
    case 'C':
        cout << "Average";
        break;
    case 'D':
        cout << "Poor";
        break;
    case 'F':
        cout << "Fail";
        break;

    default:
        cout << "Invaild Grade ";
        break;
    }
    return 0;
}