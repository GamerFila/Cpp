#include <iostream>
using namespace std;

int main()
{
    int max;
    int x, y, z, p = 0;

    cout << "First number: ";
    cin >> x;
    cout << "Second number: ";
    cin >> y;
    cout << "Third number: ";
    cin >> z;
    /*max = (x>y)?x:y;

    cout <<"Your number is " << max;*/

    max = ((x>y&&y>z)||(x>z&&z>y))?x:((y>z&&z>x)||(y>x&&x>z))?y:((z>x&&x>y)||(z>y&&y>x))?z:p;

    cout << "The max value is: " << max;

    return 0;
}