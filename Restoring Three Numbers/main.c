/* Lab 02
    Autor: Samuel Lucas
*/

#include <stdio.h>

int main(){

    /*Primeiramente é declarada 7 vairáveis, as 4 primeiras são os valores a serem lidos(x1,x2,x3,x4), as variáveis a, b e c são os resultados que é necessário encontrar e a variável m serve para encontrar dentre as 4 primeiras qual é a maior*/
    int x1, x2, x3, x4, a, b, c, m;

    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);

    /*Agora é atribuído a m o valor de x1, que posteriormente passa por if's para encontrar o maior valor*/
    m = x1;

    if (x2 > m) m = x2;
    if (x3 > m) m = x3;
    if (x4 > m) m = x4;

    /*Depois é atribuido às variáveis a, b e c os valores para serem encontradas caso x1 seja o maior valor correspondente ao valor da soma dos 3 números, se não for, novamente é passada por if's para saber qual variável possui o maior valor e atribuir as operações certas para a, b e c para cada situação*/
    a = m - x2;
    b = m - x3;
    c = m - x4;

    if(m == x2){
        a = m - x1;
        b = m - x3;
        c = m - x4;

    }else if(m == x3){
        a = m - x1;
        b = m - x2;
        c = m - x4;
    }else if(m == x4){
        a = m - x1;
        b = m - x2;
        c = m - x3;
    }

    /*Por fim é printado o valor das 3 variáveis*/
    printf("%d %d %d\n", a, b, c);

    return 0;

}
