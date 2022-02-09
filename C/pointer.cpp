#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                a = 1;
            }
            else
            {
                a = a * (i + 1 - j) / j;
            }
            cout << a;
        }
        cout << endl;
    }
    cin.get();
    return 0;
}