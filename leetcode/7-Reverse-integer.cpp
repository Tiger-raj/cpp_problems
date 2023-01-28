#include <iostream>
using namespace std;
int main()
{
    int digit, x;
    cout << "Enter the number you want to reverse : ";
    cin >> x;
    long long int ans = 0;
    while (x != 0)
    {
        digit = x % 10;
        ans = (ans * 10) + digit;
        x /= 10;
    }
    if (ans >= 2147483647 || ans <= -2147483648)
    {
        cout << "Number is out of range of integer";
    }
    else
    {
        cout << ans;
    }
}