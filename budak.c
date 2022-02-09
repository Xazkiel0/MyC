#include <stdio.h>

int main()
{
    char namaTim[12] = "";
    char line[37] = "";
    int a, b, c;
    int baris;
    scanf("%d", &baris);

    printf("%s","+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n| NO  | Nama Tim                        |   A   |   B   |   C   | Total |\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
    for (int i = 1; i <= baris; i++)
    {
        scanf("%s%d%d%d", &namaTim, &a, &b, &c);
        printf("%s %d %d %d", namaTim, a, b, c);
    }

    printf("%s", namaTim);
}