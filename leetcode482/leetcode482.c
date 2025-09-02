char *licenseKeyFormatting(char *s, int k)
{
    int caractere = 0;
    int i = 0;

    /*Conta caracteres não traço*/
    while (s[i] != '\0')
    {
        if (s[i] != '-')
        {
            caractere++;
        }
        i++;
    }

    /*Se não houver caractere válido, a string t recebe '\0'*/
    if (caractere == 0)
    {
        char *t = malloc(1);
        t[0] = '\0';
        return t;// Retorna t
    }

    /*Calcula tamanho do primeiro grupo*/
    int grupo1 = caractere % k;
    if (grupo1 == 0)
    {
        grupo1 = k;
    }

    /*Calcula número de traços necessários*/
    int sinal = (caractere - 1) / k;
    /*Calcula tamanho do grupo*/
    int tam = caractere + sinal;

    /*Aloca memória em uma string t do tamanho do grupo*/ 
    char *t = malloc(tam + 1); // +1 para o '\0'

    i = 0;
    int j = 0, cont_grupo = 0;

    /*Preenche primeiro grupo */
    while (cont_grupo < grupo1)
    {
        if (s[i] != '-')
        {
            t[j++] = toupper(s[i]);
            cont_grupo++;
        }
        i++;
    }

    /*Preenche grupos seguintes*/ 
    cont_grupo = 0;
    while (i < strlen(s))
    {
        if (s[i] != '-')
        {
            /*Adiciona traço apenas se for o início de um grupo*/
            if (cont_grupo == 0 && j > 0)
            { 
                t[j++] = '-';
            }
            t[j++] = toupper(s[i]);
            cont_grupo = (cont_grupo + 1) % k;
        }
        i++;
    }
    /*Adiciona '\0' em t*/
    t[j] = '\0';
    /*Retorna t*/
    return t;
}