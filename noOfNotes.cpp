#include <iostream>
using namespace std;
int main()
{
    int money;
    cin >> money;
    cout << "No. of 100 rs notes : " << money / 100 << endl;
    money -= (money / 100) * 100;
    cout << "No. of 50 rs notes : " << money / 50 << endl;
    money -= (money / 50) * 50;
    cout << "No. of 20 rs notes : " << money / 20 << endl;
    money -= (money / 20) * 20;
    cout << "No. of 1 rs notes : " << money / 1 << endl;
    return 0;
}