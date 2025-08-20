#include <iostream>
using namespace std;

int main()
{
    float a;
    int o, b;
    cout << "Enter your number one: ";
    cin >> a;
    cout << "Enter your number two: ";
    cin >> b;
    cout << "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cout << "Choose the opperation from the number given: ";
    cin >> o;
    switch (o)
    {
    case 1:
        cout << "Result: " << a + b;
        break;
    case 2:
        cout << "Result: " << a - b;
        break;
    case 3:
        cout << "Result: " << a * b;
        break;
    case 4:

        switch (b)
        {
        case 0:
            cout << "Not defined";
            break;
        default:
            cout << "Result: " << a / b;

            break;
        }
        break;
    default:
        cout << "Invalid opperation";
        break;
    }

    return 0;
}