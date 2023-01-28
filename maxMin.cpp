#include <iostream>
using namespace std;
int maxValue(int arr[], int size)
{
    int maxInt = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] > maxInt)
        // {
        //     maxInt = arr[i];
        // }
        // aliter :-
        maxInt = max(maxInt, arr[i]);
    }
    return maxInt;
}
int minValue(int arr[], int size)
{
    int minInt = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < minInt)
        // {
        //     minInt = arr[i];
        // }
        // aliter :-
        minInt = min(minInt, arr[i]);
    }
    return minInt;
}
int main()
{
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum value is : " << maxValue(arr, size) << endl;
    cout << "Minimum value is : " << minValue(arr, size) << endl;

    return 0;
}