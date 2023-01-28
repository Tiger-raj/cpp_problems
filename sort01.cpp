#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 0, 1, 1, 0, 1, 0, 0, 1, 0};
    int i = 0, j = 9;
    int n = 10;

    while (i < j)
    {
        while (arr[i] == 0)
        {
            i++;
        }
        while (arr[j] == 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    for (i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
