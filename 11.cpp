#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "1. Pizza\n2. Burger\n3. Sandwiches\n4. Paneer\n\nChoose the number as per the item: ";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "1. Blue Pizza\n2. Green Pizza\n3. Yellow Pizza\n4. Red Pizza\n";

        cout << "\nEnter the desired number for the Pizza: ";
        cin >> b;
        switch (b)
        {
        case 1:
            cout << "You ordered Blue Pizza $1";
            break;
        case 2:
            cout << "You ordered Green Pizza $2";
            break;
        case 3:
            cout << "You ordered Yellow Pizza $1.5";
            break;
        case 4:
            cout << "You ordered Red Pizza $3";
            break;

        default:
            cout << "no such dish";
            break;
        }
        break;
    case 2:
        cout << "1. Blue Burger\n2. Green Burger\n3. Yellow Burger\n4. Red Burger\n";

        cout << "\nEnter the desired number for the Burger: ";
        cin >> b;
        switch (b)
        {
        case 1:
            cout << "You ordered Blue Burger $1";
            break;
        case 2:
            cout << "You ordered Green Burger $2";
            break;
        case 3:
            cout << "You ordered Yellow Burger$1.5";
            break;
        case 4:
            cout << "You ordered Red Burger $3";
            break;

        default:
            cout << "no such dish";
            break;
        }
        break;
    case 3:
        cout << "1. Blue Sandwich\n2. Green Sandwich\n3. Yellow Sandwich\n4. Red Sandwich\n";

        cout << "Enter the desired number for the Sandwhich: ";
        cin >> b;
        switch (b)
        {
        case 1:
            cout << "You ordered Blue Sandwich $1";
            break;
        case 2:
            cout << "You ordered Green Sandwich $2";
            break;
        case 3:
            cout << "You ordered Yellow Sandwich $1.5";
            break;
        case 4:
            cout << "You ordered Red Sandwich $3";
            break;

        default:
            cout << "no such dish";
            break;
        }
        break;
    case 4:
        cout << "1. Blue Paneer\n2. Green Paneer\n3. Yellow Paneer\n4. Red Paneer\n";

        cout << "Enter the desired number for the Paneer: ";
        cin >> b;
        switch (b)
        {
        case 1:
            cout << "You ordered Blue Paneer $1";
            break;
        case 2:
            cout << "You ordered Green Paneer $2";
            break;
        case 3:
            cout << "You ordered Yellow Paneer$1.5";
            break;
        case 4:
            cout << "You ordered Red Paneer $3";
            break;

        default:
            cout << "no such dish";
            break;
        }
        break;
    default:
        cout << "\nNo dish available for that number";
        break;
    }
    return 0;
}