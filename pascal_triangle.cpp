/*
1
11
121
1331
14641
*/
#include <iostream>
using namespace std;
int fact(int a)
{
    int fact = 1;
    for (int i = 2; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int ans = fact(n) / (fact(r) * fact(n - r));
    return ans;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << nCr(i, j);
        }
        cout << "\n";
    }

    return 0;
}