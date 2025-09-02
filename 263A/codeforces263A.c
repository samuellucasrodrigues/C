#include <stdio.h>
#include <stdlib.h>

int main()
{/*Declarado um ponteiro de um ponteiro que servirá como a matriz e outras três variáveis do tipo inteiro */
    int **M;
    int l=0,c=0, diff=0;  
/*É feita uma alocação dinâmica para ler e guardar os valores da matriz*/
    M = malloc(5 * sizeof(int *));
    for(int i=0; i < 5; i++){
        M[i] = malloc(5 * sizeof(int));
        for(int j=0; j < 5; j++){
            scanf("%d", &M[i][j]);
/*Se em uma determinada posição o valor guardado for 1, l que são as linhas da matriz recebe mais um e c que são as colunas também, isso é feito para guardar em qual posição o número 1 está*/
            if (M[i][j] == 1) {
                l = i + 1; 
                c = j + 1;
            }
        }
    }
/*Para calcular a diferença, subtraimos as linhas e as colunas por 3 já que o centro da matriz é [3][3] e usamos um comando para que não haja números negativos*/
    diff = abs(l - 3) + abs(c - 3);
    
    /*Por fim, é printado a diferença de onde o número 1 está do centro e é liberado a memória da matriz*/
    printf("%d\n", diff);

    for(int i = 0; i < 5; i++){
        free(M[i]);
    }
    free(M);

    return 0;
}