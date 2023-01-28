#include <iostream>
using namespace std;

// Prime -> 1
// Not Prime -> 0

bool isPrime(int a)
{
    int i;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cout << "Enter number : \n";
    cin >> n;
    if (isPrime(n) == 1)
    {
        cout << "Given number is Prime.\n";
    }
    else
    {
        cout << "Given number is Not Prime.\n";
    }
    return 0;
}