#include <stdio.h>

/* Função recursiva para calcular o coeficiente binomial */
int cbinominal(int n, int k, int i, int r) {
    /* se i for maior que k retorna r*/
    if (i > k) return r;
    /* senão r atualiza multiplicando pelo próximo termo e dividindo por i*/
    return cbinominal(n, k, i + 1, r * (n - k + i) / i);
}

/* Função recursiva para calcular 2^exp */
int elevado(int exp, int r) {
    /*se o expoente for igual a 0 retorna r*/
    if (exp == 0) return r;
    /*senão multiplica r por 2 e decrementa o expoente*/
    return elevado(exp - 1, r * 2);
}

/* Função recursiva principal para calcular a probabilidade */
double probabilidade(int diff, int qi, int k) {
    /*se qi for igual a 0, e se diff for igual 0 a probabilidade é 1, pois eles estão na mesma posição, agora se diff for diferente de 0 a probabilidade é 0*/ 
    if (qi == 0) {
        return (diff == 0) ? 1.0 : 0.0;
    }
    
    /* se k for igual a -1 calcula k baseado em diff e qi*/
    if (k == -1) { 
        /*Calcula quantos '+' são necessários para igualar as posições*/ 
        k = (diff + qi) / 2; 
        /*Verifica se k é inválido se fora do intervalo ou diferença ímpar*/ 
        if (k < 0 || k > qi || (diff + qi) % 2 != 0) {
            return 0.0;
        }
    }
    
    /* Calcula o coeficiente binomial */
    int comb = cbinominal(qi, k, 1, 1);
    /*Calcula o total de possíveis combinações*/ 
    int total = elevado(qi, 1);
    
    /*Retorna a probabilidade: combinações favoráveis / total de combinações*/ 
    return (double)comb / total;
}


int main() {
    /*Declara as variáveis c que é minha string, p1 a posição de Drazil, p2 a posição de Dreamoon e qi a quantidade de interrogações*/
    char c;
    int p1 = 0, p2 = 0, qi = 0;
    
    /*Ler a primeira string*/
    while (1) {
        scanf("%c", &c);
        /*Se c for igual a quebra de linha ele sai do loop*/
        if (c == '\n') break;
        /*Se c for '+' p1 recebe p1 + 1 senão p1 recebe p1 - 1*/
        p1 += (c == '+') ? 1 : -1;
    }
    
    /*Ler a segunda string*/
    while (1) {
        scanf("%c", &c);
        /*Se c for igual a quebra de linha ele sai do loop*/
        if (c == '\n') break;
        if (c == '?') qi++;
        /*Se c for '+' p2 recebe p2 + 1 senão p2 recebe p2 - 1*/
        else p2 += (c == '+') ? 1 : -1;
    }
    /*Declara diff, que será a diferença entre p1  p2 sem contar com as interroções*/
    int diff = p1 - p2;
    
    /*Por fim printa na tela a função recursiva que calcula a probabilidade*/
    printf("%.12f\n", probabilidade(diff, qi, -1));
    return 0;
}