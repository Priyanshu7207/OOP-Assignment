#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) 
    {
        cout << number << " The number you have entered is an even number." << endl;
    } else 
    {
        cout << number << " The number you have entered is an odd number." << endl;
    }

    return 0;
}
