char *intToRoman(int num)
{
    /*String para guardar o número romano */
    char *s = malloc(20 * sizeof(char));
    /*Inteiro para pular as posições da string*/
    int i = 0;

    /* Enquanto num for maior que 1000, s recebe M, pula uma posição e subtrai 1000 de num, essa mesma lógica vai se repetir para todos os outros números se ou enquanto num for maior que o número em questão, s recebe este número em romano e num é subtraído pelo mesmo e assim por diante até num ser 0*/
    while (num >= 1000) {
        s[i++] = 'M';
        num -= 1000;
    }

    if (num >= 900) {
        s[i++] = 'C';
        s[i++] = 'M';
        num -= 900;
    }
    
    if (num >= 500) {
        s[i++] = 'D';
        num -= 500;
    }
    
    if (num >= 400) {
        s[i++] = 'C';
        s[i++] = 'D';
        num -= 400;
    }
    
    while (num >= 100) {
        s[i++] = 'C';
        num -= 100;
    }
    
    if (num >= 90) {
        s[i++] = 'X';
        s[i++] = 'C';
        num -= 90;
    }
    
    if (num >= 50) {
        s[i++] = 'L';
        num -= 50;
    }
    
    if (num >= 40) {
        s[i++] = 'X';
        s[i++] = 'L';
        num -= 40;
    }
    
    while (num >= 10) {
        s[i++] = 'X';
        num -= 10;
    }
    
    if (num >= 9) {
        s[i++] = 'I';
        s[i++] = 'X';
        num -= 9;
    }
    
   if (num >= 5) {
        s[i++] = 'V';
        num -= 5;
    }
    
    if (num >= 4) {
        s[i++] = 'I';
        s[i++] = 'V';
        num -= 4;
    }
    
    while (num >= 1) {
        s[i++] = 'I';
        num -= 1;
    }
    /*Acrescenta '\0' em s para fechar a string*/
    s[i] = '\0';
    
    return s;//Retorna a string
}
