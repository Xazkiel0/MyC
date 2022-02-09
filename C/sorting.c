#include <stdio.h>
#include <string.h>

int main()
{
    char text[1000] = "";
    char temp;
    while (1)
    {
        fgets(text, sizeof(text), stdin);
        int n = strlen(text);
        if (!strcmp(text, "exit"))
        {
            break;
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (text[i] > text[j])
                {
                    temp = text[i];
                    text[i] = text[j];
                    text[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (text[i] != ' ')
            {
                printf("%c", text[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
