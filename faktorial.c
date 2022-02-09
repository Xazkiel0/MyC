#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, j = 2, idx = 1, c = 0, num = 0;
    int arr[1000] = {0};
    scanf("%d", &n);
    arr[0] = 1;
    while (j <= n)
    {
        c = 0;
        num = 0;
        while (c < idx)
        {
            arr[c] = arr[c] * j;
            arr[c] = arr[c] + num;
            num = arr[c] / 10;
            arr[c] = arr[c] % 10;
            c++;
        }
        while (num != 0)
        {
            arr[idx] = num % 10;
            idx++;
            num = num / 10;
        }
        j++;
    }
    idx--;
    while (idx >= 0)
    {
        printf("%d", arr[idx]);
        idx--;
    }
}