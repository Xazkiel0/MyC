#include <stdio.h>
#include <math.h>

double luas(double a, double b, double c)
{
    double s;
    s = (a + b + c) / 2;
    s = s * (s - a) * (s - b) * (s - c);
    s = sqrt(s);
    return s;
}

int main()
{
    int n, i, isi[105][4], maxIdx, x, y, z;
    double max = 0, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        isi[i][0] = x;
        isi[i][1] = y;
        isi[i][2] = z;
        temp = luas(x, y, z);
        if (temp > max)
        {
            max = temp;
            maxIdx = i;
        }
    }
    printf("%d %d %d", isi[maxIdx][0], isi[maxIdx][1], isi[maxIdx][2]);
}