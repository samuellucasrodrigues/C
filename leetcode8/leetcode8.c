
int myAtoi(char* s) {
    int sinal = 1;
    long num = 0;
    int min = -2147483648, max = 2147483647;

    /*Checa se há espaços em branco na string,caso haja ele pula pra próxima posição*/
    while (*s == ' ') {
        s++;
    }

    /*Checa se há algum sinal */
    if (*s == '-' || *s == '+') {
        /*Se houver algum sinal, checa qual tipo de sinal,se negativo s = -1 senão s = 1*/
        sinal = (*s == '-') ? -1 : 1;
        s++;
    }

    /* Checa se há 0 a esquerda,caso haja ele pula pra próxima posição*/
    while (*s == '0') {
        s++;
    }

    /* Checa se realmente é um número*/
    while (*s >= '0' && *s <= '9') {
        /* Se for um número, checa se o determinado número é maior que a (max - (*s - '0')/10), se for signica que é um overflow */
        if (num > (max - (*s - '0')) / 10) {
            /*se tiver ocorrido o overflow, retorna de acordo com o sinal, se sinal==1 é o max, senão, min*/ 
            return sinal == 1 ? max : min;
        }

    /* Se não houve overflow, num recebe a subtração do código da tabela ASCII do num por zero oque converte no número em inteiro e multiplica por 10 para os outros números */
        num = num * 10 + (*s - '0');
        s++;  // Avança para o próximo caractere
    }

    /* Retorna o número multiplicado pelo sinal*/
    return (int)(sinal * num);
}