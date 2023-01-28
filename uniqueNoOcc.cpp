#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 1, 1, 2};
    int count[5] = {0};
    int n = 0, tempc = 1;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        int flag = 0;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            continue;
        }

        for (j = i + 1; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                tempc++;
            }
        }
        count[n] = tempc;
        tempc = 1;
        n++;
    }
    for (i = 0; i < 5; i++)
    {
        cout << count[i] << " ";
    }
    for (i = 0; i < 5; i++)
    {
        if (count[i] == 0)
            continue;
        for (j = i + 1; j < 5; j++)
        {
            if (count[i] == count[j])
            {
                cout << false;
            }
        }
    }
    cout << true;
    return 0;
}