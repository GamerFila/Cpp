#include <iostream>
using namespace std;
int main(){
        int a;
       cin >> a;
       if (a>0){
            cout << "This is a positive number\n";
            if (a%2==0)
            {
                cout << "this is an even number";
            }
            else {
                cout << "this is an odd number";
            }

       }
       else if (a==0){
            cout << " this is a zero\n";
            cout << "this is an even number";
       }
       else {
            cout << "this a negative number\n";
            if (a%2==0)
            {
                cout << "this is an even number";
            }
            else {
                cout << "this is an odd number";
            }

       }
    return 0;
}