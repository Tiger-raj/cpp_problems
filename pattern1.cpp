// ****
// *  *
// *  *
// *  *
// ****

#include <iostream>
using namespace std;
void printPatt(int r, int c)
{
    int j, i;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
int main()
{
    int r, c;
    cout << "Enter row and column respectively : \n";
    cin >> r >> c;
    printPatt(r, c);
    return 0;
}