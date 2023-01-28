#include <iostream>
using namespace std;
void swapAlt(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArr(int number[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << number[i] << " ";
    }
    cout << endl;
}
int main()
{
    int number[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(number) / sizeof(int);
    swapAlt(number, size);
    printArr(number, size);
    return 0;
}