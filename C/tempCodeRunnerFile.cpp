#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int nilai;
    cout << "Masukkan bil pertama : ";
    cin >> a;
    cout << "Masukkan bil kedua   : ";
    cin >> b;
    cout << "Masukkan bil ketiga  : ";
    cin >> c;
    int total = a * b * c;
    int perulangan = 0;
    for (nilai = c; nilai <= total; nilai += a)
    {
        if (nilai % a == 0)
        {
            if (nilai % b == 0)
            {
                if (nilai % c == 0)
                {
                    cout << nilai << " ";
                }
            }
        }
        perulangan++;
    }
    cout << "total ada " << perulangan << " perulangan" ;

    return 0;
}