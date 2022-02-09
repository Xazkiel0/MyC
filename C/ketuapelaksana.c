#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int n, skor[20][4], temp;
    char nama[100][32], tempStr[32];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s%d%d%d", &nama[i], &skor[i][0], &skor[i][1], &skor[i][2]);
        skor[i][3] = skor[i][0] + skor[i][1] + skor[i][2];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (skor[i][3] < skor[j][3])
            {
                for (int k = 0; k < 4; k++)
                {
                    temp = skor[i][k];
                    skor[i][k] = skor[j][k];
                    skor[j][k] = temp;
                }
                strcpy(tempStr, nama[i]);
                strcpy(nama[i], nama[j]);
                strcpy(nama[j], tempStr);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d %d %d\n", nama[i], skor[i][0], skor[i][1], skor[i][2], skor[i][3]);
    }
    return 0;
}
