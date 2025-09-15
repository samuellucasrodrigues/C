#include <stdio.h>
#include <string.h>

int main()
{
    char linha[1000];
    char text[100];

    while ((fgets(linha, 1000, stdin)) != NULL)
    {
        if (fgets(text, sizeof(text), stdin) == NULL)
            break;
        int c = 0;
        for (int i = 0; i < strlen(linha) - 1; i++)
        {
            for (int j = 0; j < strlen(text) - 1; j++)
            {
                if (linha[i] == text[j])
                    c++;
            }
        }
        printf("%d\n", c);
    }

    return 0;
}