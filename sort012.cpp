#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void sortArr(int arr[], int n)
{
}

int main()
{
    int arr[10] = {1, 0, 1, 2, 0, 1, 2, 0, 2, 0};
    int n = 10;
    sortArr(arr, n);
    printArr(arr, n);

    // while (i < j)
    // {
    //     while (arr[i] == 0)
    //     {
    //         i++;
    //     }
    //     while (arr[j] == 1)
    //     {
    //         j--;
    //     }
    //     if (i < j)
    //     {
    //         swap(arr[i], arr[j]);
    //         i++;
    //         j--;
    //     }
    // }

    return 0;
}
