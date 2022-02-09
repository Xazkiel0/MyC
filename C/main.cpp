#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int inp;
    cin >> inp;
    for (int i = 1; i <= inp; i++)
    {
        if (i % 2 == 1)
            for (int j = 1; j <= inp; j++)
                cout << j;
        else
            for (int j = inp; j > 0; j--)
                cout << j;

        cout << endl;
    }
}