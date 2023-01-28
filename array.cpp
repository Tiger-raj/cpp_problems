#include <iostream>
using namespace std;
// void modify(int arr[], int size)
// {
//     arr[4] = 69;
// }
// int main()
// {
//     int number[10] = {2, 3, 4, 5};
//     modify(number, 4);
//     cout << number[4];
//     return 0;
// }

/*
Printing sum of all elements of array

int main()
{
    int size, sum = 0;
    cout << "Enter the size of array : \n";
    cin >> size;
    int array[size];
    cout << "Enter the elements of array : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        sum += array[i];
    }
    cout << "Sum of all elements of array : " << sum;
    return 0;
}
*/

int main()
{
    int size, temp;
    cout << "Enter the size of array : \n";
    cin >> size;
    int array[size];
    cout << "Enter the elements of array : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < size / 2; i++)
    {
        temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}