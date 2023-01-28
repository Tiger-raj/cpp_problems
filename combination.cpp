#include <iostream>
using namespace std;
int fact(int a)
{
    int i, fact = 1;
    if (a < 0)
    {
        return 0;
    }
    else
    {
        for (i = 1; i <= a; i++)
        {
            fact *= i;
        }
        return fact;
    }
}
int main()
{
    int n, r, comb;
    cout << "Enter n and r, respectively : \n";
    cin >> n >> r;
    comb = fact(n) / (fact(r) * fact(n - r));
    cout << comb;
    return 0;
}