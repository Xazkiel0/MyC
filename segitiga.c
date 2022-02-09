#include <stdio.h>
#include <math.h>

double sisi(int a, int b, int c)
{
    double s = (a + b + c) / 2;
    s = s * (s - a) * (s - b) * (s - c);
    s = sqrt(s);
    return s;
}
int main()
{
    int n, isi[105][4], x, y, z, maxidx = 0;
    double temp, max = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        isi[i][0] = x;
        isi[i][1] = y;
        isi[i][2] = z;

        temp = sisi(x, y, z);

        if (temp > max)
        {
            max = temp;
            maxidx = i;
        }
    }

    printf("%d %d %d", isi[maxidx][0], isi[maxidx][1], isi[maxidx][2]);
}