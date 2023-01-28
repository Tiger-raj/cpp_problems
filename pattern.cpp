#include <iostream>
using namespace std;

// int main() {
//     int i,j,n;
//     cout << "Enter n: "<< endl;
//     cin >> n ;
//     int count = 1;
//     for ( i = 1; i <= n; i++)
//     {

//         for ( j = 1; j <= n; j++)
//         {
//             // cout<< j + n*(i-1) << " ";
//             cout << count << " ";
//             count++;
//         }
//         cout << endl;
//     }
// }
/*
int main() {
    int i,j,n;
    cout << "Enter n: "<< endl;
    cin >> n ;
    for ( i = 1; i <= n; i++)
    {

        for ( j = 1; j <= i; j++)
        {
            // cout << "* ";
            // cout << i;

        }
        cout << endl;
    }
}
*/

/*
int main() {
    int i,j,n,val;
    cout << "Enter n: "<< endl;
    cin >> n ;
    for ( i = 1; i <= n; i++)
    {
        val = i;
        for ( j = 1; j <= i; j++)
        {
           cout<< val<< " ";
           val++;
        }
        cout << endl;
    }
}
*/

// int main() {
//     int i,j,n;
//     cout << "Enter n: "<< endl;
//     cin >> n ;
//     for ( i = 1; i <= n; i++)
//     {

//         for ( j = 1; j <= i; j++)
//         {
//             cout << i - j + 1 << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int i,j,n;
//     char temp;
//     cout << "Enter n: "<< endl;
//     cin >> n ;
//     for ( i = 1; i <= n; i++)
//     {

//         for ( j = 1; j <= n; j++)
//         {
//             // char temp = 64 + i;
//             temp = 'A' + (i-1);
//             cout << temp << " ";
//         }
//         cout << endl;
//     }
// }

// A B C
// D E F
// G H I
/*
int main() {
    int i,j,n;
    char temp = 'A';
    cout << "Enter n: "<< endl;
    cin >> n ;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            // char temp = 64 + i;
            cout << temp << " ";
            temp += 1;
        }
        cout << endl;
    }
}
*/

/*
A B C
B C D
C D E
*/
// int main() {
//     int i,j,n;

//     cout << "Enter n: "<< endl;
//     cin >> n ;
//     for ( i = 1; i <= n; i++)
//     {
//         char temp;
//         for ( j = 1; j <= n; j++)
//         {
//             temp =  64 + i + (j-1);
//             cout << temp  << " ";
//         }
//         cout << endl;
//     }
// }

/*
D
C D
B C D
A B C D
*/
// int main() {
//     int i,j,n;

//     cout << "Enter n: "<< endl;
//     cin >> n ;
//     for ( i = 1; i <= n; i++)
//     {

//         for ( j = 1; j <= i; j++)
//         {
//             char temp = 'E' - i +(j - 1);
//             cout << temp << " ";
//         }
//         cout << endl;
//     }
// }

/*
 *
 **
 ***
 ****
 */
// int main() {
//     int i,j,n;

//     cout << "Enter n: "<< endl;
//     cin >> n ;
//     for ( i = 1; i <= n; i++)
//     {

//         for ( j = 1; j <= n-i; j++)
//         {
//             cout << " ";
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << '*';
//         }
//         cout << endl;
//     }
// }

/*
   1
  121
 12321
1234321
*/

/*

int main()
{
    int i, j, n, temp;

    cout << "Enter n: " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        temp = i;
        while (temp - 1)
        {
            cout << temp - 1 << " ";
            temp--;
        }
        cout << endl;
    }
}
*/

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
/*
int main()
{
    int i, j, n;
    cout << "Enter n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n - (i - 1); j++)
        {
            cout << j << " ";
        }
        for (j = 1; j <= i - 1; j++)
        {
            cout << '*' << " " << '*' << " ";
        }
        for (j = n - (i - 1); j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
*/