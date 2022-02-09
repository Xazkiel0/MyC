#include <stdio.h>

int main()
{
    int n, end, angka[100];

    char kata[100][100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%s", &angka[i], &kata[i]);
    }
    scanf("%d", &end);

    for (int i = 1; i <= end; i++)
    {
        int ok = 0;
        for (int j = 0; j < n; j++)
        {
            if (i % angka[j] == 0)
            {
                printf("%s", kata[j]);
                ok = 1;
            }
            if (j == n-1 && ok == 1)
            {
                printf("\n");
            }
        }
        if (ok == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
