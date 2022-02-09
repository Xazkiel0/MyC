#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fib(long n, int size, long long (*arr)[size])
{
    static int i = 2;
    if (n > 0)
    {
        (*arr)[i++] = (*arr)[i - 2] + (*arr)[i - 1];

        fib(n - 1,size, arr);
    }
}

int find(long n, int size, long long (*arr)[size])
{
    for (int i = 0; i <= n; i++)
    {
        if ((*arr)[i] == n)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int n1 = 1, n2 = 2;
    int size = 1005;
    long long arr[1005] = {0};
    long n;
    scanf("%d %d %ld", &n1, &n2, &n);
    arr[0] = n1;
    arr[1] = n2;
    fib(n - 1, size, &arr);
    printf("%d\n", find(n, size, arr));
    scanf("%d %d %ld", &n1, &n2, &n);
    arr[0] = n1;
    arr[1] = n2;
    fib(n - 1, size, arr);
    printf("%d\n", find(n, size, &arr));

    return 0;
}