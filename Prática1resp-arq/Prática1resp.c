#include <stdio.h>
#include <stdbool.h>

/*Primeiro eu declaro uma função responsiva do tipo bool*/
bool isUgly( int n){

    /*Esse primeiro if ja retorna false para qualquer número 0 ou negativo */
    if(n <= 0) return false;
    /*Agora esses Ifs encadeados vão fatorar o número até a divisão por 5, ou seja, se for múltiplo de 2 ele é divido por 2 e retorna na função, senão ele checa se é divisível por 3 e assim por diante*/
    if (n % 2 == 0)
    {
         return isUgly( n / 2);
    }else if (n % 3 == 0)
    {
        return isUgly(n / 3);
    }else if (n % 5 == 0)
    {
        return isUgly(n / 5);
    }

    /*No fim dessa função há somente um If e Else para verificar se no fim de toda a fatoração se o número é igual a 1, o que significa que ele foi fatorado e que é um "Ugly Number" retornando true , senão ele retorna else*/
    if (n == 1) return true;
    else return false;
    
}

int main()
{
    int n;

    scanf("%d", &n);

    /*Por fim, depois de declarada e depois de ler um valor para a variável, ele printa true se a função retornar true, senão ele printa false*/
    printf("%s\n", isUgly(n) ? "true" : "false");

    return 0;
}