#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the year: ";
    cin >> a;

    if (a % 4 == 0)
    {
        // according to the question if year is divisible by 100 then it should be divisible by 400
        if (a % 100 == 0)
        {
            if (a % 400 == 0)
            {
                cout << "This is a leap year";
            }
            else
            {
                cout << "This is not a leap year";
            }
        }
        else
        {
            cout << "This is a leap year";
        }
    }
    else
    {
        cout << "This is not a leap year";
    }

    return 0;
}