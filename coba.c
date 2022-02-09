#include <stdio.h>

int main()
{
    int n, hsl = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        hsl = hsl * i;
    }
    printf("%d", hsl);
}