#include <iostream>
using namespace std;

// int main()
// {
//     int a = 1;
//     int b = 2;

//     if (a-- > 0 || ++b > 2)
//     {
//         cout << "Stage1 - Inside If ";
//     }
//     else
//     {
//         cout << "Stage2 - Inside Else ";
//     }
//     cout << a << " " << b << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 0, b = 1, n, temp, i;
//     cin >> n;
//     cout << a << " " << b;
//     for (i = 1; i < n - 1; i++)
//     {
//         temp = a + b;
//         cout << " " << temp;
//         a = b;
//         b = temp;
//     }
// }

// Converting decimal to binary
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = 0, bit, i = 0;
//     while (n != 0)
//     {
//         bit = n & 1;
//         ans = bit * pow(10, i) + ans;
//         n = n >> 1;
//         i++;
//     }
//     cout << ans;
// }

// Find square root of a integer

#include <iostream>
using namespace std;
int reverse()
{
    int x, ans = 0, digit;
    cin >> x;
    while (x != 0)
    {
        digit = x % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            return 0;
        }
        ans = (ans * 10) + digit;
        x = x / 10;
    }
    return ans;
}

int main()
{
    int ans = reverse();
    cout << ans;
    return 0;
}

// bit 1 is also called "set bit"
