#include <stdio.h>
#include <string.h>
int main()
{

    char S[101], T[101], res[101];

    scanf("%s%s", S, T);

    for (int i = 0; i < strlen(S); i++)
    {
        for (int j = 0; j < strlen(T); j++)
        {
            if (S[i] != T[j])
            {
                if (j == strlen(T) - 1)
                {
                    printf("%c", S[i]);
                }
            }
        }
    }
    // printf("%s", res);
}