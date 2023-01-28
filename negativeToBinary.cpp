#include <iostream>
#include <math.h>
using namespace std;
// -5 -> 5 -> 101 -> 2's complement of whole 4 byte number
int decToBinary(int a)
{
    int res = 0, bit, i = 0;
    while (a != 0)
    {
        bit = a & 1;
        res = bit * pow(10, i) + res;
        a = a >> 1;
        i++;
    }
    return res;
}
int main()
{
    int num, bnry;
    cout << "Enter the negative number : \n";
    cin >> num;
    num = -1 * num;
    bnry = decToBinary(num);
    // 1's complement
    int newbnry = (~bnry);
    newbnry = decToBinary(newbnry);
    cout << newbnry;
    return 0;
}