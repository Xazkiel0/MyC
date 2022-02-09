#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    long long n1, n2, arr1[10000], arr2[10000];
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        scanf ("%d", &b);
            for (int j = 1; j < b; j++)
            {
                scanf ("%lld", &arr1[j]);
            }
            for (int n = 1; n <= b; n++)
            {
                scanf ("%lld", &arr2[n]);
            }
            for (int r = 1; r <= b; r++)
            {
                n1 = arr1[r];
                n2 = arr2[r];
                if (n1 != n2)
                {
                    n1 = n2;
                    break;
                }
            }
    printf ("%ld\n", n1);
    }
    return 0;
}
