#include <iostream>
using namespace std;

// Even -> 0
// Odd -> 1
bool isEven(int num)
{
    if (num & 1) // first bit 1 implies number is odd
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a;
    cin >> a;
    if (isEven(a))
    {
        cout << "Number is odd\n";
    }
    else
    {
        cout << "Number is even\n";
    }
    return 0;
}