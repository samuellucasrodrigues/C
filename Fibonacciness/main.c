/* Lab 02
    Autor: Samuel Lucas
*/

#include <stdio.h>

int main(){
/*Primeiro eu crio uma variável t para servir de contador para o meu while usar como referência para contar quantas vezes terá que fazer a seguinte operação*/
   int t;

    scanf("%d", &t);

    while(t>0){

        /*Agora eu declaro 7 variáveis, as 4 primeiras (a1, a2, a4, a5) será os números da sequência de Fibonacci que posteriormente vou lê-los, e os 3 últimos (i, x, n) são respectivamente um contador que vai adicionar a cada operação verdadeira,uma variável que vai ser um verificardor que vai checar quantas operações são verdadeiras e por fim um comparador, que vai comparar qual dos métodos de verificação a seguir chega mais longe*/
        int a1, a2, a4, a5;
        int i=0, x, n;
        scanf("%d %d %d %d", &a1, &a2, &a4, &a5);
        
/* A seguir são três operações parecidas que vão servir para verificar todos os métodos possívels da "Fibonacciness", contar quantos deram certo e comparar quais dos métodos chegou mais longe*/
        x = a1 + a2;
        if(x == a1 + a2){
            if(x == a1 + a2) i++;
            if(a4 == a2 + x) i++;
            if(a5 == x + a4) i++;
            n = i;
        }

        i = 0;
        x = a4 - a2;
        if(x == a4 - a2){
            if(x == a1 + a2) i++;
            if(a4 == a2 + x) i++;
            if(a5 == x + a4) i++;
            if(i > n) n = i;
        }

        i = 0;
        x = a5 - a4;
        if(x == a4 - a2){
            if(x == a1 + a2) i++;
            if(a4 == a2 + x) i++;
            if(a5 == x + a4) i++;
            if(i > n) n = i;
        }

/*Por fim, o computador irá printar o comparador com a maior quantidadde de operações certas possível com aquela sequência de números*/
        printf("%d\n", n);

/*Isto é para sair do laço*/
        
        t--;
    
        } 
    
    return 0;
}