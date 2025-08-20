#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if (a>0)
    {
           cout<<"this is a positive number ";
    }
    else if (a==0){
        cout << "The number is zero";
    }
    else {
        cout << "This is a negative number";
    }

    return 0;
}