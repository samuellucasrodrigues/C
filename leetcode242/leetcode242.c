bool isAnagram(char *s, char *t)
{
    /*Cria um contador do tipo vetor com 26 posições correspondente as letras do alfatbeto e todas as posições do vetor recebem 0*/
    int v[26] = {0};

    /*Checa se o tamanho das strings são iguais, se não forem, não é um anagrama e retorna falso*/
    if (strlen(s) != strlen(t))
        return false;

    for (int i = 0; i < strlen(s); i++)
    {
        /*Sendo de tamanhos iguais, vai em um loop de 0 até o tamanho de s e a letra que está na posição i é passada para o minúsculo e seu código ASCII é subtraído pelo código ASCII  de 'a' essa diferença corresponderá a posição do vetor, então todas as letras de s acrescentam em 1 nas posições de v e as letras de t decrementam em 1 nas posições de v*/
        v[tolower(s[i]) - 'a']++;
        v[tolower(t[i]) - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        /*Dentro de um loop que vai checar se alguma ads posições de v é diferente de 0, se for significa que t não é anagrama de s e retorna falso*/
        if (v[i] != 0)
            return false;
    }

    /*Se as strings não entraram em nenhum if, significa que são angramas e retorna true*/
    return true;
}