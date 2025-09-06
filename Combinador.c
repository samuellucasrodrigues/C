#include <stdio.h>

void combine(char s1[], char s2[], char resp[]){
    int i = 0, j = 0, k = 0;
    while(s1[i] != '\0' || s2[j] != '\0'){
        if(s1[i] != '\0') resp[k++] = s1[i++];
        if(s2[j] != '\0') resp[k++] = s2[j++];
    }
    resp[k] = '\0';
}

void split(char linha[], char s1[], char s2[])
{
    int i = 0, j = 0, k = 0;
    while (linha[i] != ' ' && linha[i] != '\0')
    {
        if (linha[i] != ' ')
        {
            s1[j++] = linha[i];
        }
        i++;
    }
    s1[j] = '\0';

    while (linha[i] == ' ')
        i++;

    while (linha[i] != '\0')
    {
        if (linha[i] != ' ')
        {
            s2[k++] = linha[i];
        }
        i++;
    }
    s2[k] = '\0';
}

int main()
{
    char linha[1000], s1[500], s2[500], resp[1000];

    while (fgets(linha, 1000, stdin) != NULL)
    {
        for (int i = 0; linha[i] != '\0'; i++)
        {
            if (linha[i] == '\n') linha[i] = '\0';
        }

        s1[0] = '\0';
        s2[0] = '\0';
        resp[0] = '\0';

        split(linha, s1, s2);
        combine(s1, s2, resp);

        printf("%s\n", resp);
    }

    return 0;
}
