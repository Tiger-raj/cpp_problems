#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    while (1)
    {
        switch (num)
        {
        case 1:
            cout << "One" << endl;
            break;
        default:
            cout << "Exiting successfully" << endl;
            exit(0);
        }
        num++;
    }
    return 0;
}